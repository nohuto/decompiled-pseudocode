/*
 * XREFs of sub_18002C088 @ 0x18002C088
 * Callers:
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 * Callees:
 *     sub_18002B7E8 @ 0x18002B7E8 (sub_18002B7E8.c)
 */

float __fastcall sub_18002C088(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  sub_18002B7E8((__int64)&v3, (__int64)&v2);
  return v3;
}
