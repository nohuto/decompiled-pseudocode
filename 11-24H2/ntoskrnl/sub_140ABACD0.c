/*
 * XREFs of sub_140ABACD0 @ 0x140ABACD0
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABACD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int *v29; // r12
  unsigned int n; // edx
  __int64 v31; // rax
  unsigned int *v32; // rcx
  unsigned int *v33; // rsi
  size_t v34; // rsi
  void *Pool2; // rax
  int v36; // r14d
  unsigned int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // eax
  int v40; // r8d
  unsigned int v41; // edx
  unsigned int v42; // eax
  __int64 v43; // rax
  _DWORD *v44; // rdx
  int v45; // r14d
  unsigned int v46; // eax
  unsigned int ii; // ecx
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned int v50; // eax
  unsigned int jj; // ecx
  unsigned int v52; // eax
  _DWORD *v53; // rdx
  unsigned int v54; // esi
  unsigned int v55; // eax
  unsigned int kk; // ecx
  unsigned int v57; // eax
  _DWORD *v58; // rdx
  unsigned int v59; // eax
  unsigned int mm; // ecx
  unsigned int v61; // eax
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
  v29 = 0LL;
  if ( (_DWORD)v27 )
    v29 = v25 + 1;
  if ( *(_DWORD *)a1 <= 7u )
    return (unsigned int)-1073741811;
  for ( n = 0; ; ++n )
  {
    v31 = *v4;
    v32 = v4 + 1;
    if ( n >= 7 )
      break;
    if ( v32 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      return (unsigned int)-1073741675;
  }
  if ( v32 < v4 )
    return (unsigned int)-1073741675;
  v33 = 0LL;
  if ( (_DWORD)v31 )
    v33 = v4 + 1;
  if ( (_DWORD)v31 != 4 )
    return (unsigned int)-1073741789;
  v34 = *v33;
  if ( (_DWORD)v34 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v34);
  }
  if ( qword_140FD73D0 )
    v36 = guard_dispatch_icall_no_overrides(v18, v23, (unsigned int)v21, v29);
  else
    v36 = -1073741637;
  if ( (unsigned int)v34 >= 0xFFFFFFFC )
    goto LABEL_84;
  if ( (unsigned int)(v34 + 24) < 0x14 )
    goto LABEL_84;
  v37 = v34 + 32;
  if ( (int)v34 + 32 < (unsigned int)(v34 + 24) )
    goto LABEL_84;
  if ( v37 >= 0xFFFFFFF8 )
    goto LABEL_84;
  v38 = (v34 + 47) & 0xFFFFFFF8;
  if ( v38 < (int)v34 + 40 || v38 + 8 < v38 )
    goto LABEL_84;
  v39 = v38 + 12;
  v40 = *(_DWORD *)(a2 + 16);
  if ( v38 + 12 < 4 || (v41 = v38 + 16, v39 + 4 < v39) || (v42 = v41 + v40, v41 + v40 < v41) || v42 + 4 < v42 )
    v24 = -1073741675;
  else
    v24 = v42 + 4 + *(_DWORD *)(a2 + 32) < v42 + 4 ? 0xC0000095 : 0;
  if ( v24 < 0 )
    goto LABEL_85;
  if ( !a4 )
    goto LABEL_73;
  v24 = 0;
  *(_DWORD *)(a4 + 4) = v37;
  if ( (_DWORD)v34 == -32 )
  {
    v24 = -1073741762;
  }
  else
  {
    v43 = ExAllocatePool2(0x100uLL);
    if ( v43 )
    {
      *(_QWORD *)(a4 + 8) = v43;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v24 = -1073741801;
    }
  }
  if ( v24 < 0 )
    goto LABEL_85;
  v44 = *(_DWORD **)(a4 + 8);
  v45 = v36 | 0x10000000;
  if ( v44 )
  {
    for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
    {
      v48 = *v44 + 4;
      if ( v48 < 4 || (_DWORD *)((char *)v44 + v48) < v44 )
        goto LABEL_84;
      v44 = (_DWORD *)((char *)v44 + v48);
    }
    if ( v44 + 1 < v44 )
      goto LABEL_84;
    if ( (unsigned __int64)(v44 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_121;
    *v44 = 4;
    v44[1] = v45;
  }
  else
  {
    v46 = *(_DWORD *)(a4 + 4);
    if ( v46 + 8 < v46 )
      goto LABEL_83;
    *(_DWORD *)(a4 + 4) = v46 + 8;
  }
  ++*(_DWORD *)a4;
  v49 = *(_QWORD *)(a4 + 8);
  if ( v49 )
  {
    for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
    {
      v52 = *(_DWORD *)v49 + 4;
      if ( v52 < 4 || v49 + v52 < v49 )
        goto LABEL_84;
      v49 += v52;
    }
    if ( v49 + 4 < v49 )
      goto LABEL_84;
    if ( v49 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_121;
    *(_DWORD *)v49 = 8;
    *(_QWORD *)(v49 + 4) = v12;
  }
  else
  {
    v50 = *(_DWORD *)(a4 + 4);
    if ( v50 + 12 < v50 )
      goto LABEL_83;
    *(_DWORD *)(a4 + 4) = v50 + 12;
  }
  ++*(_DWORD *)a4;
  if ( P )
  {
    if ( !(_DWORD)v34 )
    {
LABEL_73:
      v24 = -1073741811;
      goto LABEL_85;
    }
  }
  else if ( (_DWORD)v34 )
  {
    goto LABEL_73;
  }
  v53 = *(_DWORD **)(a4 + 8);
  if ( !v53 )
  {
    v54 = v34 + 4;
    if ( v54 < 4 )
      goto LABEL_84;
    v55 = *(_DWORD *)(a4 + 4);
    if ( v55 + v54 >= v55 )
    {
      *(_DWORD *)(a4 + 4) = v55 + v54;
      goto LABEL_124;
    }
LABEL_83:
    *(_DWORD *)(a4 + 4) = -1;
LABEL_84:
    v24 = -1073741675;
    goto LABEL_85;
  }
  for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
  {
    v57 = *v53 + 4;
    if ( v57 < 4 || (_DWORD *)((char *)v53 + v57) < v53 )
      goto LABEL_84;
    v53 = (_DWORD *)((char *)v53 + v57);
  }
  if ( v53 + 1 < v53 )
    goto LABEL_84;
  if ( (unsigned __int64)v53 + v34 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_121;
  *v53 = v34;
  if ( P )
    memmove(v53 + 1, P, (unsigned int)v34);
LABEL_124:
  ++*(_DWORD *)a4;
  v58 = *(_DWORD **)(a4 + 8);
  if ( !v58 )
  {
    v59 = *(_DWORD *)(a4 + 4);
    if ( v59 + 8 >= v59 )
    {
      ++*(_DWORD *)a4;
      v24 = 0;
      *(_DWORD *)(a4 + 4) = v59 + 8;
      goto LABEL_85;
    }
    goto LABEL_83;
  }
  for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
  {
    v61 = *v58 + 4;
    if ( v61 < 4 || (_DWORD *)((char *)v58 + v61) < v58 )
      goto LABEL_84;
    v58 = (_DWORD *)((char *)v58 + v61);
  }
  if ( v58 + 1 < v58 )
    goto LABEL_84;
  v24 = 0;
  if ( (unsigned __int64)(v58 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_121:
    v24 = -1073741789;
    goto LABEL_85;
  }
  *v58 = 4;
  v58[1] = 0;
  ++*(_DWORD *)a4;
LABEL_85:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v24;
}
