/*
 * XREFs of sub_18002BF28 @ 0x18002BF28
 * Callers:
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 * Callees:
 *     sub_18002B688 @ 0x18002B688 (sub_18002B688.c)
 */

float __fastcall sub_18002BF28(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  sub_18002B688((__int64)&v3, (__int64)&v2);
  return v3;
}
