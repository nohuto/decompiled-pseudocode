/*
 * XREFs of PopDiscardRange @ 0x140B6B9E8
 * Callers:
 *     PopSetRange @ 0x14046AEE0 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 3, a2, a3);
}
