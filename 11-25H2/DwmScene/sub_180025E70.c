/*
 * XREFs of sub_180025E70 @ 0x180025E70
 * Callers:
 *     sub_180025FBC @ 0x180025FBC (sub_180025FBC.c)
 *     sub_180026050 @ 0x180026050 (sub_180026050.c)
 * Callees:
 *     sub_1800119AC @ 0x1800119AC (sub_1800119AC.c)
 *     sub_180024380 @ 0x180024380 (sub_180024380.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_180025E70(__int32 a1)
{
  __m128i *v1; // rax
  __m128i v2; // [rsp+20h] [rbp-38h] BYREF
  __m128i v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v2.m128i_i32[0] = a1;
  v2.m128i_i64[1] = (__int64)&off_1801B8218;
  v1 = sub_180024380(v3, &v2);
  sub_1800119AC((const struct stdext::exception *)v1);
}
