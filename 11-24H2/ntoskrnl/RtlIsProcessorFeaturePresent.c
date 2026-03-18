/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1404AA0E0
 * Callers:
 *     ExIsProcessorFeaturePresent @ 0x1404AA0C0 (ExIsProcessorFeaturePresent.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405781C8 (HalpIvtProcessDrhdEntry.c)
 *     RtlHpGlobalsInitialize @ 0x1405F265C (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x14061F670 (DifExIsProcessorFeaturePresentWrapper.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0xC0 )
    return 0;
  if ( a1 < 0x40 )
    return *(_BYTE *)(a1 - 0x87FFFFFFD8CLL);
  return _bittest64((const signed __int64 *)qword_140FC6538, a1 - 64);
}
