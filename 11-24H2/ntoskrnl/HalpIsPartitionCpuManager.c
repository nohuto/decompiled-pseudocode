/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1404F79EC
 * Callers:
 *     HalpCmcStartPolling @ 0x1404F7940 (HalpCmcStartPolling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalSocRequestConfigurationData @ 0x1405614AC (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x140562AC0 (HalpInterruptRegisterController.c)
 *     HalpProcIsSmtDisabled @ 0x140C0F514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char HalpIsPartitionCpuManager()
{
  char v0; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v0;
}
