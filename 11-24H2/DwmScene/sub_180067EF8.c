/*
 * XREFs of sub_180067EF8 @ 0x180067EF8
 * Callers:
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180067EF8(double a1)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm1
  __m128 v3; // xmm2
  __m128 v4; // xmm3

  v1 = _mm_mul_ps(*(__m128 *)&a1, *(__m128 *)&a1);
  v2 = _mm_shuffle_ps(v1, v1, 153);
  v1.m128_f32[0] = (float)(v1.m128_f32[0] + v2.m128_f32[0]) + _mm_shuffle_ps(v2, v2, 85).m128_f32[0];
  v3 = _mm_shuffle_ps(v1, v1, 0);
  v4 = _mm_and_ps(_mm_div_ps(*(__m128 *)&a1, _mm_sqrt_ps(v3)), _mm_cmpneq_ps((__m128)xmmword_1800F7F80, v3));
  return _mm_add_ps(
           _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_mul_ps(v4, (__m128)xmmword_1801049B0)),
           (__m128)xmmword_1800F8000);
}
