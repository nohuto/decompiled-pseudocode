/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402A7D0C
 * Callers:
 *     CcPostWorkQueueRegular @ 0x1402A74B4 (CcPostWorkQueueRegular.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcShouldWorkOnThisQueue @ 0x1402A8D98 (CcShouldWorkOnThisQueue.c)
 *     CcComputeNextScanTime @ 0x1404978F0 (CcComputeNextScanTime.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A08EC (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DAC78 (CcApplyLowIoPriorityToThread.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return !CcEnablePerVolumeLazyWriter
      && (unsigned int)CcNumberNumaNodes <= 1
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
