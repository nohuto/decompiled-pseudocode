/*
 * XREFs of sub_140ABA258 @ 0x140ABA258
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140ABA258(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r8d
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r9d
  __int64 v11; // r10
  unsigned int *v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rsi
  unsigned int j; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int *v18; // rcx
  int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  __int64 Pool2; // rax
  int v23; // ebp
  _DWORD *v24; // rdx
  unsigned int k; // ecx
  unsigned int v26; // eax
  int v27; // r9d
  unsigned __int64 v28; // rdx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int m; // ecx
  unsigned int v33; // eax
  _DWORD *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int n; // ecx
  unsigned int v38; // eax
  _OWORD *v39; // r9
  __int64 v40; // rcx
  _OWORD *v41; // rax
  __int128 v42; // xmm1
  _BYTE v44[256]; // [rsp+30h] [rbp-118h] BYREF

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
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v16 = *v8;
    v17 = v8 + 1;
    if ( j >= 4 )
      break;
    if ( v17 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  if ( v17 < v8 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( (_DWORD)v16 )
    v18 = v17;
  if ( !qword_140FD73A8 )
    return (unsigned int)-1073741637;
  v7 = guard_dispatch_icall_no_overrides(v18, (unsigned int)v16, v44, 256LL);
  if ( (v7 & 0x80000000) == 0 )
  {
    v19 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFED0 )
    {
      v20 = *(_DWORD *)(a2 + 16) + 308;
      v21 = v7;
      if ( v20 >= *(_DWORD *)(a2 + 16) + 304 )
      {
        v7 = v19 + v20 < v20 ? 0xC0000095 : 0;
        if ( v19 + v20 < v20 )
          return v7;
        *(_DWORD *)(a4 + 4) = 280;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = Pool2;
        *(_DWORD *)a4 = 0;
        v23 = v21 | 0x10000000;
        v24 = (_DWORD *)Pool2;
        for ( k = 0; k < *(_DWORD *)a4; ++k )
        {
          v26 = *v24 + 4;
          if ( *v24 >= 0xFFFFFFFC || (_DWORD *)((char *)v24 + v26) < v24 )
            return (unsigned int)-1073741675;
          v24 = (_DWORD *)((char *)v24 + v26);
        }
        if ( v24 + 1 >= v24 )
        {
          if ( (unsigned __int64)(v24 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *v24 = 4;
          v24[1] = v23;
          ++*(_DWORD *)a4;
          v27 = -1;
          v28 = *(_QWORD *)(a4 + 8);
          if ( v28 )
          {
            for ( m = 0; m < *(_DWORD *)a4; ++m )
            {
              v33 = *(_DWORD *)v28 + 4;
              if ( *(_DWORD *)v28 >= 0xFFFFFFFC || v28 + v33 < v28 )
                return (unsigned int)-1073741675;
              v28 += v33;
            }
            if ( v28 + 4 < v28 )
              return (unsigned int)-1073741675;
            if ( v28 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *(_DWORD *)v28 = 8;
            *(_QWORD *)(v28 + 4) = v14;
          }
          else
          {
            v29 = *(_DWORD *)(a4 + 4);
            v30 = -1;
            v31 = v29 + 12;
            if ( v29 + 12 >= v29 )
              v30 = v29 + 12;
            v7 = v31 < v29 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v30;
            if ( v31 < v29 )
              return v7;
          }
          ++*(_DWORD *)a4;
          v34 = *(_DWORD **)(a4 + 8);
          if ( !v34 )
          {
            v35 = *(_DWORD *)(a4 + 4);
            v36 = v35 + 260;
            if ( v35 + 260 >= v35 )
              v27 = v35 + 260;
            v7 = v36 < v35 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v27;
            if ( v36 >= v35 )
            {
              ++*(_DWORD *)a4;
              return 0;
            }
            return v7;
          }
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v38 = *v34 + 4;
            if ( *v34 >= 0xFFFFFFFC || (_DWORD *)((char *)v34 + v38) < v34 )
              return (unsigned int)-1073741675;
            v34 = (_DWORD *)((char *)v34 + v38);
          }
          v39 = v34 + 1;
          if ( v34 + 1 >= v34 )
          {
            v7 = 0;
            if ( (unsigned __int64)(v34 + 65) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v40 = 2LL;
              *v34 = 256;
              v41 = v44;
              do
              {
                *v39 = *v41;
                v39[1] = v41[1];
                v39[2] = v41[2];
                v39[3] = v41[3];
                v39[4] = v41[4];
                v39[5] = v41[5];
                v39[6] = v41[6];
                v39 += 8;
                v42 = v41[7];
                v41 += 8;
                *(v39 - 1) = v42;
                --v40;
              }
              while ( v40 );
              ++*(_DWORD *)a4;
              return v7;
            }
            return (unsigned int)-1073741789;
          }
        }
        return (unsigned int)-1073741675;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v7;
}
