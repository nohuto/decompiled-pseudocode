/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14031DCB0
 * Callers:
 *     PsGetNextPartitionUnsafe @ 0x1402194E8 (PsGetNextPartitionUnsafe.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 *     IoNotifyQuotaState @ 0x1404913C0 (IoNotifyQuotaState.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140539DA0 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14053B96C (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x1405C0EC0 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405E2FC0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     PspGetNextSyscallProviderProcess @ 0x140771558 (PspGetNextSyscallProviderProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407775D8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140777C60 (PspQueryProcessInterferenceCountCallback.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x14085D390 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x14085D730 (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x14085DE20 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     ExGetNextProcess @ 0x140860570 (ExGetNextProcess.c)
 *     PsGetPreviousProcess @ 0x1408618BC (PsGetPreviousProcess.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x1408EF16C (PspGetPreviousProcessThread.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     ExpGetNextProcessThread @ 0x140940F10 (ExpGetNextProcessThread.c)
 *     PopEtGetNextEnergyTracker @ 0x14099CED4 (PopEtGetNextEnergyTracker.c)
 *     PspSelectSessionAttachProcess @ 0x140A12D74 (PspSelectSessionAttachProcess.c)
 *     PsGetNextProcessEx @ 0x140A30430 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140A585B0 (ExpGetNextCallback.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
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
