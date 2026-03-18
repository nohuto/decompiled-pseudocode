/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x140A67588
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // r10d
  unsigned int v7; // r8d
  unsigned int v9; // eax
  unsigned int *v10; // rax
  unsigned int k; // edx
  __int64 v12; // r8
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // rax
  unsigned int kk; // edx
  __int64 v17; // r8
  unsigned int *v18; // rcx
  int v19; // eax
  int v20; // r14d
  void *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rax
  _DWORD *v24; // rdx
  unsigned int mm; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  _DWORD *v30; // rdx
  unsigned int v31; // eax
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 *v34; // r14
  __int64 v35; // r8
  unsigned int v36; // eax
  unsigned int ii; // ecx
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int *v40; // r14
  _DWORD *v41; // rdx
  unsigned int jj; // ecx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int m; // ecx
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned int n; // ecx
  unsigned int v49; // eax
  _DWORD *v50; // rdx
  unsigned int i; // ecx
  unsigned int v52; // eax
  __int64 Pool2; // rax
  _DWORD *v54; // rdx
  unsigned int v55; // eax
  unsigned int j; // ecx
  unsigned int v57; // eax

  v6 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFE0 )
    return (unsigned int)-1073741675;
  v9 = *(_DWORD *)(a2 + 16) + 36;
  if ( v9 < *(_DWORD *)(a2 + 16) + 32 || v9 + v6 < v9 )
    return (unsigned int)-1073741675;
  if ( a3 < v9 + v6 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    v34 = (__int64 *)(a4 + 8);
    v35 = *(_QWORD *)(a4 + 8);
    if ( v35 )
    {
      v50 = *(_DWORD **)(a4 + 8);
      for ( i = 0; i < *(_DWORD *)a4; ++i )
      {
        v52 = *v50 + 4;
        if ( v52 < 4 || (_DWORD *)((char *)v50 + v52) < v50 )
          return (unsigned int)-1073741675;
        v50 = (_DWORD *)((char *)v50 + v52);
      }
      if ( v50 + 1 < v50 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v50 + 2) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v50 = 4;
      v50[1] = 0;
    }
    else
    {
      v36 = *(_DWORD *)(a4 + 4);
      if ( v36 + 8 < v36 )
        goto LABEL_35;
      *(_DWORD *)(a4 + 4) = v36 + 8;
    }
    ++*(_DWORD *)a4;
    if ( !*(_DWORD *)(a4 + 4) )
      return (unsigned int)-1073741762;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *v34 = Pool2;
    *(_DWORD *)a4 = 0;
    v54 = (_DWORD *)*v34;
    if ( *v34 )
    {
      for ( j = 0; j < *(_DWORD *)a4; ++j )
      {
        v57 = *v54 + 4;
        if ( v57 < 4 || (_DWORD *)((char *)v54 + v57) < v54 )
          goto LABEL_131;
        v54 = (_DWORD *)((char *)v54 + v57);
      }
      if ( v54 + 1 >= v54 )
      {
        v7 = 0;
        if ( (unsigned __int64)(v54 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v54 = 4;
          v54[1] = 0;
          ++*(_DWORD *)a4;
        }
        else
        {
          v7 = -1073741789;
        }
LABEL_132:
        if ( (v7 & 0x80000000) != 0 )
          return v7;
        return 0;
      }
    }
    else
    {
      v55 = *(_DWORD *)(a4 + 4);
      if ( v55 + 8 >= v55 )
      {
        *(_DWORD *)(a4 + 4) = v55 + 8;
        ++*(_DWORD *)a4;
        v7 = 0;
        goto LABEL_132;
      }
      *(_DWORD *)(a4 + 4) = -1;
    }
LABEL_131:
    v7 = -1073741675;
    goto LABEL_132;
  }
  v10 = *(unsigned int **)(a1 + 8);
  if ( !v10 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v12 = *v10;
    v13 = v10 + 1;
    if ( k >= 3 )
      break;
    if ( v13 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v13 + v12);
    if ( (unsigned int *)((char *)v13 + v12) < v13 )
      return (unsigned int)-1073741675;
  }
  if ( v13 < v10 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( (_DWORD)v12 )
    v14 = v13;
  if ( (_DWORD)v12 != 8 )
    return (unsigned int)-1073741789;
  if ( !*(_QWORD *)v14 || !qword_140FD71E8 )
  {
    if ( a4 )
    {
      v32 = *(_DWORD **)(a4 + 8);
      if ( v32 )
      {
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v46 = *v32 + 4;
          if ( v46 < 4 || (_DWORD *)((char *)v32 + v46) < v32 )
            return (unsigned int)-1073741675;
          v32 = (_DWORD *)((char *)v32 + v46);
        }
        if ( v32 + 1 < v32 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v32 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v32 = 4;
        v32[1] = -1073425151;
      }
      else
      {
        v33 = *(_DWORD *)(a4 + 4);
        if ( v33 + 8 < v33 )
          goto LABEL_35;
        *(_DWORD *)(a4 + 4) = v33 + 8;
      }
      ++*(_DWORD *)a4;
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      v47 = ExAllocatePool2(0x100uLL);
      if ( !v47 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v47;
      *(_DWORD *)a4 = 0;
      v40 = (unsigned int *)(a4 + 4);
      v41 = *(_DWORD **)(a4 + 8);
      if ( v41 )
      {
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v49 = *v41 + 4;
          if ( v49 < 4 || (_DWORD *)((char *)v41 + v49) < v41 )
            return (unsigned int)-1073741675;
          v41 = (_DWORD *)((char *)v41 + v49);
        }
LABEL_93:
        if ( v41 + 1 < v41 )
          return (unsigned int)-1073741675;
        v7 = 0;
        if ( (unsigned __int64)(v41 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v41 = 4;
          v41[1] = -1073425151;
          goto LABEL_48;
        }
        return (unsigned int)-1073741789;
      }
LABEL_90:
      v44 = *v40 + 8;
      if ( v44 < *v40 )
      {
        *v40 = -1;
        return (unsigned int)-1073741675;
      }
      *v40 = v44;
LABEL_52:
      ++*(_DWORD *)a4;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_QWORD *)v14 != qword_140FD71E8 )
  {
    if ( a4 )
    {
      v30 = *(_DWORD **)(a4 + 8);
      if ( v30 )
      {
        for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
        {
          v38 = *v30 + 4;
          if ( v38 < 4 || (_DWORD *)((char *)v30 + v38) < v30 )
            return (unsigned int)-1073741675;
          v30 = (_DWORD *)((char *)v30 + v38);
        }
        if ( v30 + 1 < v30 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v30 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v30 = 4;
        v30[1] = -1073425151;
LABEL_80:
        ++*(_DWORD *)a4;
        if ( !*(_DWORD *)(a4 + 4) )
          return (unsigned int)-1073741762;
        v39 = ExAllocatePool2(0x100uLL);
        if ( !v39 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = v39;
        *(_DWORD *)a4 = 0;
        v40 = (unsigned int *)(a4 + 4);
        v41 = *(_DWORD **)(a4 + 8);
        if ( v41 )
        {
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v43 = *v41 + 4;
            if ( v43 < 4 || (_DWORD *)((char *)v41 + v43) < v41 )
              return (unsigned int)-1073741675;
            v41 = (_DWORD *)((char *)v41 + v43);
          }
          goto LABEL_93;
        }
        goto LABEL_90;
      }
      v31 = *(_DWORD *)(a4 + 4);
      if ( v31 + 8 >= v31 )
      {
        *(_DWORD *)(a4 + 4) = v31 + 8;
        goto LABEL_80;
      }
LABEL_35:
      *(_DWORD *)(a4 + 4) = -1;
      return (unsigned int)-1073741675;
    }
    return (unsigned int)-1073741811;
  }
  v15 = *(unsigned int **)(a1 + 8);
  if ( !v15 || *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( kk = 0; ; ++kk )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( kk >= 4 )
      break;
    if ( v18 < v15 )
      return (unsigned int)-1073741675;
    v15 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v15 )
    return (unsigned int)-1073741675;
  v19 = guard_dispatch_icall_no_overrides((unsigned int)v17);
  if ( v19 == 263 )
  {
    v20 = 1074058754;
  }
  else if ( v19 == 0x40000000 )
  {
    v20 = 1074058753;
  }
  else if ( v19 >= 0 )
  {
    v20 = 0;
  }
  else
  {
    v20 = v19 | 0x10000000;
  }
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  v21 = *(void **)(a4 + 8);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a4 + 8) = 0LL;
  }
  v22 = *(_DWORD *)(a4 + 4);
  if ( v22 + 8 < v22 )
    goto LABEL_35;
  ++*(_DWORD *)a4;
  *(_DWORD *)(a4 + 4) = v22 + 8;
  if ( v22 == -8 )
    return (unsigned int)-1073741762;
  v23 = ExAllocatePool2(0x100uLL);
  if ( !v23 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v23;
  *(_DWORD *)a4 = 0;
  v24 = *(_DWORD **)(a4 + 8);
  if ( v24 )
  {
    for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
    {
      v26 = *v24 + 4;
      if ( v26 < 4 || (_DWORD *)((char *)v24 + v26) < v24 )
        return (unsigned int)-1073741675;
      v24 = (_DWORD *)((char *)v24 + v26);
    }
    if ( v24 + 1 < v24 )
      return (unsigned int)-1073741675;
    v7 = 0;
    if ( (unsigned __int64)(v24 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *v24 = 4;
      v24[1] = v20;
LABEL_48:
      ++*(_DWORD *)a4;
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  v27 = *(_DWORD *)(a4 + 4);
  v28 = -1;
  v29 = v27 + 8;
  if ( v27 + 8 >= v27 )
    v28 = v27 + 8;
  *(_DWORD *)(a4 + 4) = v28;
  v7 = v29 < v27 ? 0xC0000095 : 0;
  if ( v29 >= v27 )
    goto LABEL_52;
  return v7;
}
