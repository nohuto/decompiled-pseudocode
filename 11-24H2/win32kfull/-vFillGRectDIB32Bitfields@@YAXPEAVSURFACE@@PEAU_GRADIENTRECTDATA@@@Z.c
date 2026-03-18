/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401ED5F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // eax
  void *v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int8 v15; // rdx^6
  unsigned __int8 v16; // r9^6
  unsigned __int8 v17; // r10^6
  __int64 v18; // rax
  char *v19; // rcx
  char *v20; // rdi
  char *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r13
  char *v24; // rdi
  char *v25; // rdi
  int v26; // ebp
  char *v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  char *v30; // [rsp+48h] [rbp-50h]
  int v31; // [rsp+A0h] [rbp+8h]
  __int64 v32; // [rsp+A0h] [rbp+8h]
  int v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B0h] [rbp+18h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v34 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v36 = v4;
  v31 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v9 = *((int *)a2 + 45);
    v32 = *((_QWORD *)a2 + 11);
    v35 = *((_QWORD *)a2 + 12);
    if ( (int)v9 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v9;
      v7 += *((_QWORD *)a2 + 11) * v9;
      v8 += *((_QWORD *)a2 + 12) * v9;
    }
    v10 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v2);
    if ( v5 )
    {
      v29 = *((int *)a1 + 22);
      v11 = *((_QWORD *)a2 + 10);
      while ( 1 )
      {
        --v5;
        v12 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v13 = (void *)v10;
        v14 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
        if ( v14 )
        {
          if ( (v10 & 4) == 0 )
            goto LABEL_8;
          *(_DWORD *)v10 = v12;
          if ( --v14 )
            break;
        }
LABEL_10:
        v7 += v32;
        v6 += v11;
        v8 += v35;
        v10 += v29;
        if ( !v5 )
          return;
      }
      v13 = (void *)(v10 + 4);
LABEL_8:
      memset64(v13, v12 | ((unsigned __int64)v12 << 32), v14 >> 1);
      v4 = v36;
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = v12;
      goto LABEL_10;
    }
  }
  else
  {
    v15 = BYTE6(*((_QWORD *)a2 + 8));
    v16 = BYTE6(v7);
    v17 = BYTE6(v6);
    v18 = *((int *)v3 + 44);
    if ( (int)v18 > 0 )
    {
      v6 += *((_QWORD *)v3 + 14) * v18;
      v7 += *((_QWORD *)v3 + 15) * v18;
      v17 = BYTE6(v6);
      v16 = BYTE6(v7);
      v8 += *((_QWORD *)v3 + 16) * *((int *)v3 + 44);
      v15 = BYTE6(v8);
    }
    v19 = (char *)(*((_QWORD *)a1 + 10) + *((_DWORD *)v3 + 9) * v2 + 4LL * *((int *)v3 + 8));
    v27 = v19;
    v20 = v19;
    v30 = v19;
    v21 = v19;
    if ( v19 != &v19[4 * *((int *)v3 + 10)] )
    {
      v28 = *((_QWORD *)v3 + 16);
      v22 = *((_QWORD *)v3 + 14);
      v23 = *((_QWORD *)v3 + 15);
      v24 = &v19[4 * *((int *)v3 + 10)];
      do
      {
        v6 += v22;
        v7 += v23;
        v8 += v28;
        *(_DWORD *)v21 = XEPALOBJ::ulDispatchGFPEFunction(
                           v36,
                           *(unsigned int *)(*(_QWORD *)v36 + 100LL),
                           v17 | ((v16 | (v15 << 8)) << 8));
        v21 += 4;
        v15 = BYTE6(v8);
        v16 = BYTE6(v7);
        v17 = BYTE6(v6);
      }
      while ( v21 != v24 );
      v20 = v30;
      v3 = a2;
      v19 = v30;
      v5 = v31;
      v2 = v34;
    }
    v25 = &v20[v2];
    v26 = v5 - 1;
    while ( v26 > 0 )
    {
      --v26;
      memmove(v25, v19, 4 * *((_DWORD *)v3 + 10));
      v19 = v27;
      v25 += v2;
    }
  }
}
