/*
 * XREFs of sub_140ABDF2C @ 0x140ABDF2C
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     StringCbLengthW @ 0x140452800 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABDF2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  signed int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 *v13; // rbp
  __int64 v14; // rbp
  unsigned int *v15; // rax
  unsigned int j; // r8d
  __int64 v17; // r9
  unsigned int *v18; // rdx
  unsigned int *v19; // rax
  bool v20; // cc
  unsigned int v21; // r13d
  unsigned int k; // r9d
  unsigned __int64 v23; // r8
  unsigned int *v24; // rdx
  const wchar_t *v25; // r15
  __int64 v26; // r11
  size_t v27; // r12
  void *Pool2; // rax
  void *v29; // rdi
  const wchar_t *v30; // rax
  unsigned int m; // r8d
  size_t v32; // rdx
  const wchar_t *v33; // rcx
  const void *v34; // r15
  __int64 v35; // r11
  size_t v36; // r12
  void *v37; // rax
  unsigned int *v38; // rdx
  unsigned int v39; // r15d
  unsigned int *v40; // rax
  unsigned int n; // r8d
  __int64 v42; // r13
  unsigned int *v43; // rcx
  unsigned int *v44; // r11
  _DWORD *v45; // rax
  unsigned int ii; // r8d
  __int64 v47; // r12
  _DWORD *v48; // rcx
  unsigned int jj; // r10d
  __int64 v50; // rbx
  unsigned int *v51; // rcx
  int v52; // edx
  unsigned int v53; // ecx
  signed int v54; // r13d
  _DWORD *v55; // rax
  int v56; // r13d
  unsigned __int64 v57; // rdx
  unsigned int v58; // ecx
  int v59; // edx
  unsigned int v60; // eax
  unsigned int kk; // ecx
  unsigned int v62; // eax
  size_t pcbLength[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v66; // [rsp+B0h] [rbp+18h]

  v6 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v8;
  for ( i = 0; ; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( i >= 3 )
      break;
    if ( v12 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  if ( v12 < v9 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v11 )
    v13 = (__int64 *)(v9 + 1);
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = v8;
  for ( j = 0; ; ++j )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( j >= 4 )
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
    v19 = v18;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v20 = *(_DWORD *)a1 <= 5u;
  v21 = *v19;
  v66 = *v19;
  pcbLength[0] = 0LL;
  if ( v20 )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v23 = *v8;
    v24 = v8 + 1;
    if ( k >= 5 )
      break;
    if ( v24 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v24 + v23);
    v66 = v21;
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v23 )
    return (unsigned int)-1073741762;
  v25 = (const wchar_t *)(v8 + 1);
  if ( (v23 & 1) != 0
    || *((_WORD *)v24 + (v23 >> 1) - 1)
    || StringCbLengthW(v25, *v8, pcbLength) < 0
    || pcbLength[0] + 2 != v26
    || 2 * (unsigned int)(pcbLength[0] >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v27 = 2 * (unsigned int)(pcbLength[0] >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v29 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v25, v27);
  v30 = *(const wchar_t **)(a1 + 8);
  pcbLength[0] = 0LL;
  if ( !v30 || *(_DWORD *)a1 <= 6u )
    goto LABEL_77;
  for ( m = 0; ; ++m )
  {
    v32 = *(unsigned int *)v30;
    v33 = v30 + 2;
    if ( m >= 6 )
      break;
    if ( v33 < v30 )
      goto LABEL_91;
    v30 = (const wchar_t *)((char *)v33 + v32);
    v66 = v21;
    if ( (const wchar_t *)((char *)v33 + v32) < v33 )
      goto LABEL_91;
  }
  if ( v33 < v30 )
    goto LABEL_91;
  if ( !(_DWORD)v32
    || (v34 = v30 + 2, (v32 & 1) != 0)
    || v33[(v32 >> 1) - 1]
    || StringCbLengthW(v33, v32, pcbLength) < 0
    || pcbLength[0] + 2 != v35
    || 2 * (unsigned int)(pcbLength[0] >> 1) == -2 )
  {
    v7 = -1073741762;
    goto LABEL_92;
  }
  v36 = 2 * (unsigned int)(pcbLength[0] >> 1) + 2;
  v37 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v37 )
    goto LABEL_58;
  v6 = v37;
  memmove(v37, v34, v36);
  v38 = *(unsigned int **)(a1 + 8);
  if ( !v38 || *(_DWORD *)a1 <= 7u )
    goto LABEL_77;
  v39 = v66;
  v40 = *(unsigned int **)(a1 + 8);
  for ( n = 0; ; ++n )
  {
    v42 = *v40;
    v43 = v40 + 1;
    if ( n >= 7 )
      break;
    if ( v43 < v40 )
      goto LABEL_91;
    v40 = (unsigned int *)((char *)v43 + v42);
    v66 = v39;
    if ( (unsigned int *)((char *)v43 + v42) < v43 )
      goto LABEL_91;
  }
  if ( v43 < v40 )
    goto LABEL_91;
  v44 = 0LL;
  if ( (_DWORD)v42 )
    v44 = v40 + 1;
  if ( *(_DWORD *)a1 <= 8u )
    goto LABEL_77;
  v45 = *(_DWORD **)(a1 + 8);
  for ( ii = 0; ; ++ii )
  {
    v47 = (unsigned int)*v45;
    v48 = v45 + 1;
    LODWORD(pcbLength[0]) = *v45;
    if ( ii >= 8 )
      break;
    if ( v48 < v45 )
      goto LABEL_91;
    v45 = (_DWORD *)((char *)v48 + v47);
    v66 = v39;
    if ( (_DWORD *)((char *)v48 + v47) < v48 )
      goto LABEL_91;
  }
  if ( v48 < v45 )
    goto LABEL_91;
  if ( *(_DWORD *)a1 <= 9u )
  {
LABEL_77:
    v7 = -1073741811;
    goto LABEL_92;
  }
  for ( jj = 0; ; ++jj )
  {
    v50 = *v38;
    v51 = v38 + 1;
    if ( jj >= 9 )
      break;
    if ( v51 < v38 )
      goto LABEL_91;
    v38 = (unsigned int *)((char *)v51 + v50);
    v66 = v39;
    LODWORD(pcbLength[0]) = v47;
    if ( (unsigned int *)((char *)v51 + v50) < v51 )
      goto LABEL_91;
  }
  if ( v51 < v38 )
    goto LABEL_91;
  if ( !qword_140FD73D8 )
  {
    v7 = -1073741637;
    goto LABEL_92;
  }
  v7 = guard_dispatch_icall_no_overrides(v66, v29, v6, v44);
  if ( v7 >= 0 )
  {
    v52 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    {
      v53 = *(_DWORD *)(a2 + 16) + 52;
      v54 = v7;
      if ( v53 >= *(_DWORD *)(a2 + 16) + 48 )
      {
        v7 = v53 + v52 < v53 ? 0xC0000095 : 0;
        if ( v53 + v52 < v53 )
          goto LABEL_92;
        *(_DWORD *)(a4 + 4) = 20;
        v55 = (_DWORD *)ExAllocatePool2(0x100uLL);
        v7 = 0;
        if ( !v55 )
        {
LABEL_58:
          v7 = -1073741801;
          goto LABEL_92;
        }
        *(_QWORD *)(a4 + 8) = v55;
        v56 = v54 | 0x10000000;
        *(_DWORD *)a4 = 0;
        if ( v55 + 1 >= v55 )
        {
          if ( (unsigned __int64)(v55 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
LABEL_98:
            v7 = -1073741789;
            goto LABEL_92;
          }
          *v55 = 4;
          v55[1] = v56;
          ++*(_DWORD *)a4;
          v57 = *(_QWORD *)(a4 + 8);
          if ( !v57 )
          {
            v58 = *(_DWORD *)(a4 + 4);
            v59 = -1;
            v60 = v58 + 12;
            if ( v58 + 12 >= v58 )
              v59 = v58 + 12;
            v7 = v60 < v58 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v59;
            if ( v60 >= v58 )
            {
              ++*(_DWORD *)a4;
              v7 = 0;
            }
            goto LABEL_92;
          }
          for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
          {
            v62 = *(_DWORD *)v57 + 4;
            if ( *(_DWORD *)v57 >= 0xFFFFFFFC || v57 + v62 < v57 )
              goto LABEL_91;
            v57 += v62;
          }
          if ( v57 + 4 >= v57 )
          {
            if ( v57 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v57 = 8;
              *(_QWORD *)(v57 + 4) = v14;
              ++*(_DWORD *)a4;
              goto LABEL_92;
            }
            goto LABEL_98;
          }
        }
      }
    }
LABEL_91:
    v7 = -1073741675;
  }
LABEL_92:
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v7;
}
