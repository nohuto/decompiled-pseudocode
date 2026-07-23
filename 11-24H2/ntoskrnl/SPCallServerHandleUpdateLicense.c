/*
 * XREFs of SPCallServerHandleUpdateLicense @ 0x140A89540
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleUpdateLicense(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // r9d
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  __int64 *v14; // rsi
  __int64 v15; // rsi
  unsigned int j; // r8d
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int *v19; // rcx
  int v20; // ebp
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 Pool2; // rax
  int v25; // ebp
  _DWORD *v26; // rdx
  unsigned int k; // ecx
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  unsigned int m; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // edx
  unsigned int v34; // eax

  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = v7;
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
  for ( j = 0; ; ++j )
  {
    v17 = *v7;
    v18 = v7 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v7 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v18;
  v20 = qword_140FD8348 ? guard_dispatch_icall_no_overrides(v19, (unsigned int)v17) : -1073741637;
  v21 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v22 = *(_DWORD *)(a2 + 16) + 52;
  if ( v22 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v23 = v22 + v21;
  v12 = v22 + v21 < v22 ? 0xC0000095 : 0;
  if ( v23 >= v22 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    Pool2 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
    v25 = v20 | 0x10000000;
    v26 = (_DWORD *)Pool2;
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v28 = *v26 + 4;
      if ( *v26 >= 0xFFFFFFFC || (_DWORD *)((char *)v26 + v28) < v26 )
        return (unsigned int)-1073741675;
      v26 = (_DWORD *)((char *)v26 + v28);
    }
    if ( v26 + 1 < v26 )
      return (unsigned int)-1073741675;
    if ( (unsigned __int64)(v26 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *v26 = 4;
    v26[1] = v25;
    ++*(_DWORD *)a4;
    v29 = *(_QWORD *)(a4 + 8);
    if ( v29 )
    {
      for ( m = 0; m < *(_DWORD *)a4; ++m )
      {
        v31 = *(_DWORD *)v29 + 4;
        if ( *(_DWORD *)v29 >= 0xFFFFFFFC || v29 + v31 < v29 )
          return (unsigned int)-1073741675;
        v29 += v31;
      }
      if ( v29 + 4 >= v29 )
      {
        v12 = 0;
        if ( v29 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v29 = 8;
          *(_QWORD *)(v29 + 4) = v15;
          ++*(_DWORD *)a4;
          return v12;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    v32 = *(_DWORD *)(a4 + 4);
    v33 = -1;
    v34 = v32 + 12;
    if ( v32 + 12 >= v32 )
      v33 = v32 + 12;
    *(_DWORD *)(a4 + 4) = v33;
    v12 = v34 < v32 ? 0xC0000095 : 0;
    if ( v34 >= v32 )
    {
      ++*(_DWORD *)a4;
      return 0;
    }
  }
  return v12;
}
