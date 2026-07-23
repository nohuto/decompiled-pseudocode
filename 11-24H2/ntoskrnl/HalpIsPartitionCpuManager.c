/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1404F52CC
 * Callers:
 *     HalpCmcStartPolling @ 0x1404F5220 (HalpCmcStartPolling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalSocRequestConfigurationData @ 0x14055F0DC (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x1405606F0 (HalpInterruptRegisterController.c)
 *     HalpProcIsSmtDisabled @ 0x140C11514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
