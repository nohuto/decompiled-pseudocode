/*
 * XREFs of sub_1800986AC @ 0x1800986AC
 * Callers:
 *     sub_18004E580 @ 0x18004E580 (sub_18004E580.c)
 *     sub_180098728 @ 0x180098728 (sub_180098728.c)
 *     sub_1800989C8 @ 0x1800989C8 (sub_1800989C8.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_1800986AC(__m128 *a1, double a2)
{
  __m128 v2; // xmm2

  v2 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  *a1 = _mm_mul_ps(v2, *a1);
  a1[1] = _mm_mul_ps(a1[1], v2);
  a1[2] = _mm_mul_ps(a1[2], v2);
  a1[3] = _mm_mul_ps(a1[3], v2);
  a1[4] = _mm_mul_ps(a1[4], v2);
  a1[5] = _mm_mul_ps(v2, a1[5]);
  a1[6] = _mm_mul_ps(a1[6], v2);
  a1[7] = _mm_mul_ps(a1[7], v2);
  a1[8] = _mm_mul_ps(a1[8], v2);
}
