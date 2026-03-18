/*
 * XREFs of sub_1406F618C @ 0x1406F618C
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406F618C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // rcx
  __int64 *v12; // rbp
  __int64 v13; // rbp
  signed int v14; // ebx
  unsigned int j; // edx
  __int64 v16; // r9
  unsigned int *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  void *Pool2; // r15
  int v23; // edx
  unsigned int v24; // ecx
  signed int v25; // r14d
  __int64 v26; // rax
  _DWORD *v27; // rdx
  int v28; // r14d
  unsigned int v29; // eax
  unsigned int k; // ecx
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned int m; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // rdx
  unsigned int v37; // eax
  unsigned int n; // ecx
  unsigned int v39; // eax
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  unsigned int ii; // ecx
  unsigned int v43; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
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
    v12 = 0LL;
    if ( (_DWORD)v10 )
      v12 = (__int64 *)(v8 + 1);
    if ( (_DWORD)v10 != 8 )
      return (unsigned int)-1073741789;
    v13 = *v12;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; ; ++j )
    {
      v16 = *v4;
      v17 = v4 + 1;
      if ( j >= 4 )
        break;
      if ( v17 < v4 )
        return (unsigned int)-1073741675;
      v4 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        return (unsigned int)-1073741675;
    }
    if ( v17 < v4 )
      return (unsigned int)-1073741675;
    v18 = 0LL;
    if ( (_DWORD)v16 )
      v18 = v4 + 1;
    if ( (_DWORD)v16 != 4 )
      return (unsigned int)-1073741789;
    if ( *v18 != 2048 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !qword_140FD7420 )
    {
      v14 = -1073741637;
      goto LABEL_88;
    }
    v14 = guard_dispatch_icall_no_overrides(Pool2, v19, v20, v21);
    if ( v14 < 0 )
      goto LABEL_88;
    v23 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8
      || (v24 = *(_DWORD *)(a2 + 16) + 2108, v25 = v14, v24 < *(_DWORD *)(a2 + 16) + 2104) )
    {
      v14 = -1073741675;
      goto LABEL_88;
    }
    v14 = v24 + v23 < v24 ? 0xC0000095 : 0;
    if ( v24 + v23 < v24 )
    {
LABEL_88:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v14;
    }
    if ( !a4 )
    {
      v14 = -1073741811;
      goto LABEL_88;
    }
    *(_DWORD *)(a4 + 4) = 2080;
    v14 = 0;
    v26 = ExAllocatePool2(0x100uLL);
    if ( v26 )
    {
      *(_QWORD *)(a4 + 8) = v26;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v14 = -1073741801;
    }
    if ( v14 < 0 )
      goto LABEL_88;
    v27 = *(_DWORD **)(a4 + 8);
    v28 = v25 | 0x10000000;
    if ( v27 )
    {
      for ( k = 0; k < *(_DWORD *)a4; ++k )
      {
        v31 = *v27 + 4;
        if ( *v27 >= 0xFFFFFFFC || (_DWORD *)((char *)v27 + v31) < v27 )
          goto LABEL_65;
        v27 = (_DWORD *)((char *)v27 + v31);
      }
      if ( v27 + 1 < v27 )
        goto LABEL_65;
      if ( (unsigned __int64)(v27 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *v27 = 4;
      v27[1] = v28;
    }
    else
    {
      v29 = *(_DWORD *)(a4 + 4);
      if ( v29 + 8 < v29 )
        goto LABEL_64;
      *(_DWORD *)(a4 + 4) = v29 + 8;
    }
    ++*(_DWORD *)a4;
    v32 = *(_QWORD *)(a4 + 8);
    if ( v32 )
    {
      for ( m = 0; m < *(_DWORD *)a4; ++m )
      {
        v35 = *(_DWORD *)v32 + 4;
        if ( *(_DWORD *)v32 >= 0xFFFFFFFC || v32 + v35 < v32 )
          goto LABEL_65;
        v32 += v35;
      }
      if ( v32 + 4 < v32 )
        goto LABEL_65;
      if ( v32 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *(_DWORD *)v32 = 8;
      *(_QWORD *)(v32 + 4) = v13;
    }
    else
    {
      v33 = *(_DWORD *)(a4 + 4);
      if ( v33 + 12 < v33 )
        goto LABEL_64;
      *(_DWORD *)(a4 + 4) = v33 + 12;
    }
    ++*(_DWORD *)a4;
    v36 = *(_DWORD **)(a4 + 8);
    if ( v36 )
    {
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v39 = *v36 + 4;
        if ( *v36 >= 0xFFFFFFFC || (_DWORD *)((char *)v36 + v39) < v36 )
          goto LABEL_65;
        v36 = (_DWORD *)((char *)v36 + v39);
      }
      if ( v36 + 1 < v36 )
        goto LABEL_65;
      if ( (unsigned __int64)(v36 + 513) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *v36 = 2048;
      memmove(v36 + 1, Pool2, 0x800uLL);
LABEL_75:
      ++*(_DWORD *)a4;
      v40 = *(_DWORD **)(a4 + 8);
      if ( !v40 )
      {
        v41 = *(_DWORD *)(a4 + 4);
        if ( v41 + 8 >= v41 )
        {
          ++*(_DWORD *)a4;
          v14 = 0;
          *(_DWORD *)(a4 + 4) = v41 + 8;
          goto LABEL_88;
        }
        goto LABEL_64;
      }
      for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
      {
        v43 = *v40 + 4;
        if ( *v40 >= 0xFFFFFFFC || (_DWORD *)((char *)v40 + v43) < v40 )
          goto LABEL_65;
        v40 = (_DWORD *)((char *)v40 + v43);
      }
      if ( v40 + 1 < v40 )
        goto LABEL_65;
      v14 = 0;
      if ( (unsigned __int64)(v40 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v40 = 4;
        v40[1] = 2048;
        ++*(_DWORD *)a4;
        goto LABEL_88;
      }
LABEL_73:
      v14 = -1073741789;
      goto LABEL_88;
    }
    v37 = *(_DWORD *)(a4 + 4);
    if ( v37 + 2052 >= v37 )
    {
      *(_DWORD *)(a4 + 4) = v37 + 2052;
      goto LABEL_75;
    }
LABEL_64:
    *(_DWORD *)(a4 + 4) = -1;
LABEL_65:
    v14 = -1073741675;
    goto LABEL_88;
  }
  return (unsigned int)-1073741811;
}
