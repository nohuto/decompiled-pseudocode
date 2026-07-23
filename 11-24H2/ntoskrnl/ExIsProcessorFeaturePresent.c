/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x1404A4390
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1404A43B0 (RtlIsProcessorFeaturePresent.c)
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  return RtlIsProcessorFeaturePresent(ProcessorFeature);
}
