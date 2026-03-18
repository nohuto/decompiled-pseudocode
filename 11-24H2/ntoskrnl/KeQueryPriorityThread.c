/*
 * XREFs of KeQueryPriorityThread @ 0x140248260
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140247F78 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402482A4 (LZNT1DecompressChunkNewThread.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028F470 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x14040D308 (FsRtlpWaitForIoAtEof.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiLaunchZeroWorkers @ 0x140416850 (MiLaunchZeroWorkers.c)
 *     PoNotifyMediaBuffering @ 0x140476430 (PoNotifyMediaBuffering.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140483444 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     PfSnPrefetchSections @ 0x140954784 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140954B40 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x140962D70 (PfSnPrefetchScenario.c)
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B91FF0 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B4E30 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)Thread);
  return Thread->Priority;
}
