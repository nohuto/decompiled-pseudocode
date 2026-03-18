/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1404F55C0
 * Callers:
 *     HalpCmcStartPolling @ 0x1404F5514 (HalpCmcStartPolling.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1405478D4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalSocRequestConfigurationData @ 0x14055EBAC (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x1405601C0 (HalpInterruptRegisterController.c)
 *     HalpProcIsSmtDisabled @ 0x140BFE514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
