/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x1403AC55C
 * Callers:
 *     CcComputeNextScanTime @ 0x1403AA504 (CcComputeNextScanTime.c)
 *     CcShouldWorkOnThisQueue @ 0x1403AB5AC (CcShouldWorkOnThisQueue.c)
 *     CcPostWorkQueueRegular @ 0x1403ABCE4 (CcPostWorkQueueRegular.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A10F8 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DB588 (CcApplyLowIoPriorityToThread.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return !CcEnablePerVolumeLazyWriter
      && (unsigned int)CcNumberNumaNodes <= 1
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
