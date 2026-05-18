/*
 * XREFs of sub_1800874BC @ 0x1800874BC
 * Callers:
 *     sub_180087C40 @ 0x180087C40 (sub_180087C40.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180087760 @ 0x180087760 (sub_180087760.c)
 */

__int64 __fastcall sub_1800874BC(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180087760(v3, v2);
}
