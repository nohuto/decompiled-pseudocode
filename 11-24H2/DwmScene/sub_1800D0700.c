/*
 * XREFs of sub_1800D0700 @ 0x1800D0700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D0700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  v7 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D390);
  LOWORD(v7) = 0;
  if ( (unsigned int)sub_1800CEDDC(a1, a3, &v7) )
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
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018D390);
    LOWORD(v7) = 0;
  }
  sub_180013228((__int64)&v7);
  sub_180013228(a4);
  return a2;
}
