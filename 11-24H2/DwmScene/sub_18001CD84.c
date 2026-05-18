/*
 * XREFs of sub_18001CD84 @ 0x18001CD84
 * Callers:
 *     sub_18001D780 @ 0x18001D780 (sub_18001D780.c)
 *     sub_18004D354 @ 0x18004D354 (sub_18004D354.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C6BF4 @ 0x1800C6BF4 (sub_1800C6BF4.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 __fastcall sub_18001CD84(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  v2 = sub_1800138F8(a2);
  return sub_18001CDAC(v3, v2);
}
