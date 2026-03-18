/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140299100
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiWakeZeroingThreads @ 0x140437060 (MiWakeZeroingThreads.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
 *     IoNotifyQuotaState @ 0x140496E90 (IoNotifyQuotaState.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140539D10 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14053B83C (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x1405BF810 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1405D9850 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 *     PspGetNextSyscallProviderProcess @ 0x140761978 (PspGetNextSyscallProviderProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140767938 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140767FC0 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x1408BDE38 (PspGetPreviousProcessThread.c)
 *     PspGetNextJobProcess @ 0x1408DC088 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x1408DC790 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x1408DCB30 (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x1408DD220 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     ExGetNextProcess @ 0x1408DF930 (ExGetNextProcess.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     PopEtGetNextEnergyTracker @ 0x1409626E4 (PopEtGetNextEnergyTracker.c)
 *     ExpGetNextProcessThread @ 0x140978A00 (ExpGetNextProcessThread.c)
 *     PspSelectSessionAttachProcess @ 0x140A14DD4 (PspSelectSessionAttachProcess.c)
 *     PsGetPreviousProcess @ 0x140A3247C (PsGetPreviousProcess.c)
 *     PsGetNextProcessEx @ 0x140A35680 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140A5DDB0 (ExpGetNextCallback.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
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
