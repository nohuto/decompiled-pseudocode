/*
 * XREFs of sub_1800C300C @ 0x1800C300C
 * Callers:
 *     sub_1800C2960 @ 0x1800C2960 (sub_1800C2960.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800261DC @ 0x1800261DC (sub_1800261DC.c)
 */

_QWORD *__fastcall sub_1800C300C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = sub_1800261DC((_QWORD *)(a1 + 120), (__int64)v6, &v7);
  unknown_libname_81(a2, (_QWORD *)(*(_QWORD *)v4 + 40LL));
  return a2;
}
