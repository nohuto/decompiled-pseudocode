/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C
 * Callers:
 *     HalpArtAvailable @ 0x1404A0300 (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1404F5220 (HalpCmcStartPolling.c)
 *     HalpIsPartitionCpuManager @ 0x1404F52CC (HalpIsPartitionCpuManager.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x14053FD44 (HalpInterruptGetX2ApicPolicy.c)
 *     HalpHvIsFrequencyAvailable @ 0x140548444 (HalpHvIsFrequencyAvailable.c)
 *     HalpProcGetFeatureBits @ 0x14054AA20 (HalpProcGetFeatureBits.c)
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14055E260 (HalpHvWatchdogDiscover.c)
 *     HalSocRequestConfigurationData @ 0x14055F0DC (HalSocRequestConfigurationData.c)
 *     HalpTimerIsHypervisorReferenceAvailable @ 0x14055F2DC (HalpTimerIsHypervisorReferenceAvailable.c)
 *     HaliCompleteAcpiAPSleep @ 0x140567430 (HaliCompleteAcpiAPSleep.c)
 *     HalpInterruptGetIrtInfo @ 0x1406FB9E4 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140B50B08 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404A04A0 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

bool HalpIsMicrosoftCompatibleHvLoaded()
{
  char v0; // bl

  v0 = 0;
  if ( HalpIsHvPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v0;
}
