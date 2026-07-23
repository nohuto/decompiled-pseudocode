/*
 * XREFs of sub_140AB5CF0 @ 0x140AB5CF0
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB5CF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r10
  unsigned int *v10; // rcx
  __int64 *v11; // rbp
  __int64 v12; // rbp
  unsigned int *v13; // rax
  unsigned int j; // edx
  __int64 v15; // r10
  unsigned int *v16; // rcx
  unsigned int *v17; // r15
  unsigned int v18; // r15d
  unsigned int *v19; // rax
  unsigned int k; // edx
  __int64 v21; // rbx
  unsigned int *v22; // rcx
  unsigned int *v23; // r14
  signed int v24; // ebx
  unsigned int *v25; // rax
  unsigned int m; // edx
  __int64 v27; // r13
  unsigned int *v28; // rcx
  unsigned int n; // edx
  __int64 v30; // rax
  unsigned int *v31; // rcx
  unsigned int *v32; // rsi
  size_t v33; // rsi
  void *Pool2; // rax
  int v35; // r14d
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // eax
  int v39; // r8d
  unsigned int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rax
  _DWORD *v43; // rdx
  int v44; // r14d
  unsigned int v45; // eax
  unsigned int ii; // ecx
  unsigned int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned int v49; // eax
  unsigned int jj; // ecx
  unsigned int v51; // eax
  _DWORD *v52; // rdx
  unsigned int v53; // esi
  unsigned int v54; // eax
  unsigned int kk; // ecx
  unsigned int v56; // eax
  _DWORD *v57; // rdx
  unsigned int v58; // eax
  unsigned int mm; // ecx
  unsigned int v60; // eax
  PVOID P; // [rsp+50h] [rbp-48h]

  v4 = *(unsigned int **)(a1 + 8);
  P = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( (_DWORD)v9 )
    v11 = (__int64 *)(v7 + 1);
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v12 = *v11;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v13 = v4;
  for ( j = 0; ; ++j )
  {
    v15 = *v13;
    v16 = v13 + 1;
    if ( j >= 4 )
      break;
    if ( v16 < v13 )
      return (unsigned int)-1073741675;
    v13 = (unsigned int *)((char *)v16 + v15);
    if ( (unsigned int *)((char *)v16 + v15) < v16 )
      return (unsigned int)-1073741675;
  }
  if ( v16 < v13 )
    return (unsigned int)-1073741675;
  v17 = 0LL;
  if ( (_DWORD)v15 )
    v17 = v13 + 1;
  if ( (_DWORD)v15 != 4 )
    return (unsigned int)-1073741789;
  v18 = *v17;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v19 = v4;
  for ( k = 0; ; ++k )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( k >= 5 )
      break;
    if ( v22 < v19 )
      return (unsigned int)-1073741675;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  if ( v22 < v19 )
    return (unsigned int)-1073741675;
  v23 = 0LL;
  if ( (_DWORD)v21 )
    v23 = v19 + 1;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  v25 = v4;
  for ( m = 0; ; ++m )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( m >= 6 )
      break;
    if ( v28 < v25 )
      return (unsigned int)-1073741675;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  if ( v28 < v25 )
    return (unsigned int)-1073741675;
  if ( *(_DWORD *)a1 <= 7u )
    return (unsigned int)-1073741811;
  for ( n = 0; ; ++n )
  {
    v30 = *v4;
    v31 = v4 + 1;
    if ( n >= 7 )
      break;
    if ( v31 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      return (unsigned int)-1073741675;
  }
  if ( v31 < v4 )
    return (unsigned int)-1073741675;
  v32 = 0LL;
  if ( (_DWORD)v30 )
    v32 = v4 + 1;
  if ( (_DWORD)v30 != 4 )
    return (unsigned int)-1073741789;
  v33 = *v32;
  if ( (_DWORD)v33 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v33, 0x20534C53u);
    P = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v33);
  }
  if ( qword_140FD83E0 )
    v35 = guard_dispatch_icall_no_overrides(v18, v23);
  else
    v35 = -1073741637;
  if ( (unsigned int)v33 >= 0xFFFFFFFC )
    goto LABEL_82;
  if ( (unsigned int)(v33 + 24) < 0x14 )
    goto LABEL_82;
  v36 = v33 + 32;
  if ( (int)v33 + 32 < (unsigned int)(v33 + 24) )
    goto LABEL_82;
  if ( v36 >= 0xFFFFFFF8 )
    goto LABEL_82;
  v37 = (v33 + 47) & 0xFFFFFFF8;
  if ( v37 < (int)v33 + 40 || v37 + 8 < v37 )
    goto LABEL_82;
  v38 = v37 + 12;
  v39 = *(_DWORD *)(a2 + 16);
  if ( v37 + 12 < 4 || (v40 = v37 + 16, v38 + 4 < v38) || (v41 = v40 + v39, v40 + v39 < v40) || v41 + 4 < v41 )
    v24 = -1073741675;
  else
    v24 = v41 + 4 + *(_DWORD *)(a2 + 32) < v41 + 4 ? 0xC0000095 : 0;
  if ( v24 < 0 )
    goto LABEL_83;
  if ( !a4 )
    goto LABEL_71;
  v24 = 0;
  *(_DWORD *)(a4 + 4) = v36;
  if ( (_DWORD)v33 == -32 )
  {
    v24 = -1073741762;
  }
  else
  {
    v42 = ExAllocatePool2(0x100uLL, v36, 0x20534C53u);
    if ( v42 )
    {
      *(_QWORD *)(a4 + 8) = v42;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v24 = -1073741801;
    }
  }
  if ( v24 < 0 )
    goto LABEL_83;
  v43 = *(_DWORD **)(a4 + 8);
  v44 = v35 | 0x10000000;
  if ( v43 )
  {
    for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
    {
      v47 = *v43 + 4;
      if ( v47 < 4 || (_DWORD *)((char *)v43 + v47) < v43 )
        goto LABEL_82;
      v43 = (_DWORD *)((char *)v43 + v47);
    }
    if ( v43 + 1 < v43 )
      goto LABEL_82;
    if ( (unsigned __int64)(v43 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_119;
    *v43 = 4;
    v43[1] = v44;
  }
  else
  {
    v45 = *(_DWORD *)(a4 + 4);
    if ( v45 + 8 < v45 )
      goto LABEL_81;
    *(_DWORD *)(a4 + 4) = v45 + 8;
  }
  ++*(_DWORD *)a4;
  v48 = *(_QWORD *)(a4 + 8);
  if ( v48 )
  {
    for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
    {
      v51 = *(_DWORD *)v48 + 4;
      if ( v51 < 4 || v48 + v51 < v48 )
        goto LABEL_82;
      v48 += v51;
    }
    if ( v48 + 4 < v48 )
      goto LABEL_82;
    if ( v48 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_119;
    *(_DWORD *)v48 = 8;
    *(_QWORD *)(v48 + 4) = v12;
  }
  else
  {
    v49 = *(_DWORD *)(a4 + 4);
    if ( v49 + 12 < v49 )
      goto LABEL_81;
    *(_DWORD *)(a4 + 4) = v49 + 12;
  }
  ++*(_DWORD *)a4;
  if ( P )
  {
    if ( !(_DWORD)v33 )
    {
LABEL_71:
      v24 = -1073741811;
      goto LABEL_83;
    }
  }
  else if ( (_DWORD)v33 )
  {
    goto LABEL_71;
  }
  v52 = *(_DWORD **)(a4 + 8);
  if ( !v52 )
  {
    v53 = v33 + 4;
    if ( v53 < 4 )
      goto LABEL_82;
    v54 = *(_DWORD *)(a4 + 4);
    if ( v54 + v53 >= v54 )
    {
      *(_DWORD *)(a4 + 4) = v54 + v53;
      goto LABEL_122;
    }
LABEL_81:
    *(_DWORD *)(a4 + 4) = -1;
LABEL_82:
    v24 = -1073741675;
    goto LABEL_83;
  }
  for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
  {
    v56 = *v52 + 4;
    if ( v56 < 4 || (_DWORD *)((char *)v52 + v56) < v52 )
      goto LABEL_82;
    v52 = (_DWORD *)((char *)v52 + v56);
  }
  if ( v52 + 1 < v52 )
    goto LABEL_82;
  if ( (unsigned __int64)v52 + v33 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_119;
  *v52 = v33;
  if ( P )
    memmove(v52 + 1, P, (unsigned int)v33);
LABEL_122:
  ++*(_DWORD *)a4;
  v57 = *(_DWORD **)(a4 + 8);
  if ( !v57 )
  {
    v58 = *(_DWORD *)(a4 + 4);
    if ( v58 + 8 >= v58 )
    {
      ++*(_DWORD *)a4;
      v24 = 0;
      *(_DWORD *)(a4 + 4) = v58 + 8;
      goto LABEL_83;
    }
    goto LABEL_81;
  }
  for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
  {
    v60 = *v57 + 4;
    if ( v60 < 4 || (_DWORD *)((char *)v57 + v60) < v57 )
      goto LABEL_82;
    v57 = (_DWORD *)((char *)v57 + v60);
  }
  if ( v57 + 1 < v57 )
    goto LABEL_82;
  v24 = 0;
  if ( (unsigned __int64)(v57 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_119:
    v24 = -1073741789;
    goto LABEL_83;
  }
  *v57 = 4;
  v57[1] = 0;
  ++*(_DWORD *)a4;
LABEL_83:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v24;
}
