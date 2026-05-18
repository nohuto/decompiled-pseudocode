/*
 * XREFs of sub_18008735C @ 0x18008735C
 * Callers:
 *     sub_180087AE0 @ 0x180087AE0 (sub_180087AE0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180087600 @ 0x180087600 (sub_180087600.c)
 */

__int64 __fastcall sub_18008735C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180087600(v3, v2);
}
