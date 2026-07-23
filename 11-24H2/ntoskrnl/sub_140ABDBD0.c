/*
 * XREFs of sub_140ABDBD0 @ 0x140ABDBD0
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140ABDBD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int i; // r9d
  __int64 v11; // r10
  unsigned int *v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // rsi
  unsigned int *v15; // rax
  unsigned int j; // r9d
  __int64 v17; // r10
  unsigned int *v18; // rcx
  unsigned int *v19; // r11
  unsigned int *v20; // rax
  unsigned int k; // r9d
  __int64 v22; // rbp
  unsigned int *v23; // rcx
  unsigned int m; // r8d
  __int64 v25; // r9
  unsigned int *v26; // rcx
  int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // ebp
  __int64 Pool2; // rax
  int v31; // ebp
  _DWORD *v32; // rdx
  unsigned int n; // ecx
  unsigned int v34; // eax
  int v35; // r9d
  unsigned __int64 v36; // rdx
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int jj; // ecx
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int ii; // ecx
  unsigned int v46; // eax
  __int128 v48; // [rsp+50h] [rbp-48h]
  __int128 v49; // [rsp+60h] [rbp-38h]

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
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
    v19 = v15 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v20 = v8;
  for ( k = 0; ; ++k )
  {
    v22 = *v20;
    v23 = v20 + 1;
    if ( k >= 5 )
      break;
    if ( v23 < v20 )
      return (unsigned int)-1073741675;
    v20 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v20 )
    return (unsigned int)-1073741675;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v25 = *v8;
    v26 = v8 + 1;
    if ( m >= 6 )
      break;
    if ( v26 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v26 + v25);
    if ( (unsigned int *)((char *)v26 + v25) < v26 )
      return (unsigned int)-1073741675;
  }
  if ( v26 < v8 )
    return (unsigned int)-1073741675;
  if ( !qword_140FD83C0 )
    return (unsigned int)-1073741637;
  v7 = guard_dispatch_icall_no_overrides(v19, (unsigned int)v17);
  if ( (v7 & 0x80000000) == 0 )
  {
    v27 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
    {
      v28 = *(_DWORD *)(a2 + 16) + 84;
      v29 = v7;
      if ( v28 >= *(_DWORD *)(a2 + 16) + 80 )
      {
        v7 = v28 + v27 < v28 ? 0xC0000095 : 0;
        if ( v28 + v27 < v28 )
          return v7;
        *(_DWORD *)(a4 + 4) = 56;
        Pool2 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x20534C53u);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = Pool2;
        *(_DWORD *)a4 = 0;
        v31 = v29 | 0x10000000;
        v32 = (_DWORD *)Pool2;
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v34 = *v32 + 4;
          if ( *v32 >= 0xFFFFFFFC || (_DWORD *)((char *)v32 + v34) < v32 )
            return (unsigned int)-1073741675;
          v32 = (_DWORD *)((char *)v32 + v34);
        }
        if ( v32 + 1 < v32 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v32 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v32 = 4;
          v32[1] = v31;
          ++*(_DWORD *)a4;
          v35 = -1;
          v36 = *(_QWORD *)(a4 + 8);
          if ( !v36 )
          {
            v37 = *(_DWORD *)(a4 + 4);
            v38 = -1;
            v39 = v37 + 12;
            if ( v37 + 12 >= v37 )
              v38 = v37 + 12;
            v7 = v39 < v37 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v38;
            if ( v39 < v37 )
              return v7;
LABEL_68:
            ++*(_DWORD *)a4;
            v42 = *(_QWORD *)(a4 + 8);
            if ( !v42 )
            {
              v43 = *(_DWORD *)(a4 + 4);
              v44 = v43 + 36;
              if ( v43 + 36 >= v43 )
                v35 = v43 + 36;
              v7 = v44 < v43 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v35;
              if ( v44 >= v43 )
              {
                ++*(_DWORD *)a4;
                return 0;
              }
              return v7;
            }
            for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
            {
              v46 = *(_DWORD *)v42 + 4;
              if ( *(_DWORD *)v42 >= 0xFFFFFFFC || v42 + v46 < v42 )
                return (unsigned int)-1073741675;
              v42 += v46;
            }
            if ( v42 + 4 >= v42 )
            {
              v7 = 0;
              if ( v42 + 36 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v42 = 32;
                *(_OWORD *)(v42 + 4) = v48;
                *(_OWORD *)(v42 + 20) = v49;
                ++*(_DWORD *)a4;
                return v7;
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741675;
          }
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v41 = *(_DWORD *)v36 + 4;
            if ( *(_DWORD *)v36 >= 0xFFFFFFFC || v36 + v41 < v36 )
              return (unsigned int)-1073741675;
            v36 += v41;
          }
          if ( v36 + 4 < v36 )
            return (unsigned int)-1073741675;
          if ( v36 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v36 = 8;
            *(_QWORD *)(v36 + 4) = v14;
            goto LABEL_68;
          }
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v7;
}
