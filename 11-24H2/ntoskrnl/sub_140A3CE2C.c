/*
 * XREFs of sub_140A3CE2C @ 0x140A3CE2C
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A3CE2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int i; // r9d
  __int64 v10; // r10
  unsigned int *v11; // rcx
  unsigned int v12; // r8d
  __int64 *v14; // rsi
  __int64 v15; // rsi
  unsigned int *v16; // rax
  unsigned int j; // r9d
  __int64 v18; // r10
  unsigned int *v19; // rcx
  unsigned int *v20; // r11
  unsigned int *v21; // rax
  unsigned int k; // r9d
  __int64 v23; // rbp
  unsigned int *v24; // rcx
  unsigned int *v25; // rbx
  unsigned int m; // r8d
  __int64 v27; // rax
  unsigned int *v28; // rcx
  int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // ebp
  __int64 Pool2; // rax
  int v33; // ebp
  _DWORD *v34; // rdx
  unsigned int n; // ecx
  unsigned int v36; // eax
  int v37; // r9d
  unsigned __int64 v38; // rdx
  unsigned int ii; // ecx
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned int jj; // ecx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // eax
  __int128 v49; // [rsp+50h] [rbp-48h]
  __int128 v50; // [rsp+60h] [rbp-38h]

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  for ( i = 0; ; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( i >= 3 )
      break;
    if ( v11 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  if ( v11 < v8 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( (_DWORD)v10 )
    v14 = (__int64 *)(v8 + 1);
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v16 = v7;
  for ( j = 0; ; ++j )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( j >= 4 )
      break;
    if ( v19 < v16 )
      return (unsigned int)-1073741675;
    v16 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  if ( v19 < v16 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( (_DWORD)v18 )
    v20 = v16 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v21 = v7;
  for ( k = 0; ; ++k )
  {
    v23 = *v21;
    v24 = v21 + 1;
    if ( k >= 5 )
      break;
    if ( v24 < v21 )
      return (unsigned int)-1073741675;
    v21 = (unsigned int *)((char *)v24 + v23);
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v21 )
    return (unsigned int)-1073741675;
  v25 = 0LL;
  if ( (_DWORD)v23 )
    v25 = v21 + 1;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v27 = *v7;
    v28 = v7 + 1;
    if ( m >= 6 )
      break;
    if ( v28 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  if ( v28 < v7 )
    return (unsigned int)-1073741675;
  if ( !qword_140FD73B0 )
    return (unsigned int)-1073741637;
  v12 = guard_dispatch_icall_no_overrides(v20, (unsigned int)v18, v25, (unsigned int)v23);
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  v29 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 )
    return (unsigned int)-1073741675;
  v30 = *(_DWORD *)(a2 + 16) + 84;
  v31 = v12;
  if ( v30 < *(_DWORD *)(a2 + 16) + 80 )
    return (unsigned int)-1073741675;
  v12 = v30 + v29 < v30 ? 0xC0000095 : 0;
  if ( v30 + v29 < v30 )
    return v12;
  *(_DWORD *)(a4 + 4) = 56;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v33 = v31 | 0x10000000;
  v34 = (_DWORD *)Pool2;
  for ( n = 0; n < *(_DWORD *)a4; ++n )
  {
    v36 = *v34 + 4;
    if ( *v34 >= 0xFFFFFFFC || (_DWORD *)((char *)v34 + v36) < v34 )
      return (unsigned int)-1073741675;
    v34 = (_DWORD *)((char *)v34 + v36);
  }
  if ( v34 + 1 < v34 )
    return (unsigned int)-1073741675;
  if ( (unsigned __int64)(v34 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *v34 = 4;
  v34[1] = v33;
  ++*(_DWORD *)a4;
  v37 = -1;
  v38 = *(_QWORD *)(a4 + 8);
  if ( v38 )
  {
    for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
    {
      v40 = *(_DWORD *)v38 + 4;
      if ( *(_DWORD *)v38 >= 0xFFFFFFFC || v38 + v40 < v38 )
        return (unsigned int)-1073741675;
      v38 += v40;
    }
    if ( v38 + 4 < v38 )
      return (unsigned int)-1073741675;
    if ( v38 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)v38 = 8;
    *(_QWORD *)(v38 + 4) = v15;
  }
  else
  {
    v41 = *(_DWORD *)(a4 + 4);
    v42 = -1;
    v43 = v41 + 12;
    if ( v41 + 12 >= v41 )
      v42 = v41 + 12;
    v12 = v43 < v41 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v42;
    if ( v43 < v41 )
      return v12;
  }
  ++*(_DWORD *)a4;
  v44 = *(_QWORD *)(a4 + 8);
  if ( v44 )
  {
    for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
    {
      v46 = *(_DWORD *)v44 + 4;
      if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
        return (unsigned int)-1073741675;
      v44 += v46;
    }
    if ( v44 + 4 >= v44 )
    {
      v12 = 0;
      if ( v44 + 36 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v44 = 32;
        *(_OWORD *)(v44 + 4) = v49;
        *(_OWORD *)(v44 + 20) = v50;
        ++*(_DWORD *)a4;
        return v12;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  v47 = *(_DWORD *)(a4 + 4);
  v48 = v47 + 36;
  if ( v47 + 36 >= v47 )
    v37 = v47 + 36;
  v12 = v48 < v47 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v37;
  if ( v48 >= v47 )
  {
    ++*(_DWORD *)a4;
    return 0;
  }
  return v12;
}
