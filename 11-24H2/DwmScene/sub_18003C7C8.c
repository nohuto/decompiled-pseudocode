/*
 * XREFs of sub_18003C7C8 @ 0x18003C7C8
 * Callers:
 *     sub_18003C5D8 @ 0x18003C5D8 (sub_18003C5D8.c)
 * Callees:
 *     sub_18003C83C @ 0x18003C83C (sub_18003C83C.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003C7C8(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-38h] BYREF
  __m128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  sub_18003C83C(&v2, &v3);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_1800F8040, v2), _mm_and_ps(v3, (__m128)xmmword_1800F81A0)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_1800F8040, *(__m128 *)&a1), (__m128)xmmword_1800F8150));
}
