/*
 * XREFs of sub_1800D05A0 @ 0x1800D05A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800CEC7C @ 0x1800CEC7C (sub_1800CEC7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D05A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  v7 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3A0);
  LOWORD(v7) = 0;
  if ( (unsigned int)sub_1800CEC7C(a1, a3, &v7) )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)a4;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
  }
  else
  {
    *(_OWORD *)a2 = v7;
    *(__m128i *)(a2 + 16) = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3A0);
    LOWORD(v7) = 0;
  }
  sub_180013128((__int64)&v7);
  sub_180013128(a4);
  return a2;
}
