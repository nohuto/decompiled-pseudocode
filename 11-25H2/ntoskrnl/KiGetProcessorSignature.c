/*
 * XREFs of KiGetProcessorSignature @ 0x1405BF228
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 * Callees:
 *     RtlGetProcessorSignature @ 0x140B50960 (RtlGetProcessorSignature.c)
 */

__int64 KiGetProcessorSignature()
{
  return RtlGetProcessorSignature();
}
