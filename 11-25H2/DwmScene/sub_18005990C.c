/*
 * XREFs of sub_18005990C @ 0x18005990C
 * Callers:
 *     sub_18005715C @ 0x18005715C (sub_18005715C.c)
 * Callees:
 *     sub_1800599E0 @ 0x1800599E0 (sub_1800599E0.c)
 */

float __fastcall sub_18005990C(__int64 a1, float a2)
{
  float v3; // [rsp+80h] [rbp+10h] BYREF
  float v4; // [rsp+88h] [rbp+18h] BYREF

  v4 = 0.0;
  v3 = 0.0;
  sub_1800599E0(&v4, &v3);
  return (float)(v3 / v4) / a2;
}
