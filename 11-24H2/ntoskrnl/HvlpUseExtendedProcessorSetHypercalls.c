/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1403B1518
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x1403AFCAC (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B0C90 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
