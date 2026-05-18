/*
 * XREFs of sub_180041E38 @ 0x180041E38
 * Callers:
 *     sub_180013770 @ 0x180013770 (sub_180013770.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18007C758 @ 0x18007C758 (sub_18007C758.c)
 */

__int64 __fastcall sub_180041E38(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_18007C758(v4, v5, v3);
}
