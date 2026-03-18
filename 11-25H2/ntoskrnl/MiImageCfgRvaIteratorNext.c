/*
 * XREFs of MiImageCfgRvaIteratorNext @ 0x14099C180
 * Callers:
 *     MiImageCfgRvaIteratorFirst @ 0x14099C150 (MiImageCfgRvaIteratorFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageCfgRvaIteratorNext(_DWORD *a1, unsigned int **a2, int *a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int *v9; // rcx
  int v10; // r14d
  char v11; // si
  unsigned int v12; // ebp
  unsigned int v13; // edi
  char v14; // bp
  int v15; // r14d
  int v16; // eax
  bool v17; // bp

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  result = 0LL;
  if ( !v3 )
    return result;
  v8 = (unsigned int)a1[21];
  v9 = *a2;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_14;
    v10 = a1[9];
    v11 = 0;
    v12 = a1[8];
    *a3 = 0;
    v13 = *v9;
    if ( *v9 <= (unsigned int)result || v13 >= v12 )
      break;
    v14 = 1;
    if ( v10 )
    {
      v14 = (v10 & 1) == 0;
      if ( (v10 & 2) != 0 )
        v14 |= 2u;
    }
    if ( (unsigned int)v8 <= 4 )
    {
      v17 = 0;
    }
    else
    {
      v11 = *((_BYTE *)v9 + 4);
      v15 = 0;
      v16 = (unsigned __int8)(v14 & v11);
      v17 = v16 != 0;
      if ( v16 )
        goto LABEL_10;
    }
    *a3 = 1;
    v15 = 1;
LABEL_10:
    if ( (v11 & 2) != 0 )
      *a3 = v15 | 4;
    v9 = (unsigned int *)((char *)v9 + v8);
    --v3;
    if ( !v17 )
    {
      v4 = v13;
LABEL_14:
      *((_DWORD *)a2 + 2) = v3;
      *a2 = v9;
      return v4;
    }
    LODWORD(result) = v13;
  }
  dword_140E2D4E8 = 14;
  return v4;
}
