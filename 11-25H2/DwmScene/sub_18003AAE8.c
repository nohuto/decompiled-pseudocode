/*
 * XREFs of sub_18003AAE8 @ 0x18003AAE8
 * Callers:
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_18004E4A4 @ 0x18004E4A4 (sub_18004E4A4.c)
 *     sub_180088B00 @ 0x180088B00 (sub_180088B00.c)
 *     sub_18008BFD0 @ 0x18008BFD0 (sub_18008BFD0.c)
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 *     sub_1800D3878 @ 0x1800D3878 (sub_1800D3878.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003AAE8(unsigned __int64 *a1)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm4

  v1 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_shuffle_ps(v2, v2, 153);
  v2.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_sqrt_ps(v4);
  v6 = _mm_cmpneq_ps((__m128)xmmword_1800F6F80, v4);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, (__m128)xmmword_1800F6FD0));
  *a1 = v7.m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}
