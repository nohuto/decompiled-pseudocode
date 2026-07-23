/*
 * XREFs of HalBuildScatterGatherListDmaThin @ 0x1403CAAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalBuildScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned int a10)
{
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 *v15; // rdx
  unsigned int v16; // esi
  unsigned int v17; // r9d
  __int64 v18; // r12
  __int64 v19; // rbp
  unsigned int v20; // r8d
  unsigned __int64 v21; // rcx
  unsigned int v22; // r10d
  __int64 *i; // rcx
  __int64 v24; // r11
  unsigned int v25; // eax
  unsigned int v26; // r10d
  __int64 v27; // r14
  ULONG_PTR v28; // rdx
  __int64 Pool2; // r15
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // r14
  unsigned int v34; // r8d
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  __int64 *j; // r11
  __int64 v38; // r10
  unsigned int v39; // eax
  unsigned int v40; // r9d
  __int64 v41; // r14
  __int64 v42; // r12

  v11 = a2;
  v12 = a4 - *((unsigned int *)a3 + 11) - a3[4];
  do
  {
    v13 = *((unsigned int *)a3 + 10);
    if ( v12 < v13 )
      break;
    a3 = (__int64 *)*a3;
    v12 -= v13;
  }
  while ( a3 );
  if ( !a3 )
    return 3221225485LL;
  v14 = v12;
  v15 = a3;
  v16 = a5;
  v17 = a5;
  v18 = 0LL;
  if ( a5 )
  {
    v19 = 0LL;
    do
    {
      if ( !v15 )
        break;
      v20 = v17;
      if ( *((_DWORD *)v15 + 10) - v14 <= v17 )
        v20 = *((_DWORD *)v15 + 10) - v14;
      v21 = (unsigned int)(*((_DWORD *)v15 + 11) + v14);
      v17 -= v20;
      v22 = v21 & 0xFFF;
      for ( i = &v15[(v21 >> 12) + 6]; v20; v22 = 0 )
      {
        v24 = v22 + (*i << 12);
        v25 = 4096 - v22;
        v26 = v20;
        if ( v25 <= v20 )
          v26 = v25;
        if ( v24 != v19 + 1 || !(_DWORD)v18 )
          v18 = (unsigned int)(v18 + 1);
        v20 -= v26;
        ++i;
        v19 = v24 + v26 - 1LL;
      }
      v15 = (__int64 *)*v15;
      v14 = 0;
    }
    while ( v17 );
    v11 = a2;
  }
  v27 = 24 * v18 + 16;
  v28 = 24 * v18 + 120;
  if ( a9 )
  {
    if ( a10 < v28 )
      return 3221225507LL;
    Pool2 = a9;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x42uLL, v28, 0x446C6148u);
    if ( !Pool2 )
      return 3221225626LL;
    v11 = a2;
  }
  *(_DWORD *)Pool2 = v18;
  *(_QWORD *)(v27 + Pool2 + 32) = v11;
  *(_BYTE *)(v27 + Pool2 + 97) = a9 == 0;
  v30 = 0LL;
  v31 = 0LL;
  *(_QWORD *)(v27 + Pool2 + 24) = a1;
  *(_QWORD *)(v27 + Pool2 + 40) = *(_QWORD *)(v11 + 32);
  v32 = v27 + Pool2;
  *(_QWORD *)(v32 + 72) = a7;
  v33 = Pool2 + 16;
  *(_QWORD *)(v32 + 64) = a6;
  *(_DWORD *)(v32 + 56) = a5;
  *(_QWORD *)(v32 + 48) = a3;
  *(_DWORD *)(v32 + 60) = v12;
  *(_QWORD *)(v32 + 80) = Pool2;
  *(_BYTE *)(v32 + 96) = 0;
  *(_DWORD *)(v32 + 16) = 2;
  *(_BYTE *)(v32 + 98) = 0;
  *(_QWORD *)(v32 + 88) = 0LL;
  *(_QWORD *)(Pool2 + 8) = v32;
  if ( a5 )
  {
    while ( a3 )
    {
      v34 = v16;
      if ( *((_DWORD *)a3 + 10) - (int)v12 <= v16 )
        v34 = *((_DWORD *)a3 + 10) - v12;
      v35 = v12 + *((_DWORD *)a3 + 11);
      v16 -= v34;
      v36 = v35 & 0xFFF;
      for ( j = &a3[((unsigned __int64)v35 >> 12) + 6]; v34; v30 = v38 + v42 )
      {
        v38 = v36 + (*j << 12);
        v39 = 4096 - v36;
        v40 = v34;
        if ( v39 <= v34 )
          v40 = v39;
        if ( v38 != v30 + 1 || !(_DWORD)v31 )
        {
          v41 = v31 + 2 * (v31 + 1);
          v31 = (unsigned int)(v31 + 1);
          v33 = Pool2 + 8 * v41;
          *(_QWORD *)v33 = v38;
          *(_DWORD *)(v33 + 8) = 0;
          *(_QWORD *)(v33 + 16) = 0LL;
        }
        *(_DWORD *)(v33 + 8) += v40;
        v34 -= v40;
        ++j;
        v42 = v40 - 1LL;
        v36 = 0;
      }
      a3 = (__int64 *)*a3;
      LODWORD(v12) = 0;
      if ( !v16 )
        goto LABEL_31;
    }
    if ( (_DWORD)v31 )
      *(_DWORD *)(Pool2 + 24 * ((unsigned int)(v31 - 1) + 1LL)) += v16;
  }
LABEL_31:
  *(_DWORD *)Pool2 = v31;
  if ( a6 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v32 + 32), *(_QWORD *)(v32 + 40));
  return 0LL;
}
