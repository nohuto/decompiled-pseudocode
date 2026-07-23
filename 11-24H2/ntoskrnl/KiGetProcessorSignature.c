/*
 * XREFs of KiGetProcessorSignature @ 0x1405C08D8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 * Callees:
 *     RtlGetProcessorSignature @ 0x140B62B5C (RtlGetProcessorSignature.c)
 */

__int64 KiGetProcessorSignature()
{
  return RtlGetProcessorSignature();
}
