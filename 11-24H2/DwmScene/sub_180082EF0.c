/*
 * XREFs of sub_180082EF0 @ 0x180082EF0
 * Callers:
 *     sub_180082FB4 @ 0x180082FB4 (sub_180082FB4.c)
 * Callees:
 *     sub_180015D98 @ 0x180015D98 (sub_180015D98.c)
 *     sub_1800463F0 @ 0x1800463F0 (sub_1800463F0.c)
 *     sub_180046404 @ 0x180046404 (sub_180046404.c)
 *     sub_1800467DC @ 0x1800467DC (sub_1800467DC.c)
 *     sub_180046914 @ 0x180046914 (sub_180046914.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180046E58 @ 0x180046E58 (sub_180046E58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180082EF0(
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

  sub_180015D98(a2, a1);
  sub_1800463F0(*a1, (__int64)(a5[1] - *a5) >> 1);
  sub_180046404(*a1, *v9);
  sub_180046B74(*a1, 3);
  sub_180046E58(*a1, -1431655765 * ((a4[1] - *a4) >> 2));
  sub_180046914(*a1, *a4);
  sub_1800467DC(*a1, *a6, 0, v10);
  sub_180046C08(*a1, *a7);
  return a1;
}
