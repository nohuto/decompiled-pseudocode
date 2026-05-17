/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x180002C10
 * Callers:
 *     _cpu_check_features @ 0x1800023C0 (_cpu_check_features.c)
 *     RtlHpGlobalsInitialize @ 0x1800028B4 (RtlHpGlobalsInitialize.c)
 *     LdrpGenRandom @ 0x180002BC0 (LdrpGenRandom.c)
 *     __cpu_features_init @ 0x18012CF8C (__cpu_features_init.c)
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
        return _bittest64((const signed __int64 *)qword_1801D5E28, a1 - 64);
      return *(_BYTE *)(a1 + 0x7FFE0274LL);
    }
    return 0;
  }
  if ( a1 >= 0x40 )
    return 0;
  return *(_BYTE *)(a1 + 0x7FFE0274LL);
}
