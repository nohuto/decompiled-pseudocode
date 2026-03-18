/*
 * XREFs of SpcIsFbClearSupported @ 0x14069569C
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x140AC0980 (KeQuerySpeculationControlInformation.c)
 *     SpcDetectKvaLeakage @ 0x140B53788 (SpcDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 SpcIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
