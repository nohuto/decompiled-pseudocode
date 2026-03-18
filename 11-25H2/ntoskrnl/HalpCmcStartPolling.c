/*
 * XREFs of HalpCmcStartPolling @ 0x1404F5514
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14047BF90 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140B3BAE8 (HalpInitializeCmc.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1404F55C0 (HalpIsPartitionCpuManager.c)
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
          (__int64)&qword_140E0FD18,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140E0FD58);
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
