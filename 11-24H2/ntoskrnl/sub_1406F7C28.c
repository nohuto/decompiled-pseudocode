/*
 * XREFs of sub_1406F7C28 @ 0x1406F7C28
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F7C28(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r9d
  __int64 v11; // r10
  unsigned int *v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rsi
  unsigned int j; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int *v18; // rcx
  int v19; // ebp
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 Pool2; // rax
  int v24; // ebp
  _DWORD *v25; // rdx
  unsigned int k; // ecx
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  unsigned int v29; // ecx
  int v30; // edx
  unsigned int v31; // eax
  unsigned int m; // ecx
  unsigned int v33; // eax

  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v8;
  for ( i = 0; ; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( i >= 3 )
      break;
    if ( v12 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  if ( v12 < v9 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v11 )
    v13 = (__int64 *)(v9 + 1);
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v16 = *v8;
    v17 = v8 + 1;
    if ( j >= 4 )
      break;
    if ( v17 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  if ( v17 < v8 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( (_DWORD)v16 )
    v18 = v17;
  v19 = qword_140FD8340 ? guard_dispatch_icall_no_overrides(v18, (unsigned int)v16) : -1073741637;
  v20 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v21 = *(_DWORD *)(a2 + 16) + 52;
  if ( v21 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v22 = v21 + v20;
  v7 = v21 + v20 < v21 ? 0xC0000095 : 0;
  if ( v22 < v21 )
    return v7;
  *(_DWORD *)(a4 + 4) = 20;
  Pool2 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v24 = v19 | 0x10000000;
  v25 = (_DWORD *)Pool2;
  for ( k = 0; k < *(_DWORD *)a4; ++k )
  {
    v27 = *v25 + 4;
    if ( *v25 >= 0xFFFFFFFC || (_DWORD *)((char *)v25 + v27) < v25 )
      return (unsigned int)-1073741675;
    v25 = (_DWORD *)((char *)v25 + v27);
  }
  if ( v25 + 1 < v25 )
    return (unsigned int)-1073741675;
  if ( (unsigned __int64)(v25 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *v25 = 4;
  v25[1] = v24;
  ++*(_DWORD *)a4;
  v28 = *(_QWORD *)(a4 + 8);
  if ( v28 )
  {
    for ( m = 0; m < *(_DWORD *)a4; ++m )
    {
      v33 = *(_DWORD *)v28 + 4;
      if ( *(_DWORD *)v28 >= 0xFFFFFFFC || v28 + v33 < v28 )
        return (unsigned int)-1073741675;
      v28 += v33;
    }
    if ( v28 + 4 >= v28 )
    {
      v7 = 0;
      if ( v28 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v28 = 8;
        *(_QWORD *)(v28 + 4) = v14;
        ++*(_DWORD *)a4;
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  v29 = *(_DWORD *)(a4 + 4);
  v30 = -1;
  v31 = v29 + 12;
  if ( v29 + 12 >= v29 )
    v30 = v29 + 12;
  *(_DWORD *)(a4 + 4) = v30;
  v7 = v31 < v29 ? 0xC0000095 : 0;
  if ( v31 >= v29 )
  {
    ++*(_DWORD *)a4;
    return 0;
  }
  return v7;
}
