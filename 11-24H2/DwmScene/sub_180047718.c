/*
 * XREFs of sub_180047718 @ 0x180047718
 * Callers:
 *     sub_180048400 @ 0x180048400 (sub_180048400.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 */

__int64 __fastcall sub_180047718(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180047BB0(v3, v2);
}
