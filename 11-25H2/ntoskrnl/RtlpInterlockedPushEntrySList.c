/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1406A8600
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiInsertInPageBlock @ 0x14023B570 (MiInsertInPageBlock.c)
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     EtwpTraceLastBranchRecord @ 0x140257020 (EtwpTraceLastBranchRecord.c)
 *     KeFreeXStateContext @ 0x140262E18 (KeFreeXStateContext.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14026E010 (HvlDmaMapDeviceLogicalRange.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpApcPoolThunk @ 0x14030A360 (EtwpApcPoolThunk.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpFinalizePendingApc @ 0x14030CD94 (EtwpFinalizePendingApc.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     MiQueuePageAccessLog @ 0x14032382C (MiQueuePageAccessLog.c)
 *     PfFbLogEntryComplete @ 0x140324110 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x140324A3C (PfFbLogEntryReserve.c)
 *     PfLogEvent @ 0x140324B30 (PfLogEvent.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140348680 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140348884 (EtwpCovSampCaptureApcRelease.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14034AF20 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     FsRtlFastUnlockSingleShared @ 0x140373210 (FsRtlFastUnlockSingleShared.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     MiRepurposeDecayNode @ 0x1403EDFB0 (MiRepurposeDecayNode.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x1403F6280 (EtwpDereferenceStackEntry.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x140420600 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043C4C0 (HvlpSlowFlushAddressSpaceTb.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14043E6CC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x14043E9B4 (EtwpCovSampCaptureBufferRelease.c)
 *     FsRtlUninitializeBaseMcb @ 0x140440D10 (FsRtlUninitializeBaseMcb.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140442170 (LZNT1DecompressChunkWorkItem.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140442320 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140456864 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140458B30 (EtwpCovSampCaptureQueueBuffer.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045AD48 (HalpDmaReleaseBufferMappings.c)
 *     MiStoreFreeWriteSupport @ 0x1404638C0 (MiStoreFreeWriteSupport.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046FDA0 (HvlDmaMapDeviceSparsePages.c)
 *     PfFbBufferListInsertInFree @ 0x140477A20 (PfFbBufferListInsertInFree.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477CC0 (HvlDmaUnmapDeviceSparsePages.c)
 *     PfpReturnAccessBuffer @ 0x14047DF70 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E0C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     KeAllocateInterrupt @ 0x1404881F8 (KeAllocateInterrupt.c)
 *     PfTFullEventListAdd @ 0x14048924C (PfTFullEventListAdd.c)
 *     RtlStdReleaseStackTrace @ 0x14048AB4C (RtlStdReleaseStackTrace.c)
 *     MiPruneCachedStackList @ 0x14048AF30 (MiPruneCachedStackList.c)
 *     EtwpCancelPendingApcs @ 0x14048CB68 (EtwpCancelPendingApcs.c)
 *     MiFreeUltraMdlContext @ 0x1404984A8 (MiFreeUltraMdlContext.c)
 *     HvlLpWriteMultipleMsr @ 0x140498660 (HvlLpWriteMultipleMsr.c)
 *     KeFreeInterrupt @ 0x140498D58 (KeFreeInterrupt.c)
 *     HvlLpReadMultipleMsr @ 0x1404B0F00 (HvlLpReadMultipleMsr.c)
 *     VfPoolDelayFreeIfPossible @ 0x1404BBAD0 (VfPoolDelayFreeIfPossible.c)
 *     HvlpSetPowerProperty @ 0x1404BEF1C (HvlpSetPowerProperty.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDE68 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     MiRemovePteTracker @ 0x1404CE90C (MiRemovePteTracker.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D7C5C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D94B8 (MiFreeTransitionPageHeatList.c)
 *     EtwpCovSampLookasideGrow @ 0x1404EC090 (EtwpCovSampLookasideGrow.c)
 *     MiReplenishPageSlist @ 0x1404EF270 (MiReplenishPageSlist.c)
 *     HvlSetQpcBias @ 0x1404F56C0 (HvlSetQpcBias.c)
 *     MiDeleteCloneDescriptor @ 0x1404F63B8 (MiDeleteCloneDescriptor.c)
 *     PfFbBufferListAllocate @ 0x1405C859C (PfFbBufferListAllocate.c)
 *     ViGrowPoolAllocation @ 0x1406062C0 (ViGrowPoolAllocation.c)
 *     EtwpStackInitializeProcessor @ 0x1406439BC (EtwpStackInitializeProcessor.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406493C4 (ExpTrackRaiseLimitNotification.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14067482C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140674890 (MiRemoveNonIdealCachedStacks.c)
 *     MiZeroPageCalibrate @ 0x140688A2C (MiZeroPageCalibrate.c)
 *     MiZeroPageCalibrateDpc @ 0x140688E20 (MiZeroPageCalibrateDpc.c)
 *     WdipSemFastFree @ 0x1406EDCC4 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x140738C84 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140739038 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x140739208 (ObpPushRefDerefInfo.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407A259C (EtwpReferenceLastBranchLookasideList.c)
 *     ObpFreeObject @ 0x14084AD10 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     CmpCleanupPathInfo @ 0x1408715F0 (CmpCleanupPathInfo.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     ObpFreeObjectNameBuffer @ 0x14089F1A0 (ObpFreeObjectNameBuffer.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     PspThreadIndexCleanup @ 0x1408F5210 (PspThreadIndexCleanup.c)
 *     ObDeleteCapturedInsertInfo @ 0x1409130A0 (ObDeleteCapturedInsertInfo.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14099F4B0 (IoCreateStreamFileObjectEx2.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 *     EtwpPreallocateApcPool @ 0x140A39284 (EtwpPreallocateApcPool.c)
 *     EtwpEnableStackCaching @ 0x140A3FABC (EtwpEnableStackCaching.c)
 *     EtwpReferenceStackLookasideList @ 0x140A64F7C (EtwpReferenceStackLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140B55C20 (PopInvokeStateHandlerTargetProcessor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140B98FF0 (ViFreeTrackedPool.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140BFF394 (HalpDmaAllocateReservedMappingArray.c)
 *     WheapInitializeEventing @ 0x140C33838 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140C4AF58 (MiInitializeDecayPfns.c)
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
