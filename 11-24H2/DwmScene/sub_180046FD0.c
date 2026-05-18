/*
 * XREFs of sub_180046FD0 @ 0x180046FD0
 * Callers:
 *     sub_180047140 @ 0x180047140 (sub_180047140.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180046FF8 @ 0x180046FF8 (sub_180046FF8.c)
 */

__int64 __fastcall sub_180046FD0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180046FF8(v3, v2);
}
