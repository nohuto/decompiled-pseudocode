/*
 * XREFs of sub_180041CA4 @ 0x180041CA4
 * Callers:
 *     sub_180013770 @ 0x180013770 (sub_180013770.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 */

__int64 __fastcall sub_180041CA4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_18007C558(v4, v5, v3);
}
