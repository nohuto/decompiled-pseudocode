/*
 * XREFs of ?BltLnkPatMaskCopy24@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x140196190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy24(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // ebp
  __int64 v5; // r13
  __int64 v6; // r12
  char v7; // r10
  unsigned int v8; // r11d
  struct BLTINFO *v9; // rdi
  unsigned int v10; // ebx
  int v11; // r14d
  int v12; // esi
  unsigned int v13; // r8d
  int v14; // r9d
  int v15; // r15d
  int v16; // edi
  char v17; // cl
  unsigned int v18; // r8d
  _BYTE *v19; // rdx

  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = a2;
  v8 = a2 >> 8;
  v9 = a1;
  v10 = HIWORD(a2);
  while ( v4 )
  {
    --v4;
    v15 = *((_DWORD *)v9 + 7);
    v19 = (_BYTE *)(v6 + 3 * *((_DWORD *)v9 + 14));
    if ( v15 > 0 )
    {
      v16 = *((_DWORD *)v9 + 12);
      while ( 1 )
      {
        v11 = v15;
        v12 = v15;
        v13 = a4 ^ *(unsigned __int8 *)(((__int64)v16 >> 3) + v5);
        v14 = 8 - (v16 & 7);
        if ( v14 <= v15 )
          v11 = 8 - (v16 & 7);
        v15 -= v11;
        v16 += v11;
        if ( v13 == 255 )
          goto LABEL_38;
        v17 = v14 - v12;
        if ( v14 <= v12 )
          v17 = 0;
        v18 = v13 >> v17;
        switch ( v11 )
        {
          case 1:
            goto LABEL_36;
          case 2:
            goto LABEL_33;
          case 3:
            goto LABEL_30;
          case 4:
            goto LABEL_27;
          case 5:
            goto LABEL_24;
          case 6:
            goto LABEL_21;
          case 7:
            goto LABEL_18;
        }
        if ( v11 == 8 )
          break;
LABEL_38:
        v19 += 3 * v11;
        if ( v15 <= 0 )
        {
          v9 = a1;
          goto LABEL_40;
        }
      }
      if ( (v18 & 1) == 0 )
      {
        v19[23] = v10;
        v19[22] = v8;
        v19[21] = v7;
      }
      v18 >>= 1;
LABEL_18:
      if ( (v18 & 1) == 0 )
      {
        v19[20] = v10;
        v19[19] = v8;
        v19[18] = v7;
      }
      v18 >>= 1;
LABEL_21:
      if ( (v18 & 1) == 0 )
      {
        v19[17] = v10;
        v19[16] = v8;
        v19[15] = v7;
      }
      v18 >>= 1;
LABEL_24:
      if ( (v18 & 1) == 0 )
      {
        v19[14] = v10;
        v19[13] = v8;
        v19[12] = v7;
      }
      v18 >>= 1;
LABEL_27:
      if ( (v18 & 1) == 0 )
      {
        v19[11] = v10;
        v19[10] = v8;
        v19[9] = v7;
      }
      v18 >>= 1;
LABEL_30:
      if ( (v18 & 1) == 0 )
      {
        v19[8] = v10;
        v19[7] = v8;
        v19[6] = v7;
      }
      v18 >>= 1;
LABEL_33:
      if ( (v18 & 1) == 0 )
      {
        v19[5] = v10;
        v19[4] = v8;
        v19[3] = v7;
      }
      v18 >>= 1;
LABEL_36:
      if ( (v18 & 1) == 0 )
      {
        v19[2] = v10;
        v19[1] = v8;
        *v19 = v7;
      }
      goto LABEL_38;
    }
LABEL_40:
    v6 += *((int *)v9 + 11);
    v5 += *((int *)v9 + 10);
  }
}
