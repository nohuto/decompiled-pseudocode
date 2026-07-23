/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1406B4870
 * Callers:
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     PfFbLogEntryComplete @ 0x14020DB10 (PfFbLogEntryComplete.c)
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140231CC0 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x14028A010 (EtwpTraceLastBranchRecord.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     MiStoreFreeWriteSupport @ 0x1402DD6E0 (MiStoreFreeWriteSupport.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402E4400 (FsRtlFastUnlockSingleShared.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     EtwpApcPoolThunk @ 0x1403DD840 (EtwpApcPoolThunk.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     MiRepurposeDecayNode @ 0x1403E79C0 (MiRepurposeDecayNode.c)
 *     KeFreeXStateContext @ 0x1403FF338 (KeFreeXStateContext.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x140411780 (EtwpReleaseStackLookasideListEntry.c)
 *     MiInsertInPageBlock @ 0x1404274F0 (MiInsertInPageBlock.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 *     EtwpCovSampCaptureApcRelease @ 0x1404341E4 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1404347FC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140434AE4 (EtwpCovSampCaptureBufferRelease.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404365C0 (FsRtlUninitializeBaseMcb.c)
 *     MiDecayPfnFullyInitialized @ 0x140437598 (MiDecayPfnFullyInitialized.c)
 *     EtwpFinalizePendingApc @ 0x140438BA8 (EtwpFinalizePendingApc.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140439050 (LZNT1DecompressChunkWorkItem.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140439240 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     PfFbLogEntryReserve @ 0x14044BAF4 (PfFbLogEntryReserve.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14044E3F8 (EtwpCovSampCaptureQueueBuffer.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14044EA6C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     HalpDmaReleaseBufferMappings @ 0x14044FCA4 (HalpDmaReleaseBufferMappings.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140468D00 (HvlDmaMapDeviceSparsePages.c)
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404740A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     PfpReturnAccessBuffer @ 0x140479740 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140479890 (MiAllocatePfnRepurposeLogDispatch.c)
 *     KeAllocateInterrupt @ 0x140482F48 (KeAllocateInterrupt.c)
 *     PfTFullEventListAdd @ 0x140483C48 (PfTFullEventListAdd.c)
 *     RtlStdReleaseStackTrace @ 0x140485220 (RtlStdReleaseStackTrace.c)
 *     EtwpCancelPendingApcs @ 0x140487408 (EtwpCancelPendingApcs.c)
 *     MiPruneCachedStackList @ 0x1404878E8 (MiPruneCachedStackList.c)
 *     MiFreeUltraMdlContext @ 0x14049299C (MiFreeUltraMdlContext.c)
 *     HvlLpWriteMultipleMsr @ 0x140492CA0 (HvlLpWriteMultipleMsr.c)
 *     KeFreeInterrupt @ 0x1404932B4 (KeFreeInterrupt.c)
 *     HvlLpReadMultipleMsr @ 0x1404AC6E0 (HvlLpReadMultipleMsr.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404B5DC0 (VfPoolDelayFreeIfPossible.c)
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404C7018 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     MiRemovePteTracker @ 0x1404C793C (MiRemovePteTracker.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404CFEDC (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D1988 (MiFreeTransitionPageHeatList.c)
 *     EtwpCovSampLookasideGrow @ 0x1404ED000 (EtwpCovSampLookasideGrow.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 *     HvlSetQpcBias @ 0x1404F57A0 (HvlSetQpcBias.c)
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     PfFbBufferListAllocate @ 0x1405CA2DC (PfFbBufferListAllocate.c)
 *     ViGrowPoolAllocation @ 0x140610840 (ViGrowPoolAllocation.c)
 *     EtwpStackInitializeProcessor @ 0x14064E008 (EtwpStackInitializeProcessor.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406539C4 (ExpTrackRaiseLimitNotification.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14068124C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406812B0 (MiRemoveNonIdealCachedStacks.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 *     MiZeroPageCalibrateDpc @ 0x140695350 (MiZeroPageCalibrateDpc.c)
 *     WdipSemFastFree @ 0x1406F75E0 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x140742F94 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140743348 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x140743518 (ObpPushRefDerefInfo.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407B1DBC (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupPathInfo @ 0x140872A60 (CmpCleanupPathInfo.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1408AD120 (IoCreateStreamFileObjectEx2.c)
 *     PspThreadIndexCleanup @ 0x1408FE880 (PspThreadIndexCleanup.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092FB70 (ObDeleteCapturedInsertInfo.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 *     EtwpPreallocateApcPool @ 0x1409CF784 (EtwpPreallocateApcPool.c)
 *     EtwpEnableStackCaching @ 0x140A39C78 (EtwpEnableStackCaching.c)
 *     EtwpReferenceStackLookasideList @ 0x140A60F90 (EtwpReferenceStackLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140B67E70 (PopInvokeStateHandlerTargetProcessor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140BAAFD0 (ViFreeTrackedPool.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C12394 (HalpDmaAllocateReservedMappingArray.c)
 *     WheapInitializeEventing @ 0x140C46C54 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140C5E468 (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  signed __int64 v7; // rbx
  _SLIST_HEADER v8; // rt0
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
