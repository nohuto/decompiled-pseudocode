/*
 * XREFs of HalpIsHvPresent @ 0x1404A04A0
 * Callers:
 *     HalpArtAvailable @ 0x1404A0300 (HalpArtAvailable.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1405384F0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B3B0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x140557884 (HalpNmiReboot.c)
 *     HalSocRequestConfigurationData @ 0x14055F0DC (HalSocRequestConfigurationData.c)
 *     HalpLbrInitialize @ 0x140B52B78 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140E0A802;
  if ( byte_140E0A802 == -1 )
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
    byte_140E0A802 = v0;
  }
  return v0;
}
