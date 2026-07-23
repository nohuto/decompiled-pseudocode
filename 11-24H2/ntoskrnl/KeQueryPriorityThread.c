/*
 * XREFs of KeQueryPriorityThread @ 0x1402E24A0
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiLaunchZeroWorkers @ 0x140271D90 (MiLaunchZeroWorkers.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 *     PoNotifyMediaBuffering @ 0x1402E1780 (PoNotifyMediaBuffering.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402E21C4 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402E24E4 (LZNT1DecompressChunkNewThread.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1402F4534 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     MiSetIdealProcessorThread @ 0x140370F20 (MiSetIdealProcessorThread.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14064F0A4 (EtwpTraceThreadRundownWithStack.c)
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409384F0 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x14094A830 (PfSnPrefetchScenario.c)
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B93FF0 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404AF630 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)Thread);
  return Thread->Priority;
}
