/*
 * XREFs of sub_140A338CC @ 0x140A338CC
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A338CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // r8d
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // ebx
  unsigned int *v14; // rax
  __int64 v15; // rbp
  unsigned int *v16; // rax
  unsigned int j; // r8d
  __int64 v18; // r9
  unsigned int *v19; // rdx
  unsigned int *v20; // rax
  unsigned int v21; // r12d
  unsigned int k; // r9d
  unsigned __int64 v23; // rdx
  unsigned int *v24; // r8
  _WORD *v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  const void *v29; // r15
  unsigned __int64 v30; // rdx
  unsigned int v31; // ebx
  void *Pool2; // rax
  void *v33; // rdi
  unsigned int *v34; // rax
  unsigned int m; // r9d
  unsigned __int64 v36; // r8
  unsigned int *v37; // rdx
  _WORD *v38; // rcx
  unsigned __int64 v39; // rax
  const void *v40; // r15
  unsigned __int64 v41; // rdx
  unsigned int v42; // ebx
  void *v43; // rax
  unsigned int *v44; // rdx
  unsigned int *v45; // rax
  unsigned int n; // r10d
  __int64 v47; // r15
  unsigned int *v48; // rcx
  unsigned int *v49; // r11
  unsigned int ii; // r10d
  __int64 v51; // rbx
  unsigned int *v52; // rcx
  int v53; // r15d
  int v54; // edx
  unsigned int v55; // ecx
  _DWORD *v56; // rax
  int v57; // r15d
  int v58; // r8d
  unsigned __int64 v59; // rdx
  unsigned int jj; // ecx
  unsigned int v61; // eax
  unsigned __int64 v62; // rdx
  unsigned int kk; // ecx
  unsigned int v64; // eax
  unsigned int v65; // edx
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // eax

  v6 = 0LL;
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
    v14 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v16 = v7;
  for ( j = 0; ; ++j )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( j >= 4 )
      break;
    if ( v19 < v16 )
      return (unsigned int)-1073741675;
    v16 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  if ( v19 < v16 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( (_DWORD)v18 )
    v20 = v19;
  if ( (_DWORD)v18 != 4 )
    return (unsigned int)-1073741789;
  v21 = *v20;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v23 = *v7;
    v24 = v7 + 1;
    if ( k >= 5 )
      break;
    if ( v24 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v24 + v23);
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v7 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v23 )
    return (unsigned int)-1073741762;
  v25 = v7 + 1;
  if ( (v23 & 1) != 0 )
    return (unsigned int)-1073741762;
  v26 = v23;
  v27 = v23 >> 1;
  if ( v25[(v23 >> 1) - 1] || !v25 )
    return (unsigned int)-1073741762;
  v28 = v23 >> 1;
  v29 = v25;
  if ( !v27 )
    goto LABEL_133;
  do
  {
    if ( !*v25 )
      break;
    ++v25;
    --v27;
  }
  while ( v27 );
  if ( v27 )
    v30 = v28 - v27;
  else
LABEL_133:
    v30 = 0LL;
  if ( !v27 || 2 * v30 + 2 != v26 || 2 * (unsigned int)((2 * v30) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v31 = 2 * ((2 * v30) >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v33 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v29, v31);
  v34 = *(unsigned int **)(a1 + 8);
  if ( !v34 || *(_DWORD *)a1 <= 6u )
    goto LABEL_128;
  for ( m = 0; ; ++m )
  {
    v36 = *v34;
    v37 = v34 + 1;
    if ( m >= 6 )
      break;
    if ( v37 < v34 )
      goto LABEL_51;
    v34 = (unsigned int *)((char *)v37 + v36);
    if ( (unsigned int *)((char *)v37 + v36) < v37 )
      goto LABEL_51;
  }
  if ( v37 < v34 )
    goto LABEL_51;
  if ( !(_DWORD)v36 )
    goto LABEL_131;
  v38 = v34 + 1;
  if ( (v36 & 1) != 0 )
    goto LABEL_131;
  v39 = v36 >> 1;
  if ( *((_WORD *)v37 + (v36 >> 1) - 1) || !v37 )
    goto LABEL_131;
  v40 = v38;
  if ( !v39 )
    goto LABEL_134;
  do
  {
    if ( !*v38 )
      break;
    ++v38;
    --v39;
  }
  while ( v39 );
  if ( v39 )
    v41 = (v36 >> 1) - v39;
  else
LABEL_134:
    v41 = 0LL;
  if ( !v39 || 2 * v41 + 2 != v36 || 2 * (unsigned int)((2 * v41) >> 1) == -2 )
  {
LABEL_131:
    v12 = -1073741762;
    goto LABEL_52;
  }
  v42 = 2 * ((2 * v41) >> 1) + 2;
  v43 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v43 )
    goto LABEL_117;
  v6 = v43;
  memmove(v43, v40, v42);
  v44 = *(unsigned int **)(a1 + 8);
  if ( !v44 || *(_DWORD *)a1 <= 7u )
    goto LABEL_128;
  v45 = *(unsigned int **)(a1 + 8);
  for ( n = 0; ; ++n )
  {
    v47 = *v45;
    v48 = v45 + 1;
    if ( n >= 7 )
      break;
    if ( v48 < v45 )
      goto LABEL_51;
    v45 = (unsigned int *)((char *)v48 + v47);
    if ( (unsigned int *)((char *)v48 + v47) < v48 )
      goto LABEL_51;
  }
  if ( v48 < v45 )
    goto LABEL_51;
  v49 = 0LL;
  if ( (_DWORD)v47 )
    v49 = v45 + 1;
  if ( *(_DWORD *)a1 <= 8u )
  {
LABEL_128:
    v12 = -1073741811;
    goto LABEL_52;
  }
  for ( ii = 0; ; ++ii )
  {
    v51 = *v44;
    v52 = v44 + 1;
    if ( ii >= 8 )
      break;
    if ( v52 < v44 )
      goto LABEL_51;
    v44 = (unsigned int *)((char *)v52 + v51);
    if ( (unsigned int *)((char *)v52 + v51) < v52 )
      goto LABEL_51;
  }
  if ( v52 < v44 )
    goto LABEL_51;
  if ( (_DWORD)v51 != 4 )
    goto LABEL_129;
  v53 = qword_140FD7378 ? guard_dispatch_icall_no_overrides(v21, v33, v6, v49) : -1073700223;
  v54 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0 )
    goto LABEL_51;
  v55 = *(_DWORD *)(a2 + 16) + 68;
  if ( v55 < *(_DWORD *)(a2 + 16) + 64 )
    goto LABEL_51;
  v12 = v55 + v54 < v55 ? 0xC0000095 : 0;
  if ( v55 + v54 >= v55 )
  {
    *(_DWORD *)(a4 + 4) = 40;
    v56 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v12 = 0;
    if ( v56 )
    {
      *(_QWORD *)(a4 + 8) = v56;
      v57 = v53 | 0x10000000;
      *(_DWORD *)a4 = 0;
      if ( v56 + 1 >= v56 )
      {
        if ( (unsigned __int64)(v56 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_129;
        *v56 = 4;
        v56[1] = v57;
        ++*(_DWORD *)a4;
        v58 = -1;
        v59 = *(_QWORD *)(a4 + 8);
        if ( v59 )
        {
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v61 = *(_DWORD *)v59 + 4;
            if ( *(_DWORD *)v59 >= 0xFFFFFFFC || v59 + v61 < v59 )
              goto LABEL_51;
            v59 += v61;
          }
          if ( v59 + 4 < v59 )
            goto LABEL_51;
          if ( v59 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_129;
          *(_DWORD *)v59 = 8;
          *(_QWORD *)(v59 + 4) = v15;
          ++*(_DWORD *)a4;
        }
        else
        {
          v65 = *(_DWORD *)(a4 + 4);
          v66 = -1;
          v67 = v65 + 12;
          if ( v65 + 12 >= v65 )
            v66 = v65 + 12;
          v12 = v67 < v65 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v66;
          if ( v67 < v65 )
            goto LABEL_52;
          ++*(_DWORD *)a4;
          v12 = 0;
        }
        v62 = *(_QWORD *)(a4 + 8);
        if ( !v62 )
        {
          v68 = *(_DWORD *)(a4 + 4);
          v69 = v68 + 20;
          if ( v68 + 20 >= v68 )
            v58 = v68 + 20;
          v12 = v69 < v68 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v58;
          if ( v69 >= v68 )
          {
            ++*(_DWORD *)a4;
            v12 = 0;
          }
          goto LABEL_52;
        }
        for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
        {
          v64 = *(_DWORD *)v62 + 4;
          if ( *(_DWORD *)v62 >= 0xFFFFFFFC || v62 + v64 < v62 )
            goto LABEL_51;
          v62 += v64;
        }
        if ( v62 + 4 >= v62 )
        {
          if ( v62 + 20 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v62 = 16;
            *(_OWORD *)(v62 + 4) = 0LL;
            ++*(_DWORD *)a4;
            goto LABEL_52;
          }
LABEL_129:
          v12 = -1073741789;
          goto LABEL_52;
        }
      }
LABEL_51:
      v12 = -1073741675;
      goto LABEL_52;
    }
LABEL_117:
    v12 = -1073741801;
  }
LABEL_52:
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v12;
}
