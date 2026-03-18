/*
 * XREFs of KiGetProcessorSignature @ 0x1405C3308
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 * Callees:
 *     RtlGetProcessorSignature @ 0x140B60A90 (RtlGetProcessorSignature.c)
 */

__int64 KiGetProcessorSignature()
{
  return RtlGetProcessorSignature();
}
