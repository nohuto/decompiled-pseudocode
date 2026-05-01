/*
 * XREFs of CrmStateMonitorNpuUsageContextCleanup @ 0x18007A028
 * Callers:
 *     CrmGlobalsCleanupWorkers @ 0x180078774 (CrmGlobalsCleanupWorkers.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078BC0 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x180079748 (CrmStateMonitorAttemptNpuContextRefresh.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmpDxUtilsFreeContext @ 0x18007B274 (CrmpDxUtilsFreeContext.c)
 */

void __fastcall CrmStateMonitorNpuUsageContextCleanup(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    HampFreeHeap(v2);
  if ( *(_QWORD *)a1 )
    CrmpDxUtilsFreeContext(*(void **)a1);
}
