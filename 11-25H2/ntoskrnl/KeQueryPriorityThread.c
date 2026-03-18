/*
 * XREFs of KeQueryPriorityThread @ 0x140375500
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14032B938 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x140375408 (LZNT1DecompressChunkNewThread.c)
 *     PoNotifyMediaBuffering @ 0x140375ED0 (PoNotifyMediaBuffering.c)
 *     FsRtlpWaitForIoAtEof @ 0x140376284 (FsRtlpWaitForIoAtEof.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1403767C8 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiSetIdealProcessorThread @ 0x140377430 (MiSetIdealProcessorThread.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiLaunchZeroWorkers @ 0x14041898C (MiLaunchZeroWorkers.c)
 *     PfSnPrefetchScenario @ 0x1408285B0 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x1409C8054 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409C8410 (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x140A4A81C (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B82010 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B5390 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)Thread);
  return Thread->Priority;
}
