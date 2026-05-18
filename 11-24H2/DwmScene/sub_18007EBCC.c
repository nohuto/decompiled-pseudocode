/*
 * XREFs of sub_18007EBCC @ 0x18007EBCC
 * Callers:
 *     sub_18007D078 @ 0x18007D078 (sub_18007D078.c)
 *     sub_180082618 @ 0x180082618 (sub_180082618.c)
 * Callees:
 *     sub_1800542A0 @ 0x1800542A0 (sub_1800542A0.c)
 */

__int64 __fastcall sub_18007EBCC(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_1800542A0((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 48 * a2;
  return result;
}
