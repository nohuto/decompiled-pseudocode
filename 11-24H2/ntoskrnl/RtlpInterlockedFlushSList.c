/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1406B48B0
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiFreePageFileHashPfns @ 0x140353E18 (MiFreePageFileHashPfns.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextCompact @ 0x14035CB7C (RtlpHpVsContextCompact.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140378128 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14044E5D0 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1404608A4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     RtlpDynamicLookasideFlush @ 0x1404644CC (RtlpDynamicLookasideFlush.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14046FE3C (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreDrainWriteSupports @ 0x140470054 (MiStoreDrainWriteSupports.c)
 *     ExpFlushGeneralLookaside @ 0x140472090 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140472190 (ExFlushLookasideListEx.c)
 *     PfFbBufferListFlushStandby @ 0x140473B84 (PfFbBufferListFlushStandby.c)
 *     EtwpCancelPendingApcs @ 0x140487408 (EtwpCancelPendingApcs.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14048E88C (ExpWorkerFactoryDeferredThreadCreation.c)
 *     EtwpFreeApcPool @ 0x140495034 (EtwpFreeApcPool.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404C83F8 (MiDeleteDeferredCloneDescriptors.c)
 *     KiFreeTemporaryStacks @ 0x1405B9AA0 (KiFreeTemporaryStacks.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406505DC (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x1406538D0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406812B0 (MiRemoveNonIdealCachedStacks.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     ObpInitStackAndObjectTables @ 0x140743348 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x140743BC4 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14079CC18 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B2900 (EtwpCovSampCaptureWorkerThread.c)
 *     CmUnRegisterCallback @ 0x1407D1A20 (CmUnRegisterCallback.c)
 *     PfpFlushEventBuffers @ 0x140971A8C (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x140A3A000 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB0FE4 (EtwpCovSampCaptureFreeLookasides.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B9C510 (ViPoolDelayFreeTrimThreadRoutine.c)
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
