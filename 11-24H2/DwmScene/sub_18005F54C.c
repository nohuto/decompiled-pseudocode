/*
 * XREFs of sub_18005F54C @ 0x18005F54C
 * Callers:
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 * Callees:
 *     _o_powf @ 0x18000C488 (_o_powf.c)
 */

float __fastcall sub_18005F54C(float a1)
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
