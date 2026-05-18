/*
 * XREFs of sub_18003C668 @ 0x18003C668
 * Callers:
 *     sub_18003C478 @ 0x18003C478 (sub_18003C478.c)
 * Callees:
 *     sub_18003C6DC @ 0x18003C6DC (sub_18003C6DC.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003C668(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-38h] BYREF
  __m128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  sub_18003C6DC(&v2, &v3);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_1800F7040, v2), _mm_and_ps(v3, (__m128)xmmword_1800F71A0)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_1800F7040, *(__m128 *)&a1), (__m128)xmmword_1800F7150));
}
