/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1406B38D0
 * Callers:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiQueuePageAccessLog @ 0x140244A68 (MiQueuePageAccessLog.c)
 *     PfFbLogEntryComplete @ 0x140245330 (PfFbLogEntryComplete.c)
 *     PfLogEvent @ 0x140245398 (PfLogEvent.c)
 *     FsRtlFastUnlockSingleShared @ 0x14024A1C0 (FsRtlFastUnlockSingleShared.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x140259A00 (EtwpTraceLastBranchRecord.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmDeleteKernelStack @ 0x14026A4B0 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x14026B230 (MmCreateKernelStack.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14027A4F0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027C730 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14027C840 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 *     MiInsertInPageBlock @ 0x1402EED00 (MiInsertInPageBlock.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14032A6D0 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpDereferenceStackEntry @ 0x14032A8D0 (EtwpDereferenceStackEntry.c)
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     EtwpApcPoolThunk @ 0x1403ED870 (EtwpApcPoolThunk.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     EtwpTraceStackKey @ 0x1403EE6C0 (EtwpTraceStackKey.c)
 *     MiRepurposeDecayNode @ 0x1403F49D0 (MiRepurposeDecayNode.c)
 *     KeFreeXStateContext @ 0x140406E58 (KeFreeXStateContext.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043B838 (HvlpSlowFlushAddressSpaceTb.c)
 *     EtwpCovSampCaptureApcRelease @ 0x14043E5C4 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14043EC48 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x14043EF30 (EtwpCovSampCaptureBufferRelease.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404408F0 (FsRtlUninitializeBaseMcb.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     EtwpFinalizePendingApc @ 0x140441FD8 (EtwpFinalizePendingApc.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140442480 (LZNT1DecompressChunkWorkItem.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140442670 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     PfFbLogEntryReserve @ 0x140456B24 (PfFbLogEntryReserve.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1404596C0 (EtwpCovSampCaptureQueueBuffer.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140459CBC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045A854 (HalpDmaReleaseBufferMappings.c)
 *     MiStoreFreeWriteSupport @ 0x14045C4C4 (MiStoreFreeWriteSupport.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046E870 (HvlDmaMapDeviceSparsePages.c)
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477AA0 (HvlDmaUnmapDeviceSparsePages.c)
 *     PfpReturnAccessBuffer @ 0x14047E840 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E990 (MiAllocatePfnRepurposeLogDispatch.c)
 *     KeAllocateInterrupt @ 0x140487ED8 (KeAllocateInterrupt.c)
 *     PfTFullEventListAdd @ 0x140488B58 (PfTFullEventListAdd.c)
 *     RtlStdReleaseStackTrace @ 0x14048A3F8 (RtlStdReleaseStackTrace.c)
 *     EtwpCancelPendingApcs @ 0x14048C6E8 (EtwpCancelPendingApcs.c)
 *     MiPruneCachedStackList @ 0x14048CBC8 (MiPruneCachedStackList.c)
 *     MiFreeUltraMdlContext @ 0x140497FC0 (MiFreeUltraMdlContext.c)
 *     HvlLpWriteMultipleMsr @ 0x1404982C0 (HvlLpWriteMultipleMsr.c)
 *     KeFreeInterrupt @ 0x140498954 (KeFreeInterrupt.c)
 *     HvlLpReadMultipleMsr @ 0x1404B1E50 (HvlLpReadMultipleMsr.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404BAF20 (VfPoolDelayFreeIfPossible.c)
 *     HvlpSetPowerProperty @ 0x1404BD770 (HvlpSetPowerProperty.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CC8C8 (EtwpGetCrimsonStackKey.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDC48 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     MiRemovePteTracker @ 0x1404CE770 (MiRemovePteTracker.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D6A8C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D8538 (MiFreeTransitionPageHeatList.c)
 *     EtwpCovSampLookasideGrow @ 0x1404EF6CC (EtwpCovSampLookasideGrow.c)
 *     MiReplenishPageSlist @ 0x1404F40C0 (MiReplenishPageSlist.c)
 *     HvlSetQpcBias @ 0x1404F7EC0 (HvlSetQpcBias.c)
 *     MiDeleteCloneDescriptor @ 0x1404F8BB8 (MiDeleteCloneDescriptor.c)
 *     PfFbBufferListAllocate @ 0x1405CCB6C (PfFbBufferListAllocate.c)
 *     ViGrowPoolAllocation @ 0x140612280 (ViGrowPoolAllocation.c)
 *     EtwpStackInitializeProcessor @ 0x14064F95C (EtwpStackInitializeProcessor.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406552C4 (ExpTrackRaiseLimitNotification.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14068004C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406800B0 (MiRemoveNonIdealCachedStacks.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 *     MiZeroPageCalibrateDpc @ 0x140694280 (MiZeroPageCalibrateDpc.c)
 *     WdipSemFastFree @ 0x1406F99A0 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x140744CA4 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140745058 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x140745228 (ObpPushRefDerefInfo.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407B196C (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpPreallocateApcPool @ 0x1408303A0 (EtwpPreallocateApcPool.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     ObpFreeObject @ 0x1408469C0 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupPathInfo @ 0x14086E730 (CmpCleanupPathInfo.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     PspThreadIndexCleanup @ 0x1408A8620 (PspThreadIndexCleanup.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092DA30 (ObDeleteCapturedInsertInfo.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 *     EtwpEnableStackCaching @ 0x140A443E8 (EtwpEnableStackCaching.c)
 *     EtwpReferenceStackLookasideList @ 0x140A67A98 (EtwpReferenceStackLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140B65D30 (PopInvokeStateHandlerTargetProcessor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140BA8FD0 (ViFreeTrackedPool.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C10394 (HalpDmaAllocateReservedMappingArray.c)
 *     WheapInitializeEventing @ 0x140C44B04 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140C5C2D8 (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  union _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  signed __int64 v7; // rbx
  union _SLIST_HEADER v8; // rt0
  unsigned __int8 v9; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5.Alignment + 0x20000;
    LOWORD(v7) = LOWORD(v5.Alignment) + 1;
    v8 = v5;
    v9 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v7,
           (signed __int64 *)&v8);
    v5 = v8;
  }
  while ( !v9 );
  return Region;
}
