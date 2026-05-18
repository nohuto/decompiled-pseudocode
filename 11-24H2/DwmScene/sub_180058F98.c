/*
 * XREFs of sub_180058F98 @ 0x180058F98
 * Callers:
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_1800906F0 @ 0x1800906F0 (sub_1800906F0.c)
 *     sub_1800993A8 @ 0x1800993A8 (sub_1800993A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

void __fastcall sub_180058F98(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm4
  __m128 v5; // xmm3
  __m128 v6; // xmm0
  __m128 v7; // xmm2

  v2 = a1[1];
  v3 = a1[3];
  v4 = _mm_shuffle_ps(*a1, v2, 238);
  v5 = _mm_shuffle_ps(*a1, v2, 68);
  v6 = _mm_shuffle_ps(a1[2], v3, 68);
  v7 = _mm_shuffle_ps(a1[2], v3, 238);
  *a2 = _mm_shuffle_ps(v5, v6, 136);
  a2[1] = _mm_shuffle_ps(v5, v6, 221);
  a2[2] = _mm_shuffle_ps(v4, v7, 136);
  a2[3] = _mm_shuffle_ps(v4, v7, 221);
}
