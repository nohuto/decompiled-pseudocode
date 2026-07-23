/*
 * XREFs of sub_1406F3DBC @ 0x1406F3DBC
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406F3DBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  void *Pool2; // r15
  int v21; // edx
  unsigned int v22; // ecx
  signed int v23; // r14d
  __int64 v24; // rax
  _DWORD *v25; // rdx
  int v26; // r14d
  unsigned int v27; // eax
  unsigned int k; // ecx
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int m; // ecx
  unsigned int v33; // eax
  _DWORD *v34; // rdx
  unsigned int v35; // eax
  unsigned int n; // ecx
  unsigned int v37; // eax
  _DWORD *v38; // rdx
  unsigned int v39; // eax
  unsigned int ii; // ecx
  unsigned int v41; // eax

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
    if ( *v18 != 4104 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x1008uLL, 0x20534C53u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !qword_140FD8338 )
    {
      v14 = -1073741637;
      goto LABEL_88;
    }
    v14 = guard_dispatch_icall_no_overrides(Pool2, v19);
    if ( v14 < 0 )
      goto LABEL_88;
    v21 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFEFC0
      || (v22 = *(_DWORD *)(a2 + 16) + 4164, v23 = v14, v22 < *(_DWORD *)(a2 + 16) + 4160) )
    {
      v14 = -1073741675;
      goto LABEL_88;
    }
    v14 = v22 + v21 < v22 ? 0xC0000095 : 0;
    if ( v22 + v21 < v22 )
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
    *(_DWORD *)(a4 + 4) = 4136;
    v14 = 0;
    v24 = ExAllocatePool2(0x100uLL, 0x1028uLL, 0x20534C53u);
    if ( v24 )
    {
      *(_QWORD *)(a4 + 8) = v24;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v14 = -1073741801;
    }
    if ( v14 < 0 )
      goto LABEL_88;
    v25 = *(_DWORD **)(a4 + 8);
    v26 = v23 | 0x10000000;
    if ( v25 )
    {
      for ( k = 0; k < *(_DWORD *)a4; ++k )
      {
        v29 = *v25 + 4;
        if ( *v25 >= 0xFFFFFFFC || (_DWORD *)((char *)v25 + v29) < v25 )
          goto LABEL_65;
        v25 = (_DWORD *)((char *)v25 + v29);
      }
      if ( v25 + 1 < v25 )
        goto LABEL_65;
      if ( (unsigned __int64)(v25 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *v25 = 4;
      v25[1] = v26;
    }
    else
    {
      v27 = *(_DWORD *)(a4 + 4);
      if ( v27 + 8 < v27 )
        goto LABEL_64;
      *(_DWORD *)(a4 + 4) = v27 + 8;
    }
    ++*(_DWORD *)a4;
    v30 = *(_QWORD *)(a4 + 8);
    if ( v30 )
    {
      for ( m = 0; m < *(_DWORD *)a4; ++m )
      {
        v33 = *(_DWORD *)v30 + 4;
        if ( *(_DWORD *)v30 >= 0xFFFFFFFC || v30 + v33 < v30 )
          goto LABEL_65;
        v30 += v33;
      }
      if ( v30 + 4 < v30 )
        goto LABEL_65;
      if ( v30 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *(_DWORD *)v30 = 8;
      *(_QWORD *)(v30 + 4) = v13;
    }
    else
    {
      v31 = *(_DWORD *)(a4 + 4);
      if ( v31 + 12 < v31 )
        goto LABEL_64;
      *(_DWORD *)(a4 + 4) = v31 + 12;
    }
    ++*(_DWORD *)a4;
    v34 = *(_DWORD **)(a4 + 8);
    if ( v34 )
    {
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v37 = *v34 + 4;
        if ( *v34 >= 0xFFFFFFFC || (_DWORD *)((char *)v34 + v37) < v34 )
          goto LABEL_65;
        v34 = (_DWORD *)((char *)v34 + v37);
      }
      if ( v34 + 1 < v34 )
        goto LABEL_65;
      if ( (unsigned __int64)(v34 + 1027) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *v34 = 4104;
      memmove(v34 + 1, Pool2, 0x1008uLL);
LABEL_75:
      ++*(_DWORD *)a4;
      v38 = *(_DWORD **)(a4 + 8);
      if ( !v38 )
      {
        v39 = *(_DWORD *)(a4 + 4);
        if ( v39 + 8 >= v39 )
        {
          ++*(_DWORD *)a4;
          v14 = 0;
          *(_DWORD *)(a4 + 4) = v39 + 8;
          goto LABEL_88;
        }
        goto LABEL_64;
      }
      for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
      {
        v41 = *v38 + 4;
        if ( *v38 >= 0xFFFFFFFC || (_DWORD *)((char *)v38 + v41) < v38 )
          goto LABEL_65;
        v38 = (_DWORD *)((char *)v38 + v41);
      }
      if ( v38 + 1 < v38 )
        goto LABEL_65;
      v14 = 0;
      if ( (unsigned __int64)(v38 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v38 = 4;
        v38[1] = 4104;
        ++*(_DWORD *)a4;
        goto LABEL_88;
      }
LABEL_73:
      v14 = -1073741789;
      goto LABEL_88;
    }
    v35 = *(_DWORD *)(a4 + 4);
    if ( v35 + 4108 >= v35 )
    {
      *(_DWORD *)(a4 + 4) = v35 + 4108;
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
