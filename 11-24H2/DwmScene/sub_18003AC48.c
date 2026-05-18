/*
 * XREFs of sub_18003AC48 @ 0x18003AC48
 * Callers:
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_18004E604 @ 0x18004E604 (sub_18004E604.c)
 *     sub_180088C60 @ 0x180088C60 (sub_180088C60.c)
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 *     sub_1800993A8 @ 0x1800993A8 (sub_1800993A8.c)
 *     sub_1800D39D8 @ 0x1800D39D8 (sub_1800D39D8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003AC48(unsigned __int64 *a1)
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
  v6 = _mm_cmpneq_ps((__m128)xmmword_1800F7F80, v4);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, (__m128)xmmword_1800F7FD0));
  *a1 = v7.m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}
