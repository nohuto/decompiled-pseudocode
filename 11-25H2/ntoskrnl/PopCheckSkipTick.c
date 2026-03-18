/*
 * XREFs of PopCheckSkipTick @ 0x14073CC0C
 * Callers:
 *     PopNewProcessorCallback @ 0x14073CCE0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 8 * PopApicClusterSize;
}
