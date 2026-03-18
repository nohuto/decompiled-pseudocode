/*
 * XREFs of SpcIsFbClearSupported @ 0x1406A0A3C
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x140AC3E38 (KeQuerySpeculationControlInformation.c)
 *     SpcDetectKvaLeakage @ 0x140B638D8 (SpcDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 SpcIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
