/*
 * XREFs of sub_140AC11C4 @ 0x140AC11C4
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     StringCbLengthW @ 0x140452800 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AC11C4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 *v13; // rbp
  bool v14; // cc
  __int64 v15; // rbp
  unsigned int j; // r9d
  unsigned __int64 v17; // r8
  unsigned int *v18; // rdx
  const wchar_t *v19; // rbx
  __int64 v20; // r11
  size_t v21; // r15
  void *Pool2; // rax
  void *v23; // rdi
  unsigned int *v24; // rdx
  unsigned int *v25; // rax
  unsigned int k; // r8d
  __int64 v27; // r11
  unsigned int *v28; // rcx
  unsigned int *v29; // r10
  unsigned int m; // r9d
  __int64 v31; // rax
  unsigned int *v32; // rcx
  unsigned int *v33; // r9
  int v34; // edx
  unsigned int v35; // ecx
  signed int v36; // r15d
  _DWORD *v37; // rax
  int v38; // r15d
  unsigned __int64 v39; // rdx
  unsigned int v40; // ecx
  int v41; // edx
  unsigned int v42; // eax
  unsigned int n; // ecx
  unsigned int v44; // eax
  size_t pcbLength; // [rsp+68h] [rbp+10h] BYREF

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
  v14 = *(_DWORD *)a1 <= 4u;
  v15 = *v13;
  pcbLength = 0LL;
  if ( v14 )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *v8;
    v18 = v8 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v17 )
    return (unsigned int)-1073741762;
  v19 = (const wchar_t *)(v8 + 1);
  if ( (v17 & 1) != 0
    || *((_WORD *)v18 + (v17 >> 1) - 1)
    || StringCbLengthW(v19, *v8, &pcbLength) < 0
    || pcbLength + 2 != v20
    || 2 * (unsigned int)(pcbLength >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v21 = 2 * (unsigned int)(pcbLength >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v23 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v19, v21);
  v24 = *(unsigned int **)(a1 + 8);
  if ( !v24 || *(_DWORD *)a1 <= 5u )
    goto LABEL_44;
  v25 = *(unsigned int **)(a1 + 8);
  for ( k = 0; ; ++k )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( k >= 5 )
      break;
    if ( v28 < v25 )
      goto LABEL_61;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      goto LABEL_61;
  }
  if ( v28 < v25 )
    goto LABEL_61;
  v29 = 0LL;
  if ( (_DWORD)v27 )
    v29 = v25 + 1;
  if ( *(_DWORD *)a1 <= 6u )
  {
LABEL_44:
    v7 = -1073741811;
    goto LABEL_62;
  }
  for ( m = 0; ; ++m )
  {
    v31 = *v24;
    v32 = v24 + 1;
    if ( m >= 6 )
      break;
    if ( v32 < v24 )
      goto LABEL_61;
    v24 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      goto LABEL_61;
  }
  if ( v32 < v24 )
    goto LABEL_61;
  v33 = 0LL;
  if ( (_DWORD)v31 )
    v33 = v24 + 1;
  if ( !qword_140FD73A0 )
  {
    v7 = -1073741637;
    goto LABEL_62;
  }
  v7 = guard_dispatch_icall_no_overrides(v23, v29, (unsigned int)v27, v33);
  if ( v7 < 0 )
    goto LABEL_62;
  v34 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    goto LABEL_61;
  v35 = *(_DWORD *)(a2 + 16) + 52;
  v36 = v7;
  if ( v35 < *(_DWORD *)(a2 + 16) + 48 )
    goto LABEL_61;
  v7 = v35 + v34 < v35 ? 0xC0000095 : 0;
  if ( v35 + v34 < v35 )
    goto LABEL_62;
  *(_DWORD *)(a4 + 4) = 20;
  v37 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( !v37 )
  {
    v7 = -1073741801;
    goto LABEL_62;
  }
  *(_QWORD *)(a4 + 8) = v37;
  v38 = v36 | 0x10000000;
  *(_DWORD *)a4 = 0;
  if ( v37 + 1 < v37 )
    goto LABEL_61;
  if ( (unsigned __int64)(v37 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_66:
    v7 = -1073741789;
    goto LABEL_62;
  }
  *v37 = 4;
  v37[1] = v38;
  ++*(_DWORD *)a4;
  v39 = *(_QWORD *)(a4 + 8);
  if ( !v39 )
  {
    v40 = *(_DWORD *)(a4 + 4);
    v41 = -1;
    v42 = v40 + 12;
    if ( v40 + 12 >= v40 )
      v41 = v40 + 12;
    v7 = v42 < v40 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v41;
    if ( v42 >= v40 )
    {
      ++*(_DWORD *)a4;
      v7 = 0;
    }
    goto LABEL_62;
  }
  for ( n = 0; n < *(_DWORD *)a4; ++n )
  {
    v44 = *(_DWORD *)v39 + 4;
    if ( *(_DWORD *)v39 >= 0xFFFFFFFC || v39 + v44 < v39 )
      goto LABEL_61;
    v39 += v44;
  }
  if ( v39 + 4 < v39 )
  {
LABEL_61:
    v7 = -1073741675;
    goto LABEL_62;
  }
  v7 = 0;
  if ( v39 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_66;
  *(_DWORD *)v39 = 8;
  *(_QWORD *)(v39 + 4) = v15;
  ++*(_DWORD *)a4;
LABEL_62:
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)v7;
}
