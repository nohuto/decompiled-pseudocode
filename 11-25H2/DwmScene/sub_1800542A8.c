/*
 * XREFs of sub_1800542A8 @ 0x1800542A8
 * Callers:
 *     sub_180056690 @ 0x180056690 (sub_180056690.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180054B7C @ 0x180054B7C (sub_180054B7C.c)
 */

__int64 __fastcall sub_1800542A8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180054B7C(v3, v2);
}
