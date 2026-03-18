/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x1404ECC40
 * Callers:
 *     DifExIsProcessorFeaturePresentWrapper @ 0x1406136B0 (DifExIsProcessorFeaturePresentWrapper.c)
 *     PiIsDriverBlocked @ 0x1409ADF08 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1404EBE40 (RtlIsProcessorFeaturePresent.c)
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  return RtlIsProcessorFeaturePresent(ProcessorFeature);
}
