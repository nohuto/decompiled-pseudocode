/*
 * XREFs of sub_180082D90 @ 0x180082D90
 * Callers:
 *     sub_180082E54 @ 0x180082E54 (sub_180082E54.c)
 * Callees:
 *     sub_180015C98 @ 0x180015C98 (sub_180015C98.c)
 *     sub_180046290 @ 0x180046290 (sub_180046290.c)
 *     sub_1800462A4 @ 0x1800462A4 (sub_1800462A4.c)
 *     sub_18004667C @ 0x18004667C (sub_18004667C.c)
 *     sub_1800467B4 @ 0x1800467B4 (sub_1800467B4.c)
 *     sub_180046A14 @ 0x180046A14 (sub_180046A14.c)
 *     sub_180046AA8 @ 0x180046AA8 (sub_180046AA8.c)
 *     sub_180046CF8 @ 0x180046CF8 (sub_180046CF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180082D90(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 *v9; // rax
  __int64 v10; // r9

  sub_180015C98(a2, a1);
  sub_180046290(*a1, (__int64)(a5[1] - *a5) >> 1);
  sub_1800462A4(*a1, *v9);
  sub_180046A14(*a1, 3);
  sub_180046CF8(*a1, -1431655765 * ((a4[1] - *a4) >> 2));
  sub_1800467B4(*a1, *a4);
  sub_18004667C(*a1, *a6, 0, v10);
  sub_180046AA8(*a1, *a7);
  return a1;
}
