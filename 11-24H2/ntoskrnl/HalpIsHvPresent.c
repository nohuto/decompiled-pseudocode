/*
 * XREFs of HalpIsHvPresent @ 0x1404A5710
 * Callers:
 *     HalpArtAvailable @ 0x1404A5570 (HalpArtAvailable.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x14053ACB0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053DAB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x140559C54 (HalpNmiReboot.c)
 *     HalSocRequestConfigurationData @ 0x1405614AC (HalSocRequestConfigurationData.c)
 *     HalpLbrInitialize @ 0x140B50B28 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140E0A782;
  if ( byte_140E0A782 == -1 )
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
    byte_140E0A782 = v0;
  }
  return v0;
}
