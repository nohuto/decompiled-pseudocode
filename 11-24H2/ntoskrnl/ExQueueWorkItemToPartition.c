/*
 * XREFs of ExQueueWorkItemToPartition @ 0x140279D60
 * Callers:
 *     MiWakeLargePageRebuild @ 0x140261C8C (MiWakeLargePageRebuild.c)
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 *     MiLaunchZeroWorkers @ 0x140271D90 (MiLaunchZeroWorkers.c)
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14027973C (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x14027AE98 (CcPostWorkQueueRegular.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402E7EB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiCheckZeroFreeRebalance @ 0x14033F29C (MiCheckZeroFreeRebalance.c)
 *     MiScanPagefiles @ 0x140353D80 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14035468C (MiCheckTrimUnusedPageFileRegions.c)
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140441A20 (SmKmStoreDeleteWhenEmpty.c)
 *     SmQueueExWorkItem @ 0x1404A44A4 (SmQueueExWorkItem.c)
 *     CcPostWorkQueueSpecial @ 0x1404B0E58 (CcPostWorkQueueSpecial.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B2A84 (CcPostPVCMForDeleteToPartition.c)
 *     CcIncrementWriteBehindPriority @ 0x1404D4A80 (CcIncrementWriteBehindPriority.c)
 *     CcReEngageWorkerThreads @ 0x1404D4C20 (CcReEngageWorkerThreads.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404D8AC0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 *     CcPVCMDelayedDeleteTimerDpc @ 0x140579960 (CcPVCMDelayedDeleteTimerDpc.c)
 *     MmSetAccessLogging @ 0x1406849B8 (MmSetAccessLogging.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     MiContractWsSwapPageFile @ 0x140A03778 (MiContractWsSwapPageFile.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14027AA00 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14027AA20 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
