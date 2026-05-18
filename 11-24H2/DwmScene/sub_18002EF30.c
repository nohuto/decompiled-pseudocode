/*
 * XREFs of sub_18002EF30 @ 0x18002EF30
 * Callers:
 *     sub_18002F2A0 @ 0x18002F2A0 (sub_18002F2A0.c)
 *     sub_18002F314 @ 0x18002F314 (sub_18002F314.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_18002EF30(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B1F8(96LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
