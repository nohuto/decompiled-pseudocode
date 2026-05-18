/*
 * XREFs of sub_180059A6C @ 0x180059A6C
 * Callers:
 *     sub_1800572BC @ 0x1800572BC (sub_1800572BC.c)
 * Callees:
 *     sub_180059B40 @ 0x180059B40 (sub_180059B40.c)
 */

float __fastcall sub_180059A6C(__int64 a1, float a2)
{
  float v3; // [rsp+80h] [rbp+10h] BYREF
  float v4; // [rsp+88h] [rbp+18h] BYREF

  v4 = 0.0;
  v3 = 0.0;
  sub_180059B40(&v4, &v3);
  return (float)(v3 / v4) / a2;
}
