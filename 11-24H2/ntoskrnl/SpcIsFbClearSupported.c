/*
 * XREFs of SpcIsFbClearSupported @ 0x1406A1B44
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x140AC167C (KeQuerySpeculationControlInformation.c)
 *     SpcDetectKvaLeakage @ 0x140B659A8 (SpcDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 SpcIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
