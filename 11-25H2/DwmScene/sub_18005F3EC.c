/*
 * XREFs of sub_18005F3EC @ 0x18005F3EC
 * Callers:
 *     sub_18006139C @ 0x18006139C (sub_18006139C.c)
 * Callees:
 *     _o_powf @ 0x18000C028 (_o_powf.c)
 */

float __fastcall sub_18005F3EC(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1 / 100.0;
  v2 = fabs(a1 / 100.0);
  o_powf();
  if ( v1 < 0.0 )
    v2 = v2 * -1.0;
  return v2 * 100.0;
}
