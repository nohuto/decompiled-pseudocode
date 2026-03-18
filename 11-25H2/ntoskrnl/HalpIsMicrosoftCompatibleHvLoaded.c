/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HalpArtAvailable @ 0x14049BDA0 (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1404F5514 (HalpCmcStartPolling.c)
 *     HalpIsPartitionCpuManager @ 0x1404F55C0 (HalpIsPartitionCpuManager.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x14053FBC4 (HalpInterruptGetX2ApicPolicy.c)
 *     HalpHvIsFrequencyAvailable @ 0x140548294 (HalpHvIsFrequencyAvailable.c)
 *     HalpProcGetFeatureBits @ 0x14054A870 (HalpProcGetFeatureBits.c)
 *     HalpWdatDiscover @ 0x14055CA28 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14055DD30 (HalpHvWatchdogDiscover.c)
 *     HalSocRequestConfigurationData @ 0x14055EBAC (HalSocRequestConfigurationData.c)
 *     HalpTimerIsHypervisorReferenceAvailable @ 0x14055EDAC (HalpTimerIsHypervisorReferenceAvailable.c)
 *     HalpInterruptGetIrtInfo @ 0x1406F1FB4 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140B3EAB8 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x14049BF40 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
