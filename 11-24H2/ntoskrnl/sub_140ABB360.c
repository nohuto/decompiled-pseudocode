/*
 * XREFs of sub_140ABB360 @ 0x140ABB360
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     StringCbLengthW @ 0x1404478B0 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABB360(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  unsigned int v7; // ebx
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
  const wchar_t *v19; // r12
  __int64 v20; // r11
  size_t v21; // r15
  unsigned int v22; // eax
  size_t v23; // r13
  void *Pool2; // rax
  void *v25; // rdi
  const wchar_t *v26; // rax
  unsigned int k; // r8d
  size_t v28; // rdx
  const wchar_t *v29; // rcx
  const void *v30; // rbx
  __int64 v31; // r11
  unsigned int v32; // eax
  size_t v33; // r12
  void *v34; // rax
  __int64 v35; // rdx
  int v36; // ebx
  _DWORD *v37; // rax
  int v38; // ebx
  unsigned __int64 v39; // rdx
  unsigned int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int m; // ecx
  unsigned int v44; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
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
  if ( (v17 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( *((_WORD *)v18 + (v17 >> 1) - 1) )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v19, *v8, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v20 )
    return (unsigned int)-1073741762;
  v21 = pcbLength >> 1;
  v22 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v23 = v22;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v22, 0x20534C53u);
  v25 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v19, v23);
  v26 = *(const wchar_t **)(a1 + 8);
  pcbLength = 0LL;
  if ( v26 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; ; ++k )
    {
      v28 = *(unsigned int *)v26;
      v29 = v26 + 2;
      if ( k >= 5 )
        break;
      if ( v29 < v26 )
        goto LABEL_58;
      v26 = (const wchar_t *)((char *)v29 + v28);
      if ( (const wchar_t *)((char *)v29 + v28) < v29 )
        goto LABEL_58;
    }
    if ( v29 >= v26 )
    {
      if ( !(_DWORD)v28
        || (v30 = v26 + 2, (v28 & 1) != 0)
        || v29[(v28 >> 1) - 1]
        || StringCbLengthW(v29, v28, &pcbLength) < 0
        || pcbLength + 2 != v31
        || (v32 = 2 * (pcbLength >> 1) + 2, 2 * (unsigned int)(pcbLength >> 1) == -2) )
      {
        v7 = -1073741762;
        goto LABEL_59;
      }
      v33 = v32;
      v34 = (void *)ExAllocatePool2(0x100uLL, v32, 0x20534C53u);
      if ( !v34 )
        goto LABEL_50;
      v6 = v34;
      memmove(v34, v30, v33);
      v36 = guard_dispatch_icall_no_overrides((unsigned int)(2 * v21 + 2), v25);
      if ( v36 >= 0 )
      {
        if ( qword_140FD83F0 )
        {
          v36 = guard_dispatch_icall_no_overrides(v25, v35);
          if ( v36 == -1073741198 )
            v36 = 0;
        }
        else
        {
          v36 = -1073741637;
        }
      }
      *(_DWORD *)(a4 + 4) = 20;
      v37 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
      if ( !v37 )
      {
LABEL_50:
        v7 = -1073741801;
        goto LABEL_59;
      }
      *(_QWORD *)(a4 + 8) = v37;
      v38 = v36 | 0x10000000;
      *(_DWORD *)a4 = 0;
      if ( v37 + 1 >= v37 )
      {
        if ( (unsigned __int64)(v37 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_65:
          v7 = -1073741789;
          goto LABEL_59;
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
          *(_DWORD *)(a4 + 4) = v41;
          v7 = v42 < v40 ? 0xC0000095 : 0;
          if ( v42 >= v40 )
          {
            ++*(_DWORD *)a4;
            v7 = 0;
          }
          goto LABEL_59;
        }
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v44 = *(_DWORD *)v39 + 4;
          if ( *(_DWORD *)v39 >= 0xFFFFFFFC || v39 + v44 < v39 )
            goto LABEL_58;
          v39 += v44;
        }
        if ( v39 + 4 >= v39 )
        {
          v7 = 0;
          if ( v39 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v39 = 8;
            *(_QWORD *)(v39 + 4) = v15;
            ++*(_DWORD *)a4;
            goto LABEL_59;
          }
          goto LABEL_65;
        }
      }
    }
LABEL_58:
    v7 = -1073741675;
    goto LABEL_59;
  }
  v7 = -1073741811;
LABEL_59:
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
