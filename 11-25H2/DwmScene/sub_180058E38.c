/*
 * XREFs of sub_180058E38 @ 0x180058E38
 * Callers:
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_180077FC0 @ 0x180077FC0 (sub_180077FC0.c)
 *     sub_180090590 @ 0x180090590 (sub_180090590.c)
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

void __fastcall sub_180058E38(__m128 *a1, __m128 *a2)
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
