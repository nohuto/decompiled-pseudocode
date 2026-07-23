/*
 * XREFs of LdrpGenRandom @ 0x180002BC0
 * Callers:
 *     InitSecurityCookie @ 0x180002B48 (InitSecurityCookie.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x180002C10 (RtlIsProcessorFeaturePresent.c)
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
