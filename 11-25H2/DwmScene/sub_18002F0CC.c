/*
 * XREFs of sub_18002F0CC @ 0x18002F0CC
 * Callers:
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 * Callees:
 *     sub_18002C55C @ 0x18002C55C (sub_18002C55C.c)
 *     sub_18002ED90 @ 0x18002ED90 (sub_18002ED90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002F0CC(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18002ED90(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002C55C(a1, v6, v5);
    v5 += 40LL;
  }
  return a1;
}
