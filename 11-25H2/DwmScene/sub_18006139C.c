/*
 * XREFs of sub_18006139C @ 0x18006139C
 * Callers:
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     _o_fmodf @ 0x18000BFF8 (_o_fmodf.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_18001B134 @ 0x18001B134 (sub_18001B134.c)
 *     sub_18005F3EC @ 0x18005F3EC (sub_18005F3EC.c)
 */

__m128 *__fastcall sub_18006139C(__m128 *a1, float a2, float a3, float a4, float a5)
{
  float v6; // xmm11_4
  float v7; // xmm6_4
  float v8; // xmm9_4
  float v9; // xmm12_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  __m128 *result; // rax

  v6 = sub_18001110C(a2, 0.0, 360.0);
  v7 = sub_18001110C(a3, -100.0, 100.0);
  v8 = sub_18001110C(a4, -100.0, 100.0);
  v9 = sub_18005F3EC(v7) * 0.5;
  v10 = sub_18001110C(a5, -100.0, 100.0);
  v11 = sub_18005F3EC(v10);
  if ( v9 < 0.0 )
  {
    v6 = v6 + 180.0;
    v9 = v9 * -1.0;
    o_fmodf();
  }
  sub_18001B134((__int64)a1, v6, v9, (float)(v11 * 0.25) + 50.0);
  result = a1;
  *a1 = _mm_mul_ps((__m128)xmmword_18018C650, *a1);
  a1->m128_f32[3] = (float)(v8 * 0.0099999998) + 1.0;
  return result;
}
