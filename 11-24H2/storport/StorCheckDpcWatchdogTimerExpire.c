/*
 * XREFs of StorCheckDpcWatchdogTimerExpire @ 0x14008EE70
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeControllerEnable @ 0x1400ECCD0 (NvmeControllerEnable.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

bool __fastcall StorCheckDpcWatchdogTimerExpire(unsigned __int8 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  v3 = a2;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
    return 0;
  if ( WatchdogInformation.DpcWatchdogLimit
    && 100 * (unsigned __int64)WatchdogInformation.DpcWatchdogCount < v3
                                                                    * (unsigned __int64)WatchdogInformation.DpcWatchdogLimit )
  {
    return 1;
  }
  return WatchdogInformation.DpcTimeLimit
      && 100 * (unsigned __int64)WatchdogInformation.DpcTimeCount < v2
                                                                  * (unsigned __int64)WatchdogInformation.DpcTimeLimit;
}
