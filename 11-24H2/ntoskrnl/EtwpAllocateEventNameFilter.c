/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x1409E7998
 * Callers:
 *     EtwpAllocateFilter @ 0x1409E773C (EtwpAllocateFilter.c)
 * Callees:
 *     strnlen @ 0x1404FD180 (strnlen.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpFreeEventNameFilter @ 0x1409E8490 (EtwpFreeEventNameFilter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // r13
  _BYTE *Pool2; // rsi
  char *v9; // r15
  char v10; // al
  __int64 v11; // rax
  _BYTE *v12; // r11
  unsigned int v13; // r15d
  unsigned int i; // r13d
  unsigned int v15; // edi
  char *v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // r10d
  __int64 v19; // r8
  unsigned __int8 *v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r8
  _QWORD *v27; // r8
  unsigned int v28; // edi
  char v29; // cl
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v39; // [rsp+70h] [rbp+18h]
  char *v40; // [rsp+78h] [rbp+20h]

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
  v6 = (unsigned int)(v3 - 20);
  if ( (unsigned int)v6 < 2 * v5 )
    return 3221225485LL;
  v7 = 24 * v5;
  Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL, v7 + v6 + 40, 0x46777445u);
  if ( !Pool2 )
    return 3221225495LL;
  v9 = (char *)ExAllocatePool2(0x40uLL, 0x100uLL, 0x46777445u);
  if ( !v9 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *Pool2 = *(_BYTE *)(v4 + 17);
  v10 = *(_BYTE *)(v4 + 16);
  if ( !v10 )
    v10 = -1;
  Pool2[1] = v10;
  v11 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    v11 = -1LL;
  *((_QWORD *)Pool2 + 1) = v11;
  *((_QWORD *)Pool2 + 2) = *(_QWORD *)(v4 + 8);
  v40 = &Pool2[v7 + 40];
  memmove(v40, (const void *)(v4 + 20), (unsigned int)v6);
  v12 = Pool2 + 24;
  *((_DWORD *)Pool2 + 6) = 0;
  *((_QWORD *)Pool2 + 4) = v9;
  *((_DWORD *)Pool2 + 7) = 1024;
  if ( (v9 + 256 >= v9 ? 0x20 : 0) != 0 )
    memset64(v9, (unsigned __int64)(Pool2 + 24) | 1, v9 + 256 >= v9 ? 0x20 : 0);
  v13 = 0;
  for ( i = 0; i < v5; ++i )
  {
    if ( v13 >= (int)v6 - 1 )
      goto LABEL_29;
    v15 = v6 - v13;
    v16 = &v40[v13];
    if ( v16 )
    {
      v17 = strnlen(&v40[v13], v15);
      v12 = Pool2 + 24;
    }
    else
    {
      v17 = 0;
    }
    v18 = v17 + 1;
    if ( v17 + 1 > v15 || v17 == -1 )
      goto LABEL_29;
    v19 = v17;
    v20 = (unsigned __int8 *)&v40[v13];
    v21 = 314159LL;
    if ( v17 >= 8uLL )
    {
      v22 = (unsigned __int64)v17 >> 3;
      v19 = v17 - 8 * v22;
      do
      {
        v23 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v21))))));
        v24 = v20[7];
        v20 += 8;
        v21 = v24 + 37 * v23;
        --v22;
      }
      while ( v22 );
    }
    v25 = v19 - 1;
    if ( !v25 )
      goto LABEL_26;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_25;
    v34 = v26 - 1;
    if ( !v34 )
      goto LABEL_40;
    v35 = v34 - 1;
    if ( !v35 )
      goto LABEL_39;
    v36 = v35 - 1;
    if ( !v36 )
      goto LABEL_38;
    v37 = v36 - 1;
    if ( !v37 )
      goto LABEL_37;
    if ( v37 == 1 )
    {
      v21 = *v20++ + 37 * v21;
LABEL_37:
      v21 = *v20++ + 37 * v21;
LABEL_38:
      v21 = *v20++ + 37 * v21;
LABEL_39:
      v21 = *v20++ + 37 * v21;
LABEL_40:
      v21 = *v20++ + 37 * v21;
LABEL_25:
      v21 = *v20++ + 37 * v21;
LABEL_26:
      v21 = *v20 + 37 * v21;
    }
    v13 += v18;
    v27 = &Pool2[16 * i + 40 + 8 * i];
    v27[1] = v21;
    v27[2] = v16;
    v28 = *((_DWORD *)v12 + 1);
    v29 = v28 & 0x1F;
    v39 = v21 & (-1LL << (v28 & 0x1F));
    v30 = 37
        * (BYTE6(v39)
         + 37
         * (BYTE5(v39)
          + 37
          * (BYTE4(v39)
           + 37
           * ((((unsigned int)v21 & (-1 << v29)) >> 24)
            + 37
            * ((unsigned __int8)(((unsigned int)v21 & (-1 << v29)) >> 16)
             + 37
             * ((unsigned __int8)((unsigned __int16)(v21 & (-1 << v29)) >> 8)
              + 37 * ((unsigned __int8)(v21 & (-1 << v29)) + 11623883)))))))
        + HIBYTE(v39);
    v31 = *((_QWORD *)v12 + 1);
    v32 = v30 & ((v28 >> 5) - 1);
    *v27 = *(_QWORD *)(v31 + 8 * v32);
    *(_QWORD *)(v31 + 8 * v32) = v27;
    ++*(_DWORD *)v12;
  }
  if ( v13 != (_DWORD)v6 )
  {
LABEL_29:
    v2 = -1073741811;
    EtwpFreeEventNameFilter(Pool2);
    return v2;
  }
  *a2 = Pool2;
  return v2;
}
