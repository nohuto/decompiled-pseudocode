/*
 * XREFs of sub_18002EDD0 @ 0x18002EDD0
 * Callers:
 *     sub_18002F140 @ 0x18002F140 (sub_18002F140.c)
 *     sub_18002F1B4 @ 0x18002F1B4 (sub_18002F1B4.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 *__fastcall sub_18002EDD0(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B098(96LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
