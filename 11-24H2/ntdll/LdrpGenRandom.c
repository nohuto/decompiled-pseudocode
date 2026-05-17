/*
 * XREFs of LdrpGenRandom @ 0x180097560
 * Callers:
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800974E8 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1800975B0 (RtlIsProcessorFeaturePresent.c)
 */

__int64 LdrpGenRandom()
{
  unsigned int i; // ecx

  if ( (unsigned __int8)RtlIsProcessorFeaturePresent(28LL) )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  r8 }
      if ( _CF )
        return _R8;
    }
  }
  return 0LL;
}
