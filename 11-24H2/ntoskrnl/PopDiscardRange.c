/*
 * XREFs of PopDiscardRange @ 0x140B6A2D8
 * Callers:
 *     PopSetRange @ 0x140264BB0 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 3, a2, a3);
}
