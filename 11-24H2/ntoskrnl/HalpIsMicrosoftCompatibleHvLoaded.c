/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC
 * Callers:
 *     HalpArtAvailable @ 0x1404A5570 (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1404F7940 (HalpCmcStartPolling.c)
 *     HalpIsPartitionCpuManager @ 0x1404F79EC (HalpIsPartitionCpuManager.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x1405423F4 (HalpInterruptGetX2ApicPolicy.c)
 *     HalpHvIsFrequencyAvailable @ 0x14054AB84 (HalpHvIsFrequencyAvailable.c)
 *     HalpProcGetFeatureBits @ 0x14054D160 (HalpProcGetFeatureBits.c)
 *     HalpWdatDiscover @ 0x14055F328 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x140560630 (HalpHvWatchdogDiscover.c)
 *     HalSocRequestConfigurationData @ 0x1405614AC (HalSocRequestConfigurationData.c)
 *     HalpTimerIsHypervisorReferenceAvailable @ 0x1405616AC (HalpTimerIsHypervisorReferenceAvailable.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 *     HaliCompleteAcpiAPSleep @ 0x140569FA0 (HaliCompleteAcpiAPSleep.c)
 *     HalpInterruptGetIrtInfo @ 0x1406FDDA4 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140B4EAB8 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404A5710 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
