/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14033E7D0
 * Callers:
 *     PsGetNextPartitionUnsafe @ 0x140246D98 (PsGetNextPartitionUnsafe.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiWakeZeroingThreads @ 0x1403C7310 (MiWakeZeroingThreads.c)
 *     MiCapturePfnVm @ 0x14045B3C4 (MiCapturePfnVm.c)
 *     IoNotifyQuotaState @ 0x140496A30 (IoNotifyQuotaState.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x14053C514 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14053E06C (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x1405C38F0 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405E5A20 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     PspGetNextSyscallProviderProcess @ 0x140771338 (PspGetNextSyscallProviderProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407773B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140777AA0 (PspQueryProcessInterferenceCountCallback.c)
 *     PspGetNextJobProcess @ 0x1408EB458 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x1408EBB60 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x1408EBF00 (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x1408EC5F0 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     ExGetNextProcess @ 0x1408EED40 (ExGetNextProcess.c)
 *     PsGetPreviousProcess @ 0x1408F00BC (PsGetPreviousProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x140906254 (PopEtGetNextEnergyTracker.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x14094ABFC (PspGetPreviousProcessThread.c)
 *     ExpGetNextProcessThread @ 0x140959450 (ExpGetNextProcessThread.c)
 *     PspSelectSessionAttachProcess @ 0x140A19C04 (PspSelectSessionAttachProcess.c)
 *     PsGetNextProcessEx @ 0x140A3AC50 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140A60060 (ExpGetNextCallback.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v2; // r9
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (volatile signed __int64 *)(a1 - 48);
  _m_prefetchw((const void *)(a1 - 48));
  v3 = *(_QWORD *)(a1 - 48);
  while ( v3 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, v3 + 1, v3);
    if ( v4 == v3 )
    {
      ObpTraceObjectReferenceIfActive(v2, 1LL, a2);
      LOBYTE(v3) = 1;
      return v3;
    }
  }
  return v3;
}
