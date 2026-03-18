/*
 * XREFs of GrayFastExpAA_CX @ 0x1402F9DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayFastExpAA_CX(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // r13
  int v9; // r15d
  unsigned __int8 *v10; // rsi
  int v11; // ebp
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r10d
  int v16; // ebx
  int v17; // edx
  int v18; // r9d
  int v19; // r11d
  _WORD *v20; // rdi
  _WORD *v21; // rdi
  _WORD *v22; // rdi
  unsigned int v23; // ecx
  _WORD *v24; // rdi
  _WORD *v25; // rdi
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  _WORD *v28; // rdi
  unsigned __int16 v29; // [rsp+4h] [rbp-34h]
  unsigned __int16 v30; // [rsp+48h] [rbp+10h]

  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a1 + 80);
    v6 = *(unsigned __int16 **)(a1 + 88);
    LOWORD(v9) = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2 - 1)];
    v10 = (unsigned __int8 *)(v5 + a2 + 1);
    LOWORD(v11) = GrayIdxWORD[*(unsigned __int8 *)(v5 + a2)];
    while ( 1 )
    {
      v12 = *v10++;
      v13 = *v6++;
      v14 = (unsigned __int16)v11;
      v15 = (unsigned __int16)v11;
      v16 = (unsigned __int16)v11;
      v17 = (unsigned __int16)v9;
      v18 = (unsigned __int16)v9;
      v19 = (unsigned __int16)v9;
      v29 = v9;
      v30 = v9;
      v9 = (unsigned __int16)v11;
      v11 = GrayIdxWORD[v12];
      if ( v13 == 1 )
        break;
      switch ( v13 )
      {
        case 2:
          *a3 = (unsigned int)(v18 + 3 * v15 + 2) >> 2;
          a3 = (_WORD *)((char *)a3 + a5);
          v27 = (unsigned int)(v11 + 3 * v15 + 2) >> 2;
          goto LABEL_16;
        case 3:
          *a3 = (unsigned int)(v16 + v19 + 2 * (2 * v16 + v19 + 2)) >> 3;
          v28 = (_WORD *)((char *)a3 + a5);
          *v28 = (v19 + v11 + 14 * v16 + 8) >> 4;
          a3 = (_WORD *)((char *)v28 + a5);
          v26 = v16 + v11 + 2 * (2 * v16 + v11) + 4;
LABEL_11:
          v27 = v26 >> 3;
LABEL_16:
          *a3 = v27;
          goto LABEL_17;
        case 4:
          *a3 = (v9 + v29 + 2 * (2 * v9 + (unsigned int)v29 + 2)) >> 3;
          v24 = (_WORD *)((char *)a3 + a5);
          *v24 = (v29 + 4 * v9 + 8 + v11 + 2 * ((unsigned int)v29 + 4 * v9)) >> 4;
          v25 = (_WORD *)((char *)v24 + a5);
          *v25 = (4 * v9 + v11 + 8 + (unsigned int)v29 + 2 * (4 * v9 + v11)) >> 4;
          a3 = (_WORD *)((char *)v25 + a5);
          v26 = v9 + v11 + 2 * (v11 + 2 * v9 + 2);
          goto LABEL_11;
        case 5:
          *a3 = (19 * v9 + 13 * (unsigned int)v30 + 16) >> 5;
          v20 = (_WORD *)((char *)a3 + a5);
          *v20 = (25 * v9 + v11 + 6 * (unsigned int)v30 + 16) >> 5;
          v21 = (_WORD *)((char *)v20 + a5);
          *v21 = (v30 + v11 + 2 * ((unsigned int)v30 + v11 + 13 * v9 + 8)) >> 5;
          v22 = (_WORD *)((char *)v21 + a5);
          *v22 = (25 * v9 + (unsigned int)v30 + 2 * (v11 + 2 * v11 + 8)) >> 5;
          a3 = (_WORD *)((char *)v22 + a5);
          v23 = 13 * v11 + 19 * v9 + 16;
          goto LABEL_15;
      }
      a3 = (_WORD *)((char *)a3 + (unsigned int)(a5 * (v13 - 1)));
LABEL_17:
      a3 = (_WORD *)((char *)a3 + a5);
      if ( a3 == a4 )
        return;
    }
    v23 = v17 + v11 + 2 * (v14 + 2 * (v17 + v14 + v11 + 4 * v14 + 4));
LABEL_15:
    v27 = v23 >> 5;
    goto LABEL_16;
  }
}
