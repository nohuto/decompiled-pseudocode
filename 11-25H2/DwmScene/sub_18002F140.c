/*
 * XREFs of sub_18002F140 @ 0x18002F140
 * Callers:
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 * Callees:
 *     sub_18002C640 @ 0x18002C640 (sub_18002C640.c)
 *     sub_18002EDD0 @ 0x18002EDD0 (sub_18002EDD0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002F140(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18002EDD0(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002C640(a1, v6, v5);
    v5 += 64LL;
  }
  return a1;
}
