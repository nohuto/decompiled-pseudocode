/*
 * XREFs of LdrpGenRandom @ 0x18002C3B0
 * Callers:
 *     InitSecurityCookie @ 0x18002C338 (InitSecurityCookie.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002C400 (RtlIsProcessorFeaturePresent.c)
 */

__int64 LdrpGenRandom()
{
  unsigned int i; // ecx

  if ( RtlIsProcessorFeaturePresent(0x1Cu) )
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
