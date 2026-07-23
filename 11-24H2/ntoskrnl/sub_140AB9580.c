/*
 * XREFs of sub_140AB9580 @ 0x140AB9580
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     StringCbLengthW @ 0x1404478B0 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB9580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int v21; // ecx
  size_t v22; // r15
  void *Pool2; // rax
  void *v24; // rdi
  unsigned int *v25; // rax
  unsigned int k; // edx
  __int64 v27; // r10
  unsigned int *v28; // rcx
  unsigned int *v29; // rdx
  int v30; // r15d
  int v31; // edx
  unsigned int v32; // ecx
  _DWORD *v33; // rax
  int v34; // r15d
  int v35; // r8d
  unsigned __int64 v36; // rdx
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int m; // ecx
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int n; // ecx
  unsigned int v46; // eax
  size_t pcbLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 v49; // [rsp+38h] [rbp-40h]

  v49 = 0LL;
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
  v21 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v22 = v21;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v21, 0x20534C53u);
  v24 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v19, v22);
  v25 = *(unsigned int **)(a1 + 8);
  if ( !v25 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_84;
  }
  for ( k = 0; ; ++k )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( k >= 5 )
      break;
    if ( v28 < v25 )
      goto LABEL_83;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      goto LABEL_83;
  }
  if ( v28 >= v25 )
  {
    v29 = 0LL;
    if ( (_DWORD)v27 )
      v29 = v25 + 1;
    v30 = qword_140FD83A0 ? guard_dispatch_icall_no_overrides(v24, v29) : -1073700223;
    v31 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0 )
    {
      v32 = *(_DWORD *)(a2 + 16) + 68;
      if ( v32 >= *(_DWORD *)(a2 + 16) + 64 )
      {
        v7 = v32 + v31 < v32 ? 0xC0000095 : 0;
        if ( v32 + v31 < v32 )
          goto LABEL_84;
        *(_DWORD *)(a4 + 4) = 40;
        v33 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x20534C53u);
        if ( !v33 )
        {
          v7 = -1073741801;
          goto LABEL_84;
        }
        *(_QWORD *)(a4 + 8) = v33;
        v34 = v30 | 0x10000000;
        *(_DWORD *)a4 = 0;
        if ( v33 + 1 < v33 )
          goto LABEL_53;
        if ( (unsigned __int64)(v33 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_68;
        *v33 = 4;
        v33[1] = v34;
        ++*(_DWORD *)a4;
        v35 = -1;
        v36 = *(_QWORD *)(a4 + 8);
        if ( v36 )
        {
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v41 = *(_DWORD *)v36 + 4;
            if ( *(_DWORD *)v36 >= 0xFFFFFFFC || v36 + v41 < v36 )
              goto LABEL_53;
            v36 += v41;
          }
          if ( v36 + 4 < v36 )
            goto LABEL_53;
          if ( v36 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_68;
          *(_DWORD *)v36 = 8;
          *(_QWORD *)(v36 + 4) = v15;
        }
        else
        {
          v37 = *(_DWORD *)(a4 + 4);
          v38 = -1;
          v39 = v37 + 12;
          if ( v37 + 12 >= v37 )
            v38 = v37 + 12;
          v7 = v39 < v37 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v38;
          if ( v39 < v37 )
            goto LABEL_84;
        }
        ++*(_DWORD *)a4;
        v42 = *(_QWORD *)(a4 + 8);
        if ( !v42 )
        {
          v43 = *(_DWORD *)(a4 + 4);
          v44 = v43 + 20;
          if ( v43 + 20 >= v43 )
            v35 = v43 + 20;
          v7 = v44 < v43 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v35;
          if ( v44 >= v43 )
          {
            ++*(_DWORD *)a4;
            v7 = 0;
          }
          goto LABEL_84;
        }
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v46 = *(_DWORD *)v42 + 4;
          if ( *(_DWORD *)v42 >= 0xFFFFFFFC || v42 + v46 < v42 )
            goto LABEL_53;
          v42 += v46;
        }
        if ( v42 + 4 >= v42 )
        {
          v7 = 0;
          if ( v42 + 20 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v42 = 16;
            *(_OWORD *)(v42 + 4) = v49;
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
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  return v7;
}
