/*
 * XREFs of CrmStateMonitorNpuUsageContextCleanup @ 0x18007A088
 * Callers:
 *     CrmGlobalsCleanupWorkers @ 0x1800787D4 (CrmGlobalsCleanupWorkers.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078C20 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x1800797A8 (CrmStateMonitorAttemptNpuContextRefresh.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmpDxUtilsFreeContext @ 0x18007B2D4 (CrmpDxUtilsFreeContext.c)
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
