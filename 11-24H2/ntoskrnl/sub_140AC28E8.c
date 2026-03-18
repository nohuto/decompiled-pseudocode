/*
 * XREFs of sub_140AC28E8 @ 0x140AC28E8
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AC28E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int *v24; // rbx
  unsigned int m; // r8d
  __int64 v26; // r9
  unsigned int *v27; // rcx
  int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // ebp
  __int64 Pool2; // rax
  int v32; // ebp
  _DWORD *v33; // rdx
  unsigned int n; // ecx
  unsigned int v35; // eax
  int v36; // r9d
  unsigned __int64 v37; // rdx
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int jj; // ecx
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int ii; // ecx
  unsigned int v47; // eax
  __int128 v49; // [rsp+50h] [rbp-48h]
  __int128 v50; // [rsp+60h] [rbp-38h]

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
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = v20 + 1;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v26 = *v8;
    v27 = v8 + 1;
    if ( m >= 6 )
      break;
    if ( v27 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      return (unsigned int)-1073741675;
  }
  if ( v27 < v8 )
    return (unsigned int)-1073741675;
  if ( !qword_140FD73B0 )
    return (unsigned int)-1073741637;
  v7 = guard_dispatch_icall_no_overrides(v19, (unsigned int)v17, v24, (unsigned int)v22);
  if ( (v7 & 0x80000000) == 0 )
  {
    v28 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
    {
      v29 = *(_DWORD *)(a2 + 16) + 84;
      v30 = v7;
      if ( v29 >= *(_DWORD *)(a2 + 16) + 80 )
      {
        v7 = v29 + v28 < v29 ? 0xC0000095 : 0;
        if ( v29 + v28 < v29 )
          return v7;
        *(_DWORD *)(a4 + 4) = 56;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = Pool2;
        *(_DWORD *)a4 = 0;
        v32 = v30 | 0x10000000;
        v33 = (_DWORD *)Pool2;
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v35 = *v33 + 4;
          if ( *v33 >= 0xFFFFFFFC || (_DWORD *)((char *)v33 + v35) < v33 )
            return (unsigned int)-1073741675;
          v33 = (_DWORD *)((char *)v33 + v35);
        }
        if ( v33 + 1 < v33 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v33 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v33 = 4;
          v33[1] = v32;
          ++*(_DWORD *)a4;
          v36 = -1;
          v37 = *(_QWORD *)(a4 + 8);
          if ( !v37 )
          {
            v38 = *(_DWORD *)(a4 + 4);
            v39 = -1;
            v40 = v38 + 12;
            if ( v38 + 12 >= v38 )
              v39 = v38 + 12;
            v7 = v40 < v38 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v39;
            if ( v40 < v38 )
              return v7;
LABEL_70:
            ++*(_DWORD *)a4;
            v43 = *(_QWORD *)(a4 + 8);
            if ( !v43 )
            {
              v44 = *(_DWORD *)(a4 + 4);
              v45 = v44 + 36;
              if ( v44 + 36 >= v44 )
                v36 = v44 + 36;
              v7 = v45 < v44 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v36;
              if ( v45 >= v44 )
              {
                ++*(_DWORD *)a4;
                return 0;
              }
              return v7;
            }
            for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
            {
              v47 = *(_DWORD *)v43 + 4;
              if ( *(_DWORD *)v43 >= 0xFFFFFFFC || v43 + v47 < v43 )
                return (unsigned int)-1073741675;
              v43 += v47;
            }
            if ( v43 + 4 >= v43 )
            {
              v7 = 0;
              if ( v43 + 36 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v43 = 32;
                *(_OWORD *)(v43 + 4) = v49;
                *(_OWORD *)(v43 + 20) = v50;
                ++*(_DWORD *)a4;
                return v7;
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741675;
          }
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v42 = *(_DWORD *)v37 + 4;
            if ( *(_DWORD *)v37 >= 0xFFFFFFFC || v37 + v42 < v37 )
              return (unsigned int)-1073741675;
            v37 += v42;
          }
          if ( v37 + 4 < v37 )
            return (unsigned int)-1073741675;
          if ( v37 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v37 = 8;
            *(_QWORD *)(v37 + 4) = v14;
            goto LABEL_70;
          }
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v7;
}
