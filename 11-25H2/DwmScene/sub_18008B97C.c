/*
 * XREFs of sub_18008B97C @ 0x18008B97C
 * Callers:
 *     sub_18008BAF0 @ 0x18008BAF0 (sub_18008BAF0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18008B9A4 @ 0x18008B9A4 (sub_18008B9A4.c)
 */

__int64 __fastcall sub_18008B97C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_18008B9A4(v3, v2);
}
