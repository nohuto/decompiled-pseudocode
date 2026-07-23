/*
 * XREFs of sub_1406F3B20 @ 0x1406F3B20
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F3B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  __int64 i; // rdx
  __int64 v8; // r8
  unsigned int *v9; // rcx
  __int64 *v10; // rbp
  __int64 v11; // rbp
  unsigned int v12; // ebx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  __int64 Pool2; // rax
  _DWORD *v17; // rdx
  int v18; // r14d
  unsigned int v19; // eax
  unsigned int j; // ecx
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int k; // ecx
  unsigned int v25; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v8 = *v4;
    v9 = v4 + 1;
    if ( (unsigned int)i >= 3 )
      break;
    if ( v9 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v9 + v8);
    if ( (unsigned int *)((char *)v9 + v8) < v9 )
      return (unsigned int)-1073741675;
  }
  if ( v9 < v4 )
    return (unsigned int)-1073741675;
  v10 = 0LL;
  if ( (_DWORD)v8 )
    v10 = (__int64 *)(v4 + 1);
  if ( (_DWORD)v8 != 8 )
    return (unsigned int)-1073741789;
  v11 = *v10;
  if ( !qword_140FD8350 )
    return (unsigned int)-1073741637;
  v12 = guard_dispatch_icall_no_overrides(v9, i);
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  v13 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v14 = *(_DWORD *)(a2 + 16) + 52;
  v15 = v12;
  if ( v14 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v12 = v14 + v13 < v14 ? 0xC0000095 : 0;
  if ( v14 + v13 < v14 )
    return v12;
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  v12 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
  if ( Pool2 )
  {
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v12 = -1073741801;
  }
  if ( (v12 & 0x80000000) == 0 )
  {
    v17 = *(_DWORD **)(a4 + 8);
    v18 = v15 | 0x10000000;
    if ( v17 )
    {
      for ( j = 0; j < *(_DWORD *)a4; ++j )
      {
        v21 = *v17 + 4;
        if ( *v17 >= 0xFFFFFFFC || (_DWORD *)((char *)v17 + v21) < v17 )
          return (unsigned int)-1073741675;
        v17 = (_DWORD *)((char *)v17 + v21);
      }
      if ( v17 + 1 < v17 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v17 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v17 = 4;
      v17[1] = v18;
    }
    else
    {
      v19 = *(_DWORD *)(a4 + 4);
      if ( v19 + 8 < v19 )
      {
LABEL_26:
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      *(_DWORD *)(a4 + 4) = v19 + 8;
    }
    ++*(_DWORD *)a4;
    v22 = *(_QWORD *)(a4 + 8);
    if ( !v22 )
    {
      v23 = *(_DWORD *)(a4 + 4);
      if ( v23 + 12 >= v23 )
      {
        ++*(_DWORD *)a4;
        v12 = 0;
        *(_DWORD *)(a4 + 4) = v23 + 12;
        return v12;
      }
      goto LABEL_26;
    }
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v25 = *(_DWORD *)v22 + 4;
      if ( *(_DWORD *)v22 >= 0xFFFFFFFC || v22 + v25 < v22 )
        return (unsigned int)-1073741675;
      v22 += v25;
    }
    if ( v22 + 4 < v22 )
      return (unsigned int)-1073741675;
    v12 = 0;
    if ( v22 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v22 = 8;
      *(_QWORD *)(v22 + 4) = v11;
      ++*(_DWORD *)a4;
      return v12;
    }
    return (unsigned int)-1073741789;
  }
  return v12;
}
