/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1404EBE40
 * Callers:
 *     ExIsProcessorFeaturePresent @ 0x1404ECC40 (ExIsProcessorFeaturePresent.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     RtlHpGlobalsInitialize @ 0x1405E630C (RtlHpGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( AdditionalProcessorFeaturesEnabled )
  {
    if ( a1 < 0xC0 )
    {
      if ( a1 >= 0x40 )
        return _bittest64((const signed __int64 *)qword_140FC6560, a1 - 64);
      return *(_BYTE *)(a1 - 0x87FFFFFFD8CLL);
    }
    return 0;
  }
  if ( a1 >= 0x40 )
    return 0;
  return *(_BYTE *)(a1 - 0x87FFFFFFD8CLL);
}
