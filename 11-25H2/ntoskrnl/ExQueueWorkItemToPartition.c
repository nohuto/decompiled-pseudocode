/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1403AC7C0
 * Callers:
 *     MiScanPagefiles @ 0x140379364 (MiScanPagefiles.c)
 *     MiAsyncSlabReplenish @ 0x140390EF4 (MiAsyncSlabReplenish.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueRegular @ 0x1403ABCE4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403AC174 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1403B3478 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiCheckZeroFreeRebalance @ 0x1403BCA78 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x1403BDA30 (MiWakeLargePageRebuild.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403D4BC4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiLaunchZeroWorkers @ 0x14041898C (MiLaunchZeroWorkers.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14044B4F0 (SmKmStoreDeleteWhenEmpty.c)
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 *     SmQueueExWorkItem @ 0x1404A92DC (SmQueueExWorkItem.c)
 *     CcPostWorkQueueSpecial @ 0x1404B6B88 (CcPostWorkQueueSpecial.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B88A4 (CcPostPVCMForDeleteToPartition.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB970 (CcIncrementWriteBehindPriority.c)
 *     CcReEngageWorkerThreads @ 0x1404DBB10 (CcReEngageWorkerThreads.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF9B0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncReadWorker @ 0x1404DFB90 (CcAsyncReadWorker.c)
 *     CcPVCMDelayedDeleteTimerDpc @ 0x1405791C0 (CcPVCMDelayedDeleteTimerDpc.c)
 *     MmSetAccessLogging @ 0x140678008 (MmSetAccessLogging.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
 *     SmStoreCompressionStop @ 0x140A4A624 (SmStoreCompressionStop.c)
 *     MiInSwapStore @ 0x140A4A81C (MiInSwapStore.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1403AD260 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1403AD280 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem((ULONG_PTR)BugCheckParameter2);
  v8 = ExpTypeToPriority((unsigned int)v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
