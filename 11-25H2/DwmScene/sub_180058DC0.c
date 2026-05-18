/*
 * XREFs of sub_180058DC0 @ 0x180058DC0
 * Callers:
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

__m128 *__fastcall sub_180058DC0(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 *result; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm4
  __m128 v6; // xmm3
  __m128 v7; // xmm0
  __m128 v8; // xmm2

  v2 = a1[1];
  result = a2;
  v4 = a1[3];
  v5 = _mm_shuffle_ps(*a1, v2, 238);
  v6 = _mm_shuffle_ps(*a1, v2, 68);
  v7 = _mm_shuffle_ps(a1[2], v4, 68);
  v8 = _mm_shuffle_ps(a1[2], v4, 238);
  *a2 = _mm_shuffle_ps(v6, v7, 136);
  a2[1] = _mm_shuffle_ps(v6, v7, 221);
  a2[2] = _mm_shuffle_ps(v5, v8, 136);
  a2[3] = _mm_shuffle_ps(v5, v8, 221);
  return result;
}
