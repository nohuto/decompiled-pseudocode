/*
 * XREFs of sub_18003172C @ 0x18003172C
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 * Callees:
 *     sub_18002C610 @ 0x18002C610 (sub_18002C610.c)
 *     sub_18002E7A4 @ 0x18002E7A4 (sub_18002E7A4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003172C(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = 0;
  v7 = 1;
  sub_18002E7A4(a2, a1, &v7, &v9);
  v8 = 1;
  sub_18002C610(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
