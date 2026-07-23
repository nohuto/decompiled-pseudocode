/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1404EBE40
 * Callers:
 *     ExIsProcessorFeaturePresent @ 0x1404ECC40 (ExIsProcessorFeaturePresent.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     RtlHpGlobalsInitialize @ 0x1405E630C (RtlHpGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( AdditionalProcessorFeaturesEnabled )
  {
    if ( ProcessorFeature < 0xC0 )
    {
      if ( ProcessorFeature >= 0x40 )
        return _bittest64((const signed __int64 *)qword_140FC6560, ProcessorFeature - 64);
      return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
    }
    return 0;
  }
  if ( ProcessorFeature >= 0x40 )
    return 0;
  return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
}
