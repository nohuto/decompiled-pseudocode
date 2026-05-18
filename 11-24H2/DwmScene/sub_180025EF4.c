/*
 * XREFs of sub_180025EF4 @ 0x180025EF4
 * Callers:
 *     sub_1800542C0 @ 0x1800542C0 (sub_1800542C0.c)
 * Callees:
 *     sub_18001D7D8 @ 0x18001D7D8 (sub_18001D7D8.c)
 */

__int64 __fastcall sub_180025EF4(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_18001D7D8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
