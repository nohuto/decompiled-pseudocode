/*
 * XREFs of HalpCmcStartPolling @ 0x1404F7940
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14047CE90 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140B4BAE8 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1404F79EC (HalpIsPartitionCpuManager.c)
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
          (__int64)&qword_140E0FF98,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140E0FFD8);
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
