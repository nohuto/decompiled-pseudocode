/*
 * XREFs of sub_1800C316C @ 0x1800C316C
 * Callers:
 *     sub_1800C2AC0 @ 0x1800C2AC0 (sub_1800C2AC0.c)
 *     sub_1800C4150 @ 0x1800C4150 (sub_1800C4150.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 */

_QWORD *__fastcall sub_1800C316C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = sub_18002633C((_QWORD *)(a1 + 120), (__int64)v6, &v7);
  unknown_libname_81(a2, (_QWORD *)(*(_QWORD *)v4 + 40LL));
  return a2;
}
