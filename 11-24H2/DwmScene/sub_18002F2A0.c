/*
 * XREFs of sub_18002F2A0 @ 0x18002F2A0
 * Callers:
 *     sub_180034A20 @ 0x180034A20 (sub_180034A20.c)
 * Callees:
 *     sub_18002C7A0 @ 0x18002C7A0 (sub_18002C7A0.c)
 *     sub_18002EF30 @ 0x18002EF30 (sub_18002EF30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002F2A0(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18002EF30(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002C7A0(a1, v6, v5);
    v5 += 64LL;
  }
  return a1;
}
