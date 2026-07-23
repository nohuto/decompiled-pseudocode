/*
 * XREFs of PopDiscardRange @ 0x140B5A7E4
 * Callers:
 *     PopSetRange @ 0x140472430 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 3, a2, a3);
}
