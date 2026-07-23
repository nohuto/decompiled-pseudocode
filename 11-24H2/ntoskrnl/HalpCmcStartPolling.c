/*
 * XREFs of HalpCmcStartPolling @ 0x1404F5220
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x140478020 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140B4DB28 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1404F52CC (HalpIsPartitionCpuManager.c)
 */

void HalpCmcStartPolling()
{
  KIRQL v0; // bl

  if ( !HalpIsMicrosoftCompatibleHvLoaded() || (unsigned __int8)HalpIsPartitionCpuManager() )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
    if ( HalpCmcPollingInitialized )
    {
      if ( (HalpMcaPollForCmc
         || HalpCmciRevertToPolledMode
         || HalpCmcPollingStartDeferred != (_BYTE)HalpCmciRevertToPolledMode)
        && !HalpCmcPollingStarted )
      {
        KiSetTimerEx(
          (__int64)&qword_140E10118,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140E10158);
        HalpCmcPollingStarted = 1;
      }
    }
    else
    {
      HalpCmcPollingStartDeferred = 1;
    }
    KeReleaseSpinLock(&HalpCmcFallbackLock, v0);
  }
}
