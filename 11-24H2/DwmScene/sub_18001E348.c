/*
 * XREFs of sub_18001E348 @ 0x18001E348
 * Callers:
 *     sub_18001D548 @ 0x18001D548 (sub_18001D548.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001E890 @ 0x18001E890 (sub_18001E890.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E348(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cbMultiByte; // ebp
  CHAR *lpMultiByteStr; // rax
  __m128i v9; // xmm1
  __int128 v11; // [rsp+50h] [rbp-58h] BYREF
  __m128i si128; // [rsp+60h] [rbp-48h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = WideCharToMultiByte(0xFDE9u, 0, a2, a3, 0LL, 0, 0LL, 0LL);
    cbMultiByte = v6;
    v11 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018D3A0);
    LOBYTE(v11) = 0;
    if ( v6 <= 0 )
      __fastfail(7u);
    sub_18001E890(&v11, v6);
    lpMultiByteStr = (CHAR *)sub_1800138F8((__int64)&v11);
    WideCharToMultiByte(0xFDE9u, 0, a2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    v9 = _mm_loadu_si128(&si128);
    *(_OWORD *)a1 = v11;
    *(__m128i *)(a1 + 16) = v9;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018D3A0);
    LOBYTE(v11) = 0;
    sub_180011B5C((__int64)&v11);
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
