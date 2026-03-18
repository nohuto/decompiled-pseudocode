/*
 * XREFs of HalBuildScatterGatherListDmaThin @ 0x1403E2460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  __int64 Pool2; // r15
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // r14
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  unsigned int v35; // r9d
  __int64 *j; // r11
  __int64 v37; // r10
  unsigned int v38; // eax
  unsigned int v39; // r9d
  __int64 v40; // r14
  __int64 v41; // r12

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
  if ( a9 )
  {
    if ( a10 < (unsigned __int64)(24 * v18 + 120) )
      return 3221225507LL;
    Pool2 = a9;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x42uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v11 = a2;
  }
  *(_DWORD *)Pool2 = v18;
  *(_QWORD *)(v27 + Pool2 + 32) = v11;
  *(_BYTE *)(v27 + Pool2 + 97) = a9 == 0;
  v29 = 0LL;
  v30 = 0LL;
  *(_QWORD *)(v27 + Pool2 + 24) = a1;
  *(_QWORD *)(v27 + Pool2 + 40) = *(_QWORD *)(v11 + 32);
  v31 = v27 + Pool2;
  *(_QWORD *)(v31 + 72) = a7;
  v32 = Pool2 + 16;
  *(_QWORD *)(v31 + 64) = a6;
  *(_DWORD *)(v31 + 56) = a5;
  *(_QWORD *)(v31 + 48) = a3;
  *(_DWORD *)(v31 + 60) = v12;
  *(_QWORD *)(v31 + 80) = Pool2;
  *(_BYTE *)(v31 + 96) = 0;
  *(_DWORD *)(v31 + 16) = 2;
  *(_BYTE *)(v31 + 98) = 0;
  *(_QWORD *)(v31 + 88) = 0LL;
  *(_QWORD *)(Pool2 + 8) = v31;
  if ( a5 )
  {
    while ( a3 )
    {
      v33 = v16;
      if ( *((_DWORD *)a3 + 10) - (int)v12 <= v16 )
        v33 = *((_DWORD *)a3 + 10) - v12;
      v34 = v12 + *((_DWORD *)a3 + 11);
      v16 -= v33;
      v35 = v34 & 0xFFF;
      for ( j = &a3[((unsigned __int64)v34 >> 12) + 6]; v33; v29 = v37 + v41 )
      {
        v37 = v35 + (*j << 12);
        v38 = 4096 - v35;
        v39 = v33;
        if ( v38 <= v33 )
          v39 = v38;
        if ( v37 != v29 + 1 || !(_DWORD)v30 )
        {
          v40 = v30 + 2 * (v30 + 1);
          v30 = (unsigned int)(v30 + 1);
          v32 = Pool2 + 8 * v40;
          *(_QWORD *)v32 = v37;
          *(_DWORD *)(v32 + 8) = 0;
          *(_QWORD *)(v32 + 16) = 0LL;
        }
        *(_DWORD *)(v32 + 8) += v39;
        v33 -= v39;
        ++j;
        v41 = v39 - 1LL;
        v35 = 0;
      }
      a3 = (__int64 *)*a3;
      LODWORD(v12) = 0;
      if ( !v16 )
        goto LABEL_31;
    }
    if ( (_DWORD)v30 )
      *(_DWORD *)(Pool2 + 24 * ((unsigned int)(v30 - 1) + 1LL)) += v16;
  }
LABEL_31:
  *(_DWORD *)Pool2 = v30;
  if ( a6 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 32), *(_QWORD *)(v31 + 40), Pool2, *(_QWORD *)(v31 + 72));
  return 0LL;
}
