/*
 * XREFs of PfPrefetchRequestVerify @ 0x140934C2C
 * Callers:
 *     PfpPrefetchRequest @ 0x140934A0C (PfpPrefetchRequest.c)
 * Callees:
 *     PfPrefetchRequestVerifyPath @ 0x140934FD4 (PfPrefetchRequestVerifyPath.c)
 *     PfPrefetchRequestPrepareForVerify @ 0x140935060 (PfPrefetchRequestPrepareForVerify.c)
 *     PfPrefetchRequestVerifyRanges @ 0x1409363A4 (PfPrefetchRequestVerifyRanges.c)
 */

__int64 __fastcall PfPrefetchRequestVerify(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r15
  unsigned int i; // esi
  _DWORD *v19; // rdi
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned int j; // edi
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int128 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h]
  __int64 v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+58h] [rbp-8h]

  v28 = 0LL;
  v29 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (unsigned int)a2 < 0x80 )
    return 1000LL;
  if ( *(_DWORD *)a1 != 13 )
    return 1500LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)a2 != (_DWORD)v3 )
    return 2000LL;
  if ( a1 + v3 < a1 )
    return 2500LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 28) >= 8u )
    return 3000LL;
  if ( *(_WORD *)(a1 + 30) >= 8u )
    return 3200LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC0) != 0 )
    return 3400LL;
  if ( *(_BYTE *)(a1 + 81) >= 6u )
    return 3600LL;
  result = PfPrefetchRequestPrepareForVerify(a1, a2, &v25);
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 32);
    v6 = 40 * *(_DWORD *)(a1 + 8);
    if ( v5 < (unsigned int)v25 || v5 >= DWORD1(v25) && v6 )
      return 12500LL;
    v7 = v6 + v5;
    if ( v7 < (unsigned int)v25 || v7 > DWORD1(v25) || (v7 & 7) != 0 )
    {
      return 12500LL;
    }
    else
    {
      LODWORD(v25) = v7;
      _mm_lfence();
      v8 = 0;
      v9 = a1 + *(unsigned int *)(a1 + 32);
      while ( v8 < *(_DWORD *)(a1 + 8) )
      {
        v10 = *(unsigned int *)(v9 + 40LL * v8 + 24);
        v11 = *(unsigned int *)(v9 + 40LL * v8 + 32);
        if ( (unsigned int)v10 >= 0x7FFF )
          return 10000LL;
        if ( !(_DWORD)v10 )
          return 10500LL;
        if ( !(_DWORD)v11 )
          return 10750LL;
        if ( (unsigned int)v11 < (unsigned int)v28 || (unsigned int)v11 >= HIDWORD(v28) && 2 * (_DWORD)v10 != -2 )
          return 11000LL;
        v12 = v11 + 2 * v10 + 2;
        if ( v12 < (unsigned int)v28 || v12 > HIDWORD(v28) || (v12 & 1) != 0 )
          return 11000LL;
        LODWORD(v28) = v11 + 2 * v10 + 2;
        if ( *(_WORD *)(a1 + v11 + 2 * v10) )
          return 12000LL;
        v13 = *(_DWORD *)(v9 + 40LL * v8 + 12) >> 1;
        if ( !v13 )
          return 13000LL;
        if ( v13 > DWORD1(v26) )
          return 14000LL;
        v14 = *(unsigned int *)(v9 + 40LL * v8 + 16);
        v15 = 48 * v13;
        if ( (unsigned int)v14 < HIDWORD(v25) || (unsigned int)v14 >= (unsigned int)v26 && v15 )
          return 15000LL;
        v16 = v15 + v14;
        if ( (unsigned int)(v15 + v14) < HIDWORD(v25) || v16 > (unsigned int)v26 || (v16 & 7) != 0 )
          return 15000LL;
        HIDWORD(v25) = v15 + v14;
        v17 = a1 + v14;
        for ( i = 0; i < *(_DWORD *)(v9 + 40LL * v8 + 12) >> 1; ++i )
        {
          v19 = (_DWORD *)(v17 + 48LL * i);
          if ( v19[8] || v19[10] )
          {
            result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, _DWORD *, _QWORD))PfPrefetchRequestVerifyPath)(
                       a1,
                       &v25,
                       v19 + 8,
                       0LL);
            if ( (_DWORD)result )
              return result;
          }
          result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, _DWORD *, _QWORD))PfPrefetchRequestVerifyRanges)(
                     a1,
                     &v25,
                     v19 + 4,
                     (*v19 & 1) != 0 ? 512 : 4096);
          if ( (_DWORD)result )
            return result;
        }
        ++v8;
      }
      v20 = *(unsigned int *)(a1 + 56);
      v21 = 40 * *(_DWORD *)(a1 + 20);
      if ( (unsigned int)v20 < DWORD1(v27) || (unsigned int)v20 >= DWORD2(v27) && v21 )
        return 40000LL;
      v22 = v21 + v20;
      if ( (unsigned int)(v21 + v20) < DWORD1(v27) || v22 > DWORD2(v27) || (v22 & 7) != 0 )
      {
        return 40000LL;
      }
      else
      {
        DWORD1(v27) = v21 + v20;
        v23 = a1 + v20;
        for ( j = 0; j < *(_DWORD *)(a1 + 20); ++j )
        {
          result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, __int64, __int64))PfPrefetchRequestVerifyRanges)(
                     a1,
                     &v25,
                     v23 + 8 * (j + 4LL * j + 3),
                     4096LL);
          if ( (_DWORD)result )
            return result;
        }
        return 0LL;
      }
    }
  }
  return result;
}
