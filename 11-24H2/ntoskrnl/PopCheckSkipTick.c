/*
 * XREFs of PopCheckSkipTick @ 0x140746F0C
 * Callers:
 *     PopNewProcessorCallback @ 0x140746FE0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 8 * PopApicClusterSize;
}
