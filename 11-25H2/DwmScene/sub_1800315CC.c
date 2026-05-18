/*
 * XREFs of sub_1800315CC @ 0x1800315CC
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 * Callees:
 *     sub_18002C4B0 @ 0x18002C4B0 (sub_18002C4B0.c)
 *     sub_18002E644 @ 0x18002E644 (sub_18002E644.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800315CC(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = 0;
  v7 = 1;
  sub_18002E644(a2, a1, &v7, &v9);
  v8 = 1;
  sub_18002C4B0(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
