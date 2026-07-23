/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1406A8640
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     MiFreePageFileHashPfns @ 0x1403793FC (MiFreePageFileHashPfns.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396608 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403C056C (MiStoreCheckCompleteWriteBatch.c)
 *     RtlpHpVsContextCompact @ 0x1403C7B4C (RtlpHpVsContextCompact.c)
 *     MiDrainZeroLookasides @ 0x140448904 (MiDrainZeroLookasides.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140458C20 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140469924 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     RtlpDynamicLookasideFlush @ 0x140470094 (RtlpDynamicLookasideFlush.c)
 *     ExpFlushGeneralLookaside @ 0x140476110 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140476210 (ExFlushLookasideListEx.c)
 *     PfFbBufferListFlushStandby @ 0x140477984 (PfFbBufferListFlushStandby.c)
 *     MiStoreDrainWriteSupports @ 0x140489210 (MiStoreDrainWriteSupports.c)
 *     EtwpCancelPendingApcs @ 0x14048CB68 (EtwpCancelPendingApcs.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140494E70 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     EtwpFreeApcPool @ 0x14049A350 (EtwpFreeApcPool.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404CF3C8 (MiDeleteDeferredCloneDescriptors.c)
 *     KiFreeTemporaryStacks @ 0x1405B85D0 (KiFreeTemporaryStacks.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x140645F2C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x1406492D0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140674890 (MiRemoveNonIdealCachedStacks.c)
 *     MiInsertPteTracker @ 0x140685F74 (MiInsertPteTracker.c)
 *     ObpInitStackAndObjectTables @ 0x140739038 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1407398B4 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14078D748 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407A30E0 (EtwpCovSampCaptureWorkerThread.c)
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     PfpFlushEventBuffers @ 0x14092352C (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140923880 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x140A3FE44 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB1D00 (EtwpCovSampCaptureFreeLookasides.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B8A530 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
