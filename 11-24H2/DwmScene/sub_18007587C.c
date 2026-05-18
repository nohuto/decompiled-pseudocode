/*
 * XREFs of sub_18007587C @ 0x18007587C
 * Callers:
 *     sub_180073A90 @ 0x180073A90 (sub_180073A90.c)
 * Callees:
 *     sub_180023918 @ 0x180023918 (sub_180023918.c)
 */

__int64 __fastcall sub_18007587C(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_180023918((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + (a2 << 6);
  return result;
}
