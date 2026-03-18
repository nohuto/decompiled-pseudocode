/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402A7F70
 * Callers:
 *     CcPostWorkQueueRegular @ 0x1402A74B4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     MiScanPagefiles @ 0x1402D2B08 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402D3414 (MiCheckTrimUnusedPageFileRegions.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14037AE38 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiCheckZeroFreeRebalance @ 0x1403D3018 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x1403D3D0C (MiWakeLargePageRebuild.c)
 *     MmInSwapWorkingSet @ 0x140404E48 (MmInSwapWorkingSet.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 *     MiLaunchZeroWorkers @ 0x140416850 (MiLaunchZeroWorkers.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404492D0 (SmKmStoreDeleteWhenEmpty.c)
 *     SmQueueExWorkItem @ 0x1404AA2A8 (SmQueueExWorkItem.c)
 *     CcPostWorkQueueSpecial @ 0x1404B6678 (CcPostWorkQueueSpecial.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B8134 (CcPostPVCMForDeleteToPartition.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB060 (CcIncrementWriteBehindPriority.c)
 *     CcReEngageWorkerThreads @ 0x1404DB200 (CcReEngageWorkerThreads.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF0A0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     CcPVCMDelayedDeleteTimerDpc @ 0x14057C4D0 (CcPVCMDelayedDeleteTimerDpc.c)
 *     MmSetAccessLogging @ 0x140683808 (MmSetAccessLogging.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     MiContractWsSwapPageFile @ 0x140A07248 (MiContractWsSwapPageFile.c)
 *     SmStoreCompressionStop @ 0x140A4CBCC (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1402A8C10 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402A8C30 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2);
  v8 = ExpTypeToPriority((unsigned int)v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
