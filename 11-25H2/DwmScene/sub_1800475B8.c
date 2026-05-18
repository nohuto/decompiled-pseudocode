/*
 * XREFs of sub_1800475B8 @ 0x1800475B8
 * Callers:
 *     sub_1800482A0 @ 0x1800482A0 (sub_1800482A0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 */

__int64 __fastcall sub_1800475B8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180047A50(v3, v2);
}
