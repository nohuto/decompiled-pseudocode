/*
 * XREFs of sub_18004029C @ 0x18004029C
 * Callers:
 *     sub_1800404C0 @ 0x1800404C0 (sub_1800404C0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800402C4 @ 0x1800402C4 (sub_1800402C4.c)
 */

__int64 __fastcall sub_18004029C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_1800402C4(v3, v2);
}
