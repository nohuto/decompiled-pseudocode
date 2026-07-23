/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1404A43B0
 * Callers:
 *     ExIsProcessorFeaturePresent @ 0x1404A4390 (ExIsProcessorFeaturePresent.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 *     RtlHpGlobalsInitialize @ 0x1405EFC9C (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x14061DC30 (DifExIsProcessorFeaturePresentWrapper.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0xC0 )
    return 0;
  if ( ProcessorFeature < 0x40 )
    return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
  return _bittest64((const signed __int64 *)qword_140FC75A0, ProcessorFeature - 64);
}
