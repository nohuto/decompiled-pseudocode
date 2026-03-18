/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x1409E501C
 * Callers:
 *     EtwpAllocateFilter @ 0x1409E4DC0 (EtwpAllocateFilter.c)
 * Callees:
 *     strnlen @ 0x1404FD140 (strnlen.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpFreeEventNameFilter @ 0x1409E5B0C (EtwpFreeEventNameFilter.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  __int64 v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  _BYTE *Pool2; // rsi
  char *v8; // r15
  char v9; // al
  __int64 v10; // rax
  _BYTE *v11; // r11
  unsigned int v12; // r15d
  unsigned int i; // r13d
  unsigned int v14; // edi
  char *v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // r10d
  __int64 v18; // r8
  unsigned __int8 *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  _QWORD *v26; // r8
  unsigned int v27; // edi
  char v28; // cl
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v38; // [rsp+70h] [rbp+18h]
  char *v39; // [rsp+78h] [rbp+20h]

  v2 = 0;
  if ( *a2 )
    return 3221225485LL;
  v3 = a1[2];
  if ( (unsigned int)(v3 - 24) > 0xFE8 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
  if ( !*(_WORD *)(*(_QWORD *)a1 + 18LL) )
    return 3221225485LL;
  v6 = v3 - 20;
  if ( v6 < 2 * v5 )
    return 3221225485LL;
  Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v8 = (char *)ExAllocatePool2(0x40uLL);
  if ( !v8 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *Pool2 = *(_BYTE *)(v4 + 17);
  v9 = *(_BYTE *)(v4 + 16);
  if ( !v9 )
    v9 = -1;
  Pool2[1] = v9;
  v10 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    v10 = -1LL;
  *((_QWORD *)Pool2 + 1) = v10;
  *((_QWORD *)Pool2 + 2) = *(_QWORD *)(v4 + 8);
  v39 = &Pool2[24 * v5 + 40];
  memmove(v39, (const void *)(v4 + 20), v6);
  v11 = Pool2 + 24;
  *((_DWORD *)Pool2 + 6) = 0;
  *((_QWORD *)Pool2 + 4) = v8;
  *((_DWORD *)Pool2 + 7) = 1024;
  if ( (v8 + 256 >= v8 ? 0x20 : 0) != 0 )
    memset64(v8, (unsigned __int64)(Pool2 + 24) | 1, v8 + 256 >= v8 ? 0x20 : 0);
  v12 = 0;
  for ( i = 0; i < v5; ++i )
  {
    if ( v12 >= v6 - 1 )
      goto LABEL_29;
    v14 = v6 - v12;
    v15 = &v39[v12];
    if ( v15 )
    {
      v16 = strnlen(&v39[v12], v14);
      v11 = Pool2 + 24;
    }
    else
    {
      v16 = 0;
    }
    v17 = v16 + 1;
    if ( v16 + 1 > v14 || v16 == -1 )
      goto LABEL_29;
    v18 = v16;
    v19 = (unsigned __int8 *)&v39[v12];
    v20 = 314159LL;
    if ( v16 >= 8uLL )
    {
      v21 = (unsigned __int64)v16 >> 3;
      v18 = v16 - 8 * v21;
      do
      {
        v22 = v19[6]
            + 37 * (v19[5] + 37 * (v19[4] + 37 * (v19[3] + 37 * (v19[2] + 37 * (v19[1] + 37 * (*v19 + 37 * v20))))));
        v23 = v19[7];
        v19 += 8;
        v20 = v23 + 37 * v22;
        --v21;
      }
      while ( v21 );
    }
    v24 = v18 - 1;
    if ( !v24 )
      goto LABEL_26;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_25;
    v33 = v25 - 1;
    if ( !v33 )
      goto LABEL_40;
    v34 = v33 - 1;
    if ( !v34 )
      goto LABEL_39;
    v35 = v34 - 1;
    if ( !v35 )
      goto LABEL_38;
    v36 = v35 - 1;
    if ( !v36 )
      goto LABEL_37;
    if ( v36 == 1 )
    {
      v20 = *v19++ + 37 * v20;
LABEL_37:
      v20 = *v19++ + 37 * v20;
LABEL_38:
      v20 = *v19++ + 37 * v20;
LABEL_39:
      v20 = *v19++ + 37 * v20;
LABEL_40:
      v20 = *v19++ + 37 * v20;
LABEL_25:
      v20 = *v19++ + 37 * v20;
LABEL_26:
      v20 = *v19 + 37 * v20;
    }
    v12 += v17;
    v26 = &Pool2[16 * i + 40 + 8 * i];
    v26[1] = v20;
    v26[2] = v15;
    v27 = *((_DWORD *)v11 + 1);
    v28 = v27 & 0x1F;
    v38 = v20 & (-1LL << (v27 & 0x1F));
    v29 = 37
        * (BYTE6(v38)
         + 37
         * (BYTE5(v38)
          + 37
          * (BYTE4(v38)
           + 37
           * ((((unsigned int)v20 & (-1 << v28)) >> 24)
            + 37
            * ((unsigned __int8)(((unsigned int)v20 & (-1 << v28)) >> 16)
             + 37
             * ((unsigned __int8)((unsigned __int16)(v20 & (-1 << v28)) >> 8)
              + 37 * ((unsigned __int8)(v20 & (-1 << v28)) + 11623883)))))))
        + HIBYTE(v38);
    v30 = *((_QWORD *)v11 + 1);
    v31 = v29 & ((v27 >> 5) - 1);
    *v26 = *(_QWORD *)(v30 + 8 * v31);
    *(_QWORD *)(v30 + 8 * v31) = v26;
    ++*(_DWORD *)v11;
  }
  if ( v12 != v6 )
  {
LABEL_29:
    v2 = -1073741811;
    EtwpFreeEventNameFilter(Pool2);
    return v2;
  }
  *a2 = Pool2;
  return v2;
}
