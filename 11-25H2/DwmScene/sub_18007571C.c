/*
 * XREFs of sub_18007571C @ 0x18007571C
 * Callers:
 *     sub_180073930 @ 0x180073930 (sub_180073930.c)
 * Callees:
 *     sub_1800237B8 @ 0x1800237B8 (sub_1800237B8.c)
 */

__int64 __fastcall sub_18007571C(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_1800237B8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + (a2 << 6);
  return result;
}
