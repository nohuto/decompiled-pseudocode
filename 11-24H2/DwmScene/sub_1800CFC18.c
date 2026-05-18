/*
 * XREFs of sub_1800CFC18 @ 0x1800CFC18
 * Callers:
 *     sub_1800CDE50 @ 0x1800CDE50 (sub_1800CDE50.c)
 *     sub_1800D1604 @ 0x1800D1604 (sub_1800D1604.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

_QWORD *__fastcall sub_1800CFC18(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_18001B1F8(176LL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
