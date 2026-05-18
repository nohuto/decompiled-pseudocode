/*
 * XREFs of sub_1800D1860 @ 0x1800D1860
 * Callers:
 *     sub_1800D1734 @ 0x1800D1734 (sub_1800D1734.c)
 *     sub_1800D1A60 @ 0x1800D1A60 (sub_1800D1A60.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 *__fastcall sub_1800D1860(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B098(104LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
