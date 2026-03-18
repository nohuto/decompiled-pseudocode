/*
 * XREFs of HalpIsHvPresent @ 0x14049BF40
 * Callers:
 *     HalpArtAvailable @ 0x14049BDA0 (HalpArtAvailable.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x140538500 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B280 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     HalSocRequestConfigurationData @ 0x14055EBAC (HalSocRequestConfigurationData.c)
 *     HalpLbrInitialize @ 0x140B40B28 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140E0A642;
  if ( byte_140E0A642 == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX != 1986945624;
    }
    byte_140E0A642 = v0;
  }
  return v0;
}
