/*
 * XREFs of sub_18005E780 @ 0x18005E780
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     sub_18004B3E8 @ 0x18004B3E8 (sub_18004B3E8.c)
 *     sub_18005DC9C @ 0x18005DC9C (sub_18005DC9C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005E780(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18004B3E8(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18005DC9C(a1, v6, v5);
    v5 += 32LL;
  }
  return a1;
}
