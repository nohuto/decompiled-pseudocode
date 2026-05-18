/*
 * XREFs of sub_18002EEF0 @ 0x18002EEF0
 * Callers:
 *     sub_18002F22C @ 0x18002F22C (sub_18002F22C.c)
 *     sub_180034A20 @ 0x180034A20 (sub_180034A20.c)
 *     sub_18004B434 @ 0x18004B434 (sub_18004B434.c)
 *     sub_18005AAA4 @ 0x18005AAA4 (sub_18005AAA4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_18002EEF0(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B1F8(72LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
