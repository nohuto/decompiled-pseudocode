/*
 * XREFs of sub_140A3273C @ 0x140A3273C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A3273C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int m; // r8d
  __int64 v26; // rax
  unsigned int *v27; // rcx
  int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // ebp
  __int64 Pool2; // rax
  int v32; // ebp
  _DWORD *v33; // rdx
  unsigned int n; // ecx
  unsigned int v35; // eax
  int v36; // r9d
  unsigned __int64 v37; // rdx
  unsigned int ii; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  unsigned __int64 v43; // rdx
  unsigned int jj; // ecx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  __int128 v48; // [rsp+50h] [rbp-48h]
  __int128 v49; // [rsp+60h] [rbp-38h]

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
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v26 = *v7;
    v27 = v7 + 1;
    if ( m >= 6 )
      break;
    if ( v27 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      return (unsigned int)-1073741675;
  }
  if ( v27 < v7 )
    return (unsigned int)-1073741675;
  if ( !qword_140FD83C0 )
    return (unsigned int)-1073741637;
  v12 = guard_dispatch_icall_no_overrides(v20, (unsigned int)v18);
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  v28 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 )
    return (unsigned int)-1073741675;
  v29 = *(_DWORD *)(a2 + 16) + 84;
  v30 = v12;
  if ( v29 < *(_DWORD *)(a2 + 16) + 80 )
    return (unsigned int)-1073741675;
  v12 = v29 + v28 < v29 ? 0xC0000095 : 0;
  if ( v29 + v28 < v29 )
    return v12;
  *(_DWORD *)(a4 + 4) = 56;
  Pool2 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x20534C53u);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v32 = v30 | 0x10000000;
  v33 = (_DWORD *)Pool2;
  for ( n = 0; n < *(_DWORD *)a4; ++n )
  {
    v35 = *v33 + 4;
    if ( *v33 >= 0xFFFFFFFC || (_DWORD *)((char *)v33 + v35) < v33 )
      return (unsigned int)-1073741675;
    v33 = (_DWORD *)((char *)v33 + v35);
  }
  if ( v33 + 1 < v33 )
    return (unsigned int)-1073741675;
  if ( (unsigned __int64)(v33 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *v33 = 4;
  v33[1] = v32;
  ++*(_DWORD *)a4;
  v36 = -1;
  v37 = *(_QWORD *)(a4 + 8);
  if ( v37 )
  {
    for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
    {
      v39 = *(_DWORD *)v37 + 4;
      if ( *(_DWORD *)v37 >= 0xFFFFFFFC || v37 + v39 < v37 )
        return (unsigned int)-1073741675;
      v37 += v39;
    }
    if ( v37 + 4 < v37 )
      return (unsigned int)-1073741675;
    if ( v37 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)v37 = 8;
    *(_QWORD *)(v37 + 4) = v15;
  }
  else
  {
    v40 = *(_DWORD *)(a4 + 4);
    v41 = -1;
    v42 = v40 + 12;
    if ( v40 + 12 >= v40 )
      v41 = v40 + 12;
    v12 = v42 < v40 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v41;
    if ( v42 < v40 )
      return v12;
  }
  ++*(_DWORD *)a4;
  v43 = *(_QWORD *)(a4 + 8);
  if ( v43 )
  {
    for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
    {
      v45 = *(_DWORD *)v43 + 4;
      if ( *(_DWORD *)v43 >= 0xFFFFFFFC || v43 + v45 < v43 )
        return (unsigned int)-1073741675;
      v43 += v45;
    }
    if ( v43 + 4 >= v43 )
    {
      v12 = 0;
      if ( v43 + 36 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v43 = 32;
        *(_OWORD *)(v43 + 4) = v48;
        *(_OWORD *)(v43 + 20) = v49;
        ++*(_DWORD *)a4;
        return v12;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  v46 = *(_DWORD *)(a4 + 4);
  v47 = v46 + 36;
  if ( v46 + 36 >= v46 )
    v36 = v46 + 36;
  v12 = v47 < v46 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v36;
  if ( v47 >= v46 )
  {
    ++*(_DWORD *)a4;
    return 0;
  }
  return v12;
}
