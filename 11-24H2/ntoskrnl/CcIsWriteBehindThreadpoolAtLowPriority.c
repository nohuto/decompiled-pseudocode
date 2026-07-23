/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x140279B04
 * Callers:
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcPostWorkQueueRegular @ 0x14027AE98 (CcPostWorkQueueRegular.c)
 *     CcShouldWorkOnThisQueue @ 0x14027B03C (CcShouldWorkOnThisQueue.c)
 *     CcComputeNextScanTime @ 0x140492400 (CcComputeNextScanTime.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404D4698 (CcApplyLowIoPriorityToThread.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return !CcEnablePerVolumeLazyWriter
      && (unsigned int)CcNumberNumaNodes <= 1
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
