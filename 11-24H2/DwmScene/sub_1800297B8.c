/*
 * XREFs of sub_1800297B8 @ 0x1800297B8
 * Callers:
 *     sub_180029B30 @ 0x180029B30 (sub_180029B30.c)
 * Callees:
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_180028CC4 @ 0x180028CC4 (sub_180028CC4.c)
 *     sub_180029C90 @ 0x180029C90 (sub_180029C90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800297B8(__int64 *a1, _QWORD *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v5[0] = a1;
  *a1 = sub_180028C50();
  sub_180028CC4(a1, a2);
  v5[1] = 0LL;
  sub_180029C90(v5);
  return a1;
}
