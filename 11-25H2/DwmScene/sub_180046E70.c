/*
 * XREFs of sub_180046E70 @ 0x180046E70
 * Callers:
 *     sub_180046FE0 @ 0x180046FE0 (sub_180046FE0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180046E98 @ 0x180046E98 (sub_180046E98.c)
 */

__int64 __fastcall sub_180046E70(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180046E98(v3, v2);
}
