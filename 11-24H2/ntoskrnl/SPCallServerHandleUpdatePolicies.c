/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x140A6354C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v24; // ecx
  __int64 v25; // rax
  _DWORD *v26; // rdx
  unsigned int mm; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  _DWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 *v36; // r14
  __int64 v37; // r8
  unsigned int v38; // eax
  unsigned int ii; // ecx
  unsigned int v40; // eax
  __int64 v41; // rax
  unsigned int *v42; // r14
  _DWORD *v43; // rdx
  unsigned int jj; // ecx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  unsigned int m; // ecx
  unsigned int v48; // eax
  __int64 v49; // rax
  unsigned int n; // ecx
  unsigned int v51; // eax
  _DWORD *v52; // rdx
  unsigned int i; // ecx
  unsigned int v54; // eax
  __int64 Pool2; // rax
  _DWORD *v56; // rdx
  unsigned int v57; // eax
  unsigned int j; // ecx
  unsigned int v59; // eax

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
    v36 = (__int64 *)(a4 + 8);
    v37 = *(_QWORD *)(a4 + 8);
    if ( v37 )
    {
      v52 = *(_DWORD **)(a4 + 8);
      for ( i = 0; i < *(_DWORD *)a4; ++i )
      {
        v54 = *v52 + 4;
        if ( v54 < 4 || (_DWORD *)((char *)v52 + v54) < v52 )
          return (unsigned int)-1073741675;
        v52 = (_DWORD *)((char *)v52 + v54);
      }
      if ( v52 + 1 < v52 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v52 + 2) > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v52 = 4;
      v52[1] = 0;
    }
    else
    {
      v38 = *(_DWORD *)(a4 + 4);
      if ( v38 + 8 < v38 )
        goto LABEL_37;
      *(_DWORD *)(a4 + 4) = v38 + 8;
    }
    ++*(_DWORD *)a4;
    if ( !*(_DWORD *)(a4 + 4) )
      return (unsigned int)-1073741762;
    Pool2 = ExAllocatePool2(0x100uLL, *(unsigned int *)(a4 + 4), 0x20534C53u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *v36 = Pool2;
    *(_DWORD *)a4 = 0;
    v56 = (_DWORD *)*v36;
    if ( *v36 )
    {
      for ( j = 0; j < *(_DWORD *)a4; ++j )
      {
        v59 = *v56 + 4;
        if ( v59 < 4 || (_DWORD *)((char *)v56 + v59) < v56 )
          goto LABEL_132;
        v56 = (_DWORD *)((char *)v56 + v59);
      }
      if ( v56 + 1 >= v56 )
      {
        v7 = 0;
        if ( (unsigned __int64)(v56 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v56 = 4;
          v56[1] = 0;
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
      v57 = *(_DWORD *)(a4 + 4);
      if ( v57 + 8 >= v57 )
      {
        *(_DWORD *)(a4 + 4) = v57 + 8;
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
  if ( !*(_QWORD *)v14 || !qword_140FD8210 )
  {
    if ( a4 )
    {
      v34 = *(_DWORD **)(a4 + 8);
      if ( v34 )
      {
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v48 = *v34 + 4;
          if ( v48 < 4 || (_DWORD *)((char *)v34 + v48) < v34 )
            return (unsigned int)-1073741675;
          v34 = (_DWORD *)((char *)v34 + v48);
        }
        if ( v34 + 1 < v34 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v34 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v34 = 4;
        v34[1] = -1073425151;
      }
      else
      {
        v35 = *(_DWORD *)(a4 + 4);
        if ( v35 + 8 < v35 )
          goto LABEL_37;
        *(_DWORD *)(a4 + 4) = v35 + 8;
      }
      ++*(_DWORD *)a4;
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      v49 = ExAllocatePool2(0x100uLL, *(unsigned int *)(a4 + 4), 0x20534C53u);
      if ( !v49 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v49;
      *(_DWORD *)a4 = 0;
      v42 = (unsigned int *)(a4 + 4);
      v43 = *(_DWORD **)(a4 + 8);
      if ( v43 )
      {
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v51 = *v43 + 4;
          if ( v51 < 4 || (_DWORD *)((char *)v43 + v51) < v43 )
            return (unsigned int)-1073741675;
          v43 = (_DWORD *)((char *)v43 + v51);
        }
LABEL_94:
        if ( v43 + 1 < v43 )
          return (unsigned int)-1073741675;
        v7 = 0;
        if ( (unsigned __int64)(v43 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v43 = 4;
          v43[1] = -1073425151;
          goto LABEL_50;
        }
        return (unsigned int)-1073741789;
      }
LABEL_91:
      v46 = *v42 + 8;
      if ( v46 < *v42 )
      {
        *v42 = -1;
        return (unsigned int)-1073741675;
      }
      *v42 = v46;
LABEL_54:
      ++*(_DWORD *)a4;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( *(_QWORD *)v14 != qword_140FD8210 )
  {
    if ( a4 )
    {
      v32 = *(_DWORD **)(a4 + 8);
      if ( v32 )
      {
        for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
        {
          v40 = *v32 + 4;
          if ( v40 < 4 || (_DWORD *)((char *)v32 + v40) < v32 )
            return (unsigned int)-1073741675;
          v32 = (_DWORD *)((char *)v32 + v40);
        }
        if ( v32 + 1 < v32 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v32 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v32 = 4;
        v32[1] = -1073425151;
LABEL_81:
        ++*(_DWORD *)a4;
        if ( !*(_DWORD *)(a4 + 4) )
          return (unsigned int)-1073741762;
        v41 = ExAllocatePool2(0x100uLL, *(unsigned int *)(a4 + 4), 0x20534C53u);
        if ( !v41 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = v41;
        *(_DWORD *)a4 = 0;
        v42 = (unsigned int *)(a4 + 4);
        v43 = *(_DWORD **)(a4 + 8);
        if ( v43 )
        {
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v45 = *v43 + 4;
            if ( v45 < 4 || (_DWORD *)((char *)v43 + v45) < v43 )
              return (unsigned int)-1073741675;
            v43 = (_DWORD *)((char *)v43 + v45);
          }
          goto LABEL_94;
        }
        goto LABEL_91;
      }
      v33 = *(_DWORD *)(a4 + 4);
      if ( v33 + 8 >= v33 )
      {
        *(_DWORD *)(a4 + 4) = v33 + 8;
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
  v20 = guard_dispatch_icall_no_overrides((unsigned int)v17, v19);
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
  v24 = v23 + 8;
  if ( v23 + 8 < v23 )
    goto LABEL_37;
  ++*(_DWORD *)a4;
  *(_DWORD *)(a4 + 4) = v24;
  if ( v23 == -8 )
    return (unsigned int)-1073741762;
  v25 = ExAllocatePool2(0x100uLL, v24, 0x20534C53u);
  if ( !v25 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v25;
  *(_DWORD *)a4 = 0;
  v26 = *(_DWORD **)(a4 + 8);
  if ( v26 )
  {
    for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
    {
      v28 = *v26 + 4;
      if ( v28 < 4 || (_DWORD *)((char *)v26 + v28) < v26 )
        return (unsigned int)-1073741675;
      v26 = (_DWORD *)((char *)v26 + v28);
    }
    if ( v26 + 1 < v26 )
      return (unsigned int)-1073741675;
    v7 = 0;
    if ( (unsigned __int64)(v26 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *v26 = 4;
      v26[1] = v21;
LABEL_50:
      ++*(_DWORD *)a4;
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  v29 = *(_DWORD *)(a4 + 4);
  v30 = -1;
  v31 = v29 + 8;
  if ( v29 + 8 >= v29 )
    v30 = v29 + 8;
  *(_DWORD *)(a4 + 4) = v30;
  v7 = v31 < v29 ? 0xC0000095 : 0;
  if ( v31 >= v29 )
    goto LABEL_54;
  return v7;
}
