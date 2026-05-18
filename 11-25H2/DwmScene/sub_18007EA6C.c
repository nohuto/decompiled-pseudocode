/*
 * XREFs of sub_18007EA6C @ 0x18007EA6C
 * Callers:
 *     sub_18007CF18 @ 0x18007CF18 (sub_18007CF18.c)
 *     sub_1800824B8 @ 0x1800824B8 (sub_1800824B8.c)
 * Callees:
 *     sub_180054140 @ 0x180054140 (sub_180054140.c)
 */

__int64 __fastcall sub_18007EA6C(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_180054140((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 48 * a2;
  return result;
}
