/*
 * XREFs of ?BltLnkSrcCopyMsk8@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1401A21A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rdi
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // r11d
  __int64 v10; // rsi
  _BYTE *v11; // r9
  int v12; // r14d
  _BYTE *v13; // r10
  int v14; // ebp
  char v15; // cl
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // edx
  unsigned __int8 v20; // [rsp+0h] [rbp-48h]
  int v21; // [rsp+4h] [rbp-44h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v21 = *((_DWORD *)a2 + 6);
  v20 = *((_BYTE *)a2 + 36);
  while ( v5 )
  {
    --v5;
    v11 = (_BYTE *)(v7 + *((int *)v4 + 12));
    v12 = *((_DWORD *)v4 + 7);
    v13 = (_BYTE *)(v8 + *((int *)v4 + 14));
    v14 = *((_DWORD *)v6 + 7);
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v15 = 0;
        v16 = v20 ^ *(unsigned __int8 *)(((__int64)v14 >> 3) + v10);
        v17 = 8 - (v14 & 7);
        v18 = v21 - v14;
        if ( v17 > v12 )
        {
          v17 = v12;
          v15 = 8 - (v14 & 7) - v12;
        }
        if ( v17 > v18 )
        {
          v15 += v17 - v18;
          v17 = v21 - v14;
        }
        v12 -= v17;
        v14 += v17;
        if ( !v16 )
          goto LABEL_9;
        v19 = v16 >> v15;
        switch ( v17 )
        {
          case 1:
            goto LABEL_45;
          case 2:
            goto LABEL_42;
          case 3:
            goto LABEL_39;
          case 4:
            goto LABEL_36;
          case 5:
            goto LABEL_33;
          case 6:
            goto LABEL_30;
          case 7:
            goto LABEL_27;
        }
        if ( v17 == 8 )
          break;
LABEL_9:
        v11 += v17;
        v13 += v17;
        if ( v14 == v21 )
          v14 = 0;
        if ( v12 <= 0 )
        {
          v6 = a2;
          v4 = a1;
          goto LABEL_13;
        }
      }
      if ( (v19 & 1) != 0 )
        v13[7] = v11[7];
      v19 >>= 1;
LABEL_27:
      if ( (v19 & 1) != 0 )
        v13[6] = v11[6];
      v19 >>= 1;
LABEL_30:
      if ( (v19 & 1) != 0 )
        v13[5] = v11[5];
      v19 >>= 1;
LABEL_33:
      if ( (v19 & 1) != 0 )
        v13[4] = v11[4];
      v19 >>= 1;
LABEL_36:
      if ( (v19 & 1) != 0 )
        v13[3] = v11[3];
      v19 >>= 1;
LABEL_39:
      if ( (v19 & 1) != 0 )
        v13[2] = v11[2];
      v19 >>= 1;
LABEL_42:
      if ( (v19 & 1) != 0 )
        v13[1] = v11[1];
      v19 >>= 1;
LABEL_45:
      if ( (v19 & 1) != 0 )
        *v13 = *v11;
      goto LABEL_9;
    }
LABEL_13:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    if ( *((int *)v4 + 9) <= 0 )
    {
      if ( v9 )
      {
        --v9;
        v10 += *((int *)v6 + 8);
      }
      else
      {
        v9 = *((_DWORD *)v6 + 4) - 1;
        v10 = *((_QWORD *)v6 + 1) + *((_DWORD *)v6 + 8) * v9;
      }
    }
    else
    {
      ++v9;
      v10 += *((int *)v6 + 8);
      if ( v9 >= *((_DWORD *)v6 + 4) )
      {
        v10 = *((_QWORD *)v6 + 1);
        v9 = 0;
      }
    }
  }
}
