/*
 * XREFs of sub_18001E0C0 @ 0x18001E0C0
 * Callers:
 *     sub_18001E090 @ 0x18001E090 (sub_18001E090.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18001E7A4 @ 0x18001E7A4 (sub_18001E7A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E0C0(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cchWideChar; // ebp
  WCHAR *lpWideCharStr; // rax
  __m128i v9; // xmm1
  __int128 v11; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+50h] [rbp-48h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    cchWideChar = v6;
    v11 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3A0);
    LOWORD(v11) = 0;
    if ( v6 <= 0 )
      __fastfail(7u);
    sub_18001E7A4(&v11, v6);
    lpWideCharStr = (WCHAR *)sub_1800130AC((__int64)&v11);
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    v9 = _mm_loadu_si128(&si128);
    *(_OWORD *)a1 = v11;
    *(__m128i *)(a1 + 16) = v9;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3A0);
    LOWORD(v11) = 0;
    sub_180013128((__int64)&v11);
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
