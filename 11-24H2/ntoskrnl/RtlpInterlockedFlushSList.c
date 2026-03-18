/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1406B3910
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextCompact @ 0x1402B3A2C (RtlpHpVsContextCompact.c)
 *     RtlpDynamicLookasideFlush @ 0x1402B4E68 (RtlpDynamicLookasideFlush.c)
 *     MiStoreDrainWriteSupports @ 0x1402CF620 (MiStoreDrainWriteSupports.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1402D001C (MiStoreCheckCompleteWriteBatch.c)
 *     MiFreePageFileHashPfns @ 0x1402D2BA0 (MiFreePageFileHashPfns.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E408 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1404598A0 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140467EF4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ExpFlushGeneralLookaside @ 0x140475FF0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1404760F0 (ExFlushLookasideListEx.c)
 *     PfFbBufferListFlushStandby @ 0x1404775E4 (PfFbBufferListFlushStandby.c)
 *     EtwpCancelPendingApcs @ 0x14048C6E8 (EtwpCancelPendingApcs.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140493E00 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     EtwpFreeApcPool @ 0x14049A610 (EtwpFreeApcPool.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404CF22C (MiDeleteDeferredCloneDescriptors.c)
 *     KiFreeTemporaryStacks @ 0x1405BC470 (KiFreeTemporaryStacks.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x140651EDC (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x1406551D0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406800B0 (MiRemoveNonIdealCachedStacks.c)
 *     MiInsertPteTracker @ 0x1406913D4 (MiInsertPteTracker.c)
 *     ObpInitStackAndObjectTables @ 0x140745058 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1407458D4 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14079CB08 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B24B0 (EtwpCovSampCaptureWorkerThread.c)
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     PfpFlushEventBuffers @ 0x14094F57C (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14094F8D0 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x140A44770 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB6D0C (EtwpCovSampCaptureFreeLookasides.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140B9A510 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
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
