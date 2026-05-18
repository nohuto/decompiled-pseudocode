/*
 * XREFs of sub_180029658 @ 0x180029658
 * Callers:
 *     sub_1800299D0 @ 0x1800299D0 (sub_1800299D0.c)
 * Callees:
 *     sub_180028AF0 @ 0x180028AF0 (sub_180028AF0.c)
 *     sub_180028B64 @ 0x180028B64 (sub_180028B64.c)
 *     sub_180029B30 @ 0x180029B30 (sub_180029B30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180029658(__int64 *a1, _QWORD *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v5[0] = a1;
  *a1 = sub_180028AF0();
  sub_180028B64(a1, a2);
  v5[1] = 0LL;
  sub_180029B30(v5);
  return a1;
}
