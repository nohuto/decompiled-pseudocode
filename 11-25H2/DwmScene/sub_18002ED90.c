/*
 * XREFs of sub_18002ED90 @ 0x18002ED90
 * Callers:
 *     sub_18002F0CC @ 0x18002F0CC (sub_18002F0CC.c)
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 *     sub_18005A944 @ 0x18005A944 (sub_18005A944.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 *__fastcall sub_18002ED90(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B098(72LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
