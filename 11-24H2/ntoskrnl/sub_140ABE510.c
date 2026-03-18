/*
 * XREFs of sub_140ABE510 @ 0x140ABE510
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     StringCbLengthW @ 0x140452800 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABE510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
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
  const wchar_t *v19; // rsi
  __int64 v20; // r11
  size_t v21; // r15
  void *Pool2; // rax
  void *v23; // rdi
  unsigned int *v24; // rax
  unsigned int k; // edx
  __int64 v26; // r10
  unsigned int *v27; // rcx
  unsigned int *v28; // rdx
  int v29; // r15d
  int v30; // edx
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  int v33; // r15d
  int v34; // r8d
  unsigned __int64 v35; // rdx
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int m; // ecx
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int n; // ecx
  unsigned int v45; // eax
  size_t pcbLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 v48; // [rsp+38h] [rbp-40h] BYREF

  v48 = 0LL;
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
  {
    v7 = -1073741811;
    goto LABEL_84;
  }
  for ( k = 0; ; ++k )
  {
    v26 = *v24;
    v27 = v24 + 1;
    if ( k >= 5 )
      break;
    if ( v27 < v24 )
      goto LABEL_83;
    v24 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      goto LABEL_83;
  }
  if ( v27 >= v24 )
  {
    v28 = 0LL;
    if ( (_DWORD)v26 )
      v28 = v24 + 1;
    v29 = qword_140FD7390 ? guard_dispatch_icall_no_overrides(v23, v28, (unsigned int)v26, &v48) : -1073700223;
    v30 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0 )
    {
      v31 = *(_DWORD *)(a2 + 16) + 68;
      if ( v31 >= *(_DWORD *)(a2 + 16) + 64 )
      {
        v7 = v31 + v30 < v31 ? 0xC0000095 : 0;
        if ( v31 + v30 < v31 )
          goto LABEL_84;
        *(_DWORD *)(a4 + 4) = 40;
        v32 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !v32 )
        {
          v7 = -1073741801;
          goto LABEL_84;
        }
        *(_QWORD *)(a4 + 8) = v32;
        v33 = v29 | 0x10000000;
        *(_DWORD *)a4 = 0;
        if ( v32 + 1 < v32 )
          goto LABEL_53;
        if ( (unsigned __int64)(v32 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_68;
        *v32 = 4;
        v32[1] = v33;
        ++*(_DWORD *)a4;
        v34 = -1;
        v35 = *(_QWORD *)(a4 + 8);
        if ( v35 )
        {
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v40 = *(_DWORD *)v35 + 4;
            if ( *(_DWORD *)v35 >= 0xFFFFFFFC || v35 + v40 < v35 )
              goto LABEL_53;
            v35 += v40;
          }
          if ( v35 + 4 < v35 )
            goto LABEL_53;
          if ( v35 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_68;
          *(_DWORD *)v35 = 8;
          *(_QWORD *)(v35 + 4) = v15;
        }
        else
        {
          v36 = *(_DWORD *)(a4 + 4);
          v37 = -1;
          v38 = v36 + 12;
          if ( v36 + 12 >= v36 )
            v37 = v36 + 12;
          v7 = v38 < v36 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v37;
          if ( v38 < v36 )
            goto LABEL_84;
        }
        ++*(_DWORD *)a4;
        v41 = *(_QWORD *)(a4 + 8);
        if ( !v41 )
        {
          v42 = *(_DWORD *)(a4 + 4);
          v43 = v42 + 20;
          if ( v42 + 20 >= v42 )
            v34 = v42 + 20;
          v7 = v43 < v42 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v34;
          if ( v43 >= v42 )
          {
            ++*(_DWORD *)a4;
            v7 = 0;
          }
          goto LABEL_84;
        }
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v45 = *(_DWORD *)v41 + 4;
          if ( *(_DWORD *)v41 >= 0xFFFFFFFC || v41 + v45 < v41 )
            goto LABEL_53;
          v41 += v45;
        }
        if ( v41 + 4 >= v41 )
        {
          v7 = 0;
          if ( v41 + 20 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v41 = 16;
            *(_OWORD *)(v41 + 4) = v48;
            ++*(_DWORD *)a4;
            goto LABEL_84;
          }
LABEL_68:
          v7 = -1073741789;
          goto LABEL_84;
        }
LABEL_53:
        v7 = -1073741675;
        goto LABEL_84;
      }
    }
  }
LABEL_83:
  v7 = -1073741675;
LABEL_84:
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return v7;
}
