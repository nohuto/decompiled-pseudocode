/*
 * XREFs of sub_180047264 @ 0x180047264
 * Callers:
 *     sub_1800473C0 @ 0x1800473C0 (sub_1800473C0.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180047264(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm0
  __m128 v6; // xmm0

  result = 0LL;
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v4 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a1 + 12), (__m128)*((unsigned int *)a1 + 5));
  do
  {
    v5 = _mm_mul_ps(v4, (__m128)xmmword_1800F70A0[result++]);
    v6 = _mm_add_ps(v5, v3);
    *(_QWORD *)a2 = v6.m128_u64[0];
    *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    a2 += 12LL;
  }
  while ( result < 8 );
  return result * 16;
}
