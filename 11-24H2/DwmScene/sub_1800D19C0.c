/*
 * XREFs of sub_1800D19C0 @ 0x1800D19C0
 * Callers:
 *     sub_1800D1894 @ 0x1800D1894 (sub_1800D1894.c)
 *     sub_1800D1BC0 @ 0x1800D1BC0 (sub_1800D1BC0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_1800D19C0(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B1F8(104LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
