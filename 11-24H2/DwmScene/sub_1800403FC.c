/*
 * XREFs of sub_1800403FC @ 0x1800403FC
 * Callers:
 *     sub_180040620 @ 0x180040620 (sub_180040620.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180040424 @ 0x180040424 (sub_180040424.c)
 */

__int64 __fastcall sub_1800403FC(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180040424(v3, v2);
}
