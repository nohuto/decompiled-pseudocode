/*
 * XREFs of sub_180013E9C @ 0x180013E9C
 * Callers:
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 * Callees:
 *     sub_180046E98 @ 0x180046E98 (sub_180046E98.c)
 */

__int64 __fastcall sub_180013E9C(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v5[1] = v3;
  return sub_180046E98(a1, v5);
}
