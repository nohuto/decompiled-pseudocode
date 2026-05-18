/*
 * XREFs of sub_180091CA0 @ 0x180091CA0
 * Callers:
 *     <none>
 * Callees:
 *     _o_expf @ 0x18000C434 (_o_expf.c)
 *     _o_sqrtf @ 0x18000C4A0 (_o_sqrtf.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180091CA0(double a1)
{
  __m128 v1; // xmm6

  *(float *)&a1 = (float)(*(float *)&a1 * *(float *)&a1) / 0.22222224;
  o_expf();
  v1 = _mm_xor_ps(*(__m128 *)&a1, (__m128)xmmword_18018D670);
  o_sqrtf();
  v1.m128_f32[0] = v1.m128_f32[0] * (float)(1.0 / (float)(6.2831855 * 0.33333334));
  return v1;
}
