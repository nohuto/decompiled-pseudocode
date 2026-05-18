/*
 * XREFs of sub_1800884F4 @ 0x1800884F4
 * Callers:
 *     sub_180088B00 @ 0x180088B00 (sub_180088B00.c)
 * Callees:
 *     sub_180087A18 @ 0x180087A18 (sub_180087A18.c)
 */

__m128 __fastcall sub_1800884F4(__int64 a1)
{
  __m128 result; // xmm0
  __m128 v3; // xmm1

  if ( *(_DWORD *)(a1 + 1816) )
  {
    v3 = sub_180087A18(a1, *(float *)(a1 + 1812));
    result = (__m128)*(unsigned int *)(a1 + 1828);
    if ( result.m128_f32[0] <= v3.m128_f32[0] )
      return v3;
  }
  else
  {
    return (__m128)*(unsigned int *)(a1 + 1828);
  }
  return result;
}
