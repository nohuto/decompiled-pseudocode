/*
 * XREFs of HalpDmaInitializeCvmSupport @ 0x140C12AE4
 * Callers:
 *     HalpDmaInit @ 0x140C12654 (HalpDmaInit.c)
 * Callees:
 *     HviGetSharedGpaBoundary @ 0x1406625B4 (HviGetSharedGpaBoundary.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpDmaCvmQueryRegistryKeys @ 0x140C124F0 (HalpDmaCvmQueryRegistryKeys.c)
 */

__int64 HalpDmaInitializeCvmSupport()
{
  HalpDmaCvmQueryRegistryKeys();
  if ( HviIsHypervisorMicrosoftCompatible() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x40000000000000LL) != 0 )
    {
      _RAX = 1073741836LL;
      __asm { cpuid }
      if ( (unsigned int)(_RBX & 0xF) - 2 <= 1 )
      {
        HalpDmaCvmConfiguration = 1;
        qword_140FC0D48 = HviGetSharedGpaBoundary(_RCX, _RDX);
      }
    }
  }
  if ( !HalpDmaCvmConfiguration && byte_140FC0D41 )
  {
    qword_140FC0D48 = 0LL;
    HalpDmaCvmConfiguration = 1;
  }
  return 0LL;
}
