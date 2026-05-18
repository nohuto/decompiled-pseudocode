/*
 * XREFs of sub_18002C34C @ 0x18002C34C
 * Callers:
 *     sub_18002EA28 @ 0x18002EA28 (sub_18002EA28.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800CFC50 @ 0x1800CFC50 (sub_1800CFC50.c)
 */

__int64 __fastcall sub_18002C34C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  unsigned int *v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_1800CFC50(v5, *v4, v3);
}
