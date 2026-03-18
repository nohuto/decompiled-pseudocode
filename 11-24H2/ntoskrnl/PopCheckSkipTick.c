/*
 * XREFs of PopCheckSkipTick @ 0x140748C1C
 * Callers:
 *     PopNewProcessorCallback @ 0x140748CF0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 8 * PopApicClusterSize;
}
