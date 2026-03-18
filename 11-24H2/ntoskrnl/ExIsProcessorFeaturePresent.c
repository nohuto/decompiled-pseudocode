/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x1404AA0C0
 * Callers:
 *     PiIsDriverBlocked @ 0x1409C6E6C (PiIsDriverBlocked.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1404AA0E0 (RtlIsProcessorFeaturePresent.c)
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  return RtlIsProcessorFeaturePresent(ProcessorFeature);
}
