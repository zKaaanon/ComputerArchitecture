#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media_aritmetica(float datos[], int n){
	float pivote = 0;
	for(int i = 0; i < n; i++){
		pivote += datos[i];
	}
	
	pivote = pivote / n;
	
	return pivote;
}

float media_armonica(float datos[], int n){
	float pivote = 0;
	for(int i = 0; i < n; i++){
		pivote += 1 / datos[i];
	}
	
	pivote = pivote / n;
	
	pivote = 1 / pivote;
	
	return pivote;
}

float media_geometrica(float datos[], int n){
	float pivote = 1;
	for(int i = 0; i < n; i++){
		pivote *= datos[i];
	}
	
	pivote = pow(pivote , 1.0 / (float)n);
	
	return pivote;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("A ver...\n");
        printf("Primero, mete nombre del programa que es Practica2\n");
        printf("Segundo, mete una letra ya sea A, H o G para la media\n");
        printf("Por ultimo, los datos de entrada\n");
        return 1;
    }
    
    //AQUI ESTA EL ERROR
    char media = argv[2][0];
	int n = argc - 3;
    float datos[n];
    
    
    // Toco convertir los argumentos porque si no, no jala
    for(int i = 0; i < n; i++) {
        datos[i] = atof(argv[i + 3]);
    }
    
    float resultado;
    
    
    switch(media) {
        case 'A':
            resultado = media_aritmetica(datos, n);
            printf("La media aritmetica es: %.2f\n", resultado);
            break;
        case 'H':
            resultado = media_armonica(datos, n);
            printf("La media armonica es: %.2f\n", resultado);
            break;
        case 'G':
            resultado = media_geometrica(datos, n);
            printf("La media geometrica es: %.2f\n", resultado);
            break;
        default:
            printf("Recuerda...\n");
            printf("A es para medida aritmetica\n");
            printf("H es para medida armonica\n");
            printf("G es para la geometrica\n");
            return 1;
    }
    
    return 0;
    
    
}
