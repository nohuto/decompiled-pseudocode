/*
 * XREFs of sub_140AB8F9C @ 0x140AB8F9C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     StringCbLengthW @ 0x1404478B0 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB8F9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int v27; // ecx
  size_t v28; // r12
  void *Pool2; // rax
  void *v30; // rdi
  const wchar_t *v31; // rax
  unsigned int m; // r8d
  size_t v33; // rdx
  const wchar_t *v34; // rcx
  const void *v35; // r15
  __int64 v36; // r11
  unsigned int v37; // ecx
  size_t v38; // r12
  void *v39; // rax
  unsigned int *v40; // rdx
  unsigned int v41; // r15d
  unsigned int *v42; // rax
  unsigned int n; // r8d
  __int64 v44; // r13
  unsigned int *v45; // rcx
  _DWORD *v46; // rax
  unsigned int ii; // r8d
  __int64 v48; // r12
  _DWORD *v49; // rcx
  unsigned int jj; // r10d
  __int64 v51; // rbx
  unsigned int *v52; // rcx
  int v53; // edx
  unsigned int v54; // ecx
  signed int v55; // r13d
  _DWORD *v56; // rax
  int v57; // r13d
  unsigned __int64 v58; // rdx
  unsigned int v59; // ecx
  int v60; // edx
  unsigned int v61; // eax
  unsigned int kk; // ecx
  unsigned int v63; // eax
  size_t pcbLength[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v67; // [rsp+B0h] [rbp+18h]

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
  v67 = *v19;
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
    v67 = v21;
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v23 )
    return (unsigned int)-1073741762;
  v25 = (const wchar_t *)(v8 + 1);
  if ( (v23 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( *((_WORD *)v24 + (v23 >> 1) - 1) )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v25, *v8, pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength[0] + 2 != v26 )
    return (unsigned int)-1073741762;
  v27 = 2 * (pcbLength[0] >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength[0] >> 1) == -2 )
    return (unsigned int)-1073741762;
  v28 = v27;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v27, 0x20534C53u);
  v30 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v25, v28);
  v31 = *(const wchar_t **)(a1 + 8);
  pcbLength[0] = 0LL;
  if ( !v31 || *(_DWORD *)a1 <= 6u )
    goto LABEL_75;
  for ( m = 0; ; ++m )
  {
    v33 = *(unsigned int *)v31;
    v34 = v31 + 2;
    if ( m >= 6 )
      break;
    if ( v34 < v31 )
      goto LABEL_89;
    v31 = (const wchar_t *)((char *)v34 + v33);
    v67 = v21;
    if ( (const wchar_t *)((char *)v34 + v33) < v34 )
      goto LABEL_89;
  }
  if ( v34 < v31 )
    goto LABEL_89;
  if ( !(_DWORD)v33
    || (v35 = v31 + 2, (v33 & 1) != 0)
    || v34[(v33 >> 1) - 1]
    || StringCbLengthW(v34, v33, pcbLength) < 0
    || pcbLength[0] + 2 != v36
    || (v37 = 2 * (pcbLength[0] >> 1) + 2, 2 * (unsigned int)(pcbLength[0] >> 1) == -2) )
  {
    v7 = -1073741762;
    goto LABEL_90;
  }
  v38 = v37;
  v39 = (void *)ExAllocatePool2(0x100uLL, v37, 0x20534C53u);
  if ( !v39 )
    goto LABEL_58;
  v6 = v39;
  memmove(v39, v35, v38);
  v40 = *(unsigned int **)(a1 + 8);
  if ( !v40 || *(_DWORD *)a1 <= 7u )
    goto LABEL_75;
  v41 = v67;
  v42 = *(unsigned int **)(a1 + 8);
  for ( n = 0; ; ++n )
  {
    v44 = *v42;
    v45 = v42 + 1;
    if ( n >= 7 )
      break;
    if ( v45 < v42 )
      goto LABEL_89;
    v42 = (unsigned int *)((char *)v45 + v44);
    v67 = v41;
    if ( (unsigned int *)((char *)v45 + v44) < v45 )
      goto LABEL_89;
  }
  if ( v45 < v42 )
    goto LABEL_89;
  if ( *(_DWORD *)a1 <= 8u )
  {
LABEL_75:
    v7 = -1073741811;
    goto LABEL_90;
  }
  v46 = *(_DWORD **)(a1 + 8);
  for ( ii = 0; ; ++ii )
  {
    v48 = (unsigned int)*v46;
    v49 = v46 + 1;
    LODWORD(pcbLength[0]) = *v46;
    if ( ii >= 8 )
      break;
    if ( v49 < v46 )
      goto LABEL_89;
    v46 = (_DWORD *)((char *)v49 + v48);
    v67 = v41;
    if ( (_DWORD *)((char *)v49 + v48) < v49 )
      goto LABEL_89;
  }
  if ( v49 < v46 )
    goto LABEL_89;
  if ( *(_DWORD *)a1 <= 9u )
    goto LABEL_75;
  for ( jj = 0; ; ++jj )
  {
    v51 = *v40;
    v52 = v40 + 1;
    if ( jj >= 9 )
      break;
    if ( v52 < v40 )
      goto LABEL_89;
    v40 = (unsigned int *)((char *)v52 + v51);
    v67 = v41;
    LODWORD(pcbLength[0]) = v48;
    if ( (unsigned int *)((char *)v52 + v51) < v52 )
      goto LABEL_89;
  }
  if ( v52 < v40 )
    goto LABEL_89;
  if ( !qword_140FD83E8 )
  {
    v7 = -1073741637;
    goto LABEL_90;
  }
  v7 = guard_dispatch_icall_no_overrides(v67, v30);
  if ( v7 >= 0 )
  {
    v53 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    {
      v54 = *(_DWORD *)(a2 + 16) + 52;
      v55 = v7;
      if ( v54 >= *(_DWORD *)(a2 + 16) + 48 )
      {
        v7 = v54 + v53 < v54 ? 0xC0000095 : 0;
        if ( v54 + v53 < v54 )
          goto LABEL_90;
        *(_DWORD *)(a4 + 4) = 20;
        v56 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
        v7 = 0;
        if ( !v56 )
        {
LABEL_58:
          v7 = -1073741801;
          goto LABEL_90;
        }
        *(_QWORD *)(a4 + 8) = v56;
        v57 = v55 | 0x10000000;
        *(_DWORD *)a4 = 0;
        if ( v56 + 1 >= v56 )
        {
          if ( (unsigned __int64)(v56 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
LABEL_96:
            v7 = -1073741789;
            goto LABEL_90;
          }
          *v56 = 4;
          v56[1] = v57;
          ++*(_DWORD *)a4;
          v58 = *(_QWORD *)(a4 + 8);
          if ( !v58 )
          {
            v59 = *(_DWORD *)(a4 + 4);
            v60 = -1;
            v61 = v59 + 12;
            if ( v59 + 12 >= v59 )
              v60 = v59 + 12;
            v7 = v61 < v59 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v60;
            if ( v61 >= v59 )
            {
              ++*(_DWORD *)a4;
              v7 = 0;
            }
            goto LABEL_90;
          }
          for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
          {
            v63 = *(_DWORD *)v58 + 4;
            if ( *(_DWORD *)v58 >= 0xFFFFFFFC || v58 + v63 < v58 )
              goto LABEL_89;
            v58 += v63;
          }
          if ( v58 + 4 >= v58 )
          {
            if ( v58 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v58 = 8;
              *(_QWORD *)(v58 + 4) = v14;
              ++*(_DWORD *)a4;
              goto LABEL_90;
            }
            goto LABEL_96;
          }
        }
      }
    }
LABEL_89:
    v7 = -1073741675;
  }
LABEL_90:
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v7;
}
