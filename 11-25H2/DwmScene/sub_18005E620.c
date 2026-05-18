/*
 * XREFs of sub_18005E620 @ 0x18005E620
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     sub_18004B288 @ 0x18004B288 (sub_18004B288.c)
 *     sub_18005DB3C @ 0x18005DB3C (sub_18005DB3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005E620(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18004B288(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18005DB3C(a1, v6, v5);
    v5 += 32LL;
  }
  return a1;
}
