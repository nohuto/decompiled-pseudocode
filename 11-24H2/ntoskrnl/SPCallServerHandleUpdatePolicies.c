/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x140A6A19C
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int *v19; // rdx
  int v20; // eax
  int v21; // r14d
  void *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  _DWORD *v25; // rdx
  unsigned int mm; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  _DWORD *v31; // rdx
  unsigned int v32; // eax
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 *v35; // r14
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned int ii; // ecx
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned int *v41; // r14
  _DWORD *v42; // rdx
  unsigned int jj; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int m; // ecx
  unsigned int v47; // eax
  __int64 v48; // rax
  unsigned int n; // ecx
  unsigned int v50; // eax
  _DWORD *v51; // rdx
  unsigned int i; // ecx
  unsigned int v53; // eax
  __int64 Pool2; // rax
  _DWORD *v55; // rdx
  unsigned int v56; // eax
  unsigned int j; // ecx
  unsigned int v58; // eax

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
    v35 = (__int64 *)(a4 + 8);
    v36 = *(_QWORD *)(a4 + 8);
    if ( v36 )
    {
      v51 = *(_DWORD **)(a4 + 8);
      for ( i = 0; i < *(_DWORD *)a4; ++i )
      {
        v53 = *v51 + 4;
        if ( v53 < 4 || (_DWORD *)((char *)v51 + v53) < v51 )
          return (unsigned int)-1073741675;
        v51 = (_DWORD *)((char *)v51 + v53);
      }
      if ( v51 + 1 < v51 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v51 + 2) > v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v51 = 4;
      v51[1] = 0;
    }
    else
    {
      v37 = *(_DWORD *)(a4 + 4);
      if ( v37 + 8 < v37 )
        goto LABEL_37;
      *(_DWORD *)(a4 + 4) = v37 + 8;
    }
    ++*(_DWORD *)a4;
    if ( !*(_DWORD *)(a4 + 4) )
      return (unsigned int)-1073741762;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *v35 = Pool2;
    *(_DWORD *)a4 = 0;
    v55 = (_DWORD *)*v35;
    if ( *v35 )
    {
      for ( j = 0; j < *(_DWORD *)a4; ++j )
      {
        v58 = *v55 + 4;
        if ( v58 < 4 || (_DWORD *)((char *)v55 + v58) < v55 )
          goto LABEL_132;
        v55 = (_DWORD *)((char *)v55 + v58);
      }
      if ( v55 + 1 >= v55 )
      {
        v7 = 0;
        if ( (unsigned __int64)(v55 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v55 = 4;
          v55[1] = 0;
          ++*(_DWORD *)a4;
        }
        else
        {
          v7 = -1073741789;
        }
LABEL_133:
        if ( (v7 & 0x80000000) != 0 )
          return v7;
        return 0;
      }
    }
    else
    {
      v56 = *(_DWORD *)(a4 + 4);
      if ( v56 + 8 >= v56 )
      {
        *(_DWORD *)(a4 + 4) = v56 + 8;
        ++*(_DWORD *)a4;
        v7 = 0;
        goto LABEL_133;
      }
      *(_DWORD *)(a4 + 4) = -1;
    }
LABEL_132:
    v7 = -1073741675;
    goto LABEL_133;
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
  if ( !*(_QWORD *)v14 || !qword_140FD7210 )
  {
    if ( a4 )
    {
      v33 = *(_DWORD **)(a4 + 8);
      if ( v33 )
      {
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v47 = *v33 + 4;
          if ( v47 < 4 || (_DWORD *)((char *)v33 + v47) < v33 )
            return (unsigned int)-1073741675;
          v33 = (_DWORD *)((char *)v33 + v47);
        }
        if ( v33 + 1 < v33 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v33 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v33 = 4;
        v33[1] = -1073425151;
      }
      else
      {
        v34 = *(_DWORD *)(a4 + 4);
        if ( v34 + 8 < v34 )
          goto LABEL_37;
        *(_DWORD *)(a4 + 4) = v34 + 8;
      }
      ++*(_DWORD *)a4;
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      v48 = ExAllocatePool2(0x100uLL);
      if ( !v48 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v48;
      *(_DWORD *)a4 = 0;
      v41 = (unsigned int *)(a4 + 4);
      v42 = *(_DWORD **)(a4 + 8);
      if ( v42 )
      {
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v50 = *v42 + 4;
          if ( v50 < 4 || (_DWORD *)((char *)v42 + v50) < v42 )
            return (unsigned int)-1073741675;
          v42 = (_DWORD *)((char *)v42 + v50);
        }
LABEL_94:
        if ( v42 + 1 < v42 )
          return (unsigned int)-1073741675;
        v7 = 0;
        if ( (unsigned __int64)(v42 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v42 = 4;
          v42[1] = -1073425151;
          goto LABEL_50;
        }
        return (unsigned int)-1073741789;
      }
LABEL_91:
      v45 = *v41 + 8;
      if ( v45 < *v41 )
      {
        *v41 = -1;
        return (unsigned int)-1073741675;
      }
      *v41 = v45;
LABEL_54:
      ++*(_DWORD *)a4;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_QWORD *)v14 != qword_140FD7210 )
  {
    if ( a4 )
    {
      v31 = *(_DWORD **)(a4 + 8);
      if ( v31 )
      {
        for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
        {
          v39 = *v31 + 4;
          if ( v39 < 4 || (_DWORD *)((char *)v31 + v39) < v31 )
            return (unsigned int)-1073741675;
          v31 = (_DWORD *)((char *)v31 + v39);
        }
        if ( v31 + 1 < v31 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v31 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v31 = 4;
        v31[1] = -1073425151;
LABEL_81:
        ++*(_DWORD *)a4;
        if ( !*(_DWORD *)(a4 + 4) )
          return (unsigned int)-1073741762;
        v40 = ExAllocatePool2(0x100uLL);
        if ( !v40 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = v40;
        *(_DWORD *)a4 = 0;
        v41 = (unsigned int *)(a4 + 4);
        v42 = *(_DWORD **)(a4 + 8);
        if ( v42 )
        {
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v44 = *v42 + 4;
            if ( v44 < 4 || (_DWORD *)((char *)v42 + v44) < v42 )
              return (unsigned int)-1073741675;
            v42 = (_DWORD *)((char *)v42 + v44);
          }
          goto LABEL_94;
        }
        goto LABEL_91;
      }
      v32 = *(_DWORD *)(a4 + 4);
      if ( v32 + 8 >= v32 )
      {
        *(_DWORD *)(a4 + 4) = v32 + 8;
        goto LABEL_81;
      }
LABEL_37:
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
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v15 + 1;
  v20 = guard_dispatch_icall_no_overrides((unsigned int)v17, v19, v17, a1);
  if ( v20 == 263 )
  {
    v21 = 1074058754;
  }
  else if ( v20 == 0x40000000 )
  {
    v21 = 1074058753;
  }
  else if ( v20 >= 0 )
  {
    v21 = 0;
  }
  else
  {
    v21 = v20 | 0x10000000;
  }
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  v22 = *(void **)(a4 + 8);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a4 + 8) = 0LL;
  }
  v23 = *(_DWORD *)(a4 + 4);
  if ( v23 + 8 < v23 )
    goto LABEL_37;
  ++*(_DWORD *)a4;
  *(_DWORD *)(a4 + 4) = v23 + 8;
  if ( v23 == -8 )
    return (unsigned int)-1073741762;
  v24 = ExAllocatePool2(0x100uLL);
  if ( !v24 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v24;
  *(_DWORD *)a4 = 0;
  v25 = *(_DWORD **)(a4 + 8);
  if ( v25 )
  {
    for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
    {
      v27 = *v25 + 4;
      if ( v27 < 4 || (_DWORD *)((char *)v25 + v27) < v25 )
        return (unsigned int)-1073741675;
      v25 = (_DWORD *)((char *)v25 + v27);
    }
    if ( v25 + 1 < v25 )
      return (unsigned int)-1073741675;
    v7 = 0;
    if ( (unsigned __int64)(v25 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *v25 = 4;
      v25[1] = v21;
LABEL_50:
      ++*(_DWORD *)a4;
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  v28 = *(_DWORD *)(a4 + 4);
  v29 = -1;
  v30 = v28 + 8;
  if ( v28 + 8 >= v28 )
    v29 = v28 + 8;
  *(_DWORD *)(a4 + 4) = v29;
  v7 = v30 < v28 ? 0xC0000095 : 0;
  if ( v30 >= v28 )
    goto LABEL_54;
  return v7;
}
