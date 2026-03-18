/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1406B3890
 * Callers:
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 *     PfLogEvent @ 0x140245398 (PfLogEvent.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14024740C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     IopAllocateIrpPrivate @ 0x140253E10 (IopAllocateIrpPrivate.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x140259A00 (EtwpTraceLastBranchRecord.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmDeleteKernelStack @ 0x14026A4B0 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x14026B230 (MmCreateKernelStack.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x1402A7D3C (CcAllocateWorkQueueEntry.c)
 *     MiStoreGetWriteSupport @ 0x1402ABB24 (MiStoreGetWriteSupport.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402D25D4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiSlistGetFreePage @ 0x1402F3B70 (MiSlistGetFreePage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x1402F55E0 (MiGetPerfectFreeOrZeroPage.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     IoMakeAssociatedIrpPriv @ 0x140374CE8 (IoMakeAssociatedIrpPriv.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403902DC (HalpDmaAcquireBufferMappings.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403990B0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     HvlGetGpaPagesAccessState @ 0x1403AA868 (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403ADAB0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapSparseGpaPages @ 0x1403AE57C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x1403AED20 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403C6780 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403C9670 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403CA27C (HvlpSlowFlushListTbEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E16C0 (ExAllocateFromLookasideListEx.c)
 *     KeAllocateXStateContext @ 0x1403E62A0 (KeAllocateXStateContext.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     EtwpTraceStackKey @ 0x1403EE6C0 (EtwpTraceStackKey.c)
 *     MiFreeClonePool @ 0x1403F7F0C (MiFreeClonePool.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403FA0E0 (ExAllocateFromPagedLookasideList.c)
 *     IopAllocateMdl @ 0x140400000 (IopAllocateMdl.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043B838 (HvlpSlowFlushAddressSpaceTb.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404407E0 (EtwpGetStackLookasideListEntry.c)
 *     PfFbLogEntryReserve @ 0x140456B24 (PfFbLogEntryReserve.c)
 *     EtwpCovSampLookasidePop @ 0x140465630 (EtwpCovSampLookasidePop.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046E870 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477AA0 (HvlDmaUnmapDeviceSparsePages.c)
 *     KeAllocateInterrupt @ 0x140487ED8 (KeAllocateInterrupt.c)
 *     PfTFullEventListAdd @ 0x140488B58 (PfTFullEventListAdd.c)
 *     MiPruneCachedStackList @ 0x14048CBC8 (MiPruneCachedStackList.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x14048EB74 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x14048ED14 (EtwpAdjustLastBranchLookasideBuffers.c)
 *     HvlLpWriteMultipleMsr @ 0x1404982C0 (HvlLpWriteMultipleMsr.c)
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 *     HvlLpReadMultipleMsr @ 0x1404B1E50 (HvlLpReadMultipleMsr.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 *     HvlpSetPowerProperty @ 0x1404BD770 (HvlpSetPowerProperty.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CC8C8 (EtwpGetCrimsonStackKey.c)
 *     HvlSetQpcBias @ 0x1404F7EC0 (HvlSetQpcBias.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405CC360 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405E8624 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x140612280 (ViGrowPoolAllocation.c)
 *     EtwpStackDeleteProcessor @ 0x14064F914 (EtwpStackDeleteProcessor.c)
 *     MiGetTransitionPageHeatList @ 0x140685724 (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x1406913D4 (MiInsertPteTracker.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140693B04 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 *     PfFbBufferListCleanup @ 0x1407489E0 (PfFbBufferListCleanup.c)
 *     PspQueryThreadIndexInformation @ 0x14077C83C (PspQueryThreadIndexInformation.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     CmpComputeComponentHashes @ 0x14086DE60 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x14086E13C (CmpExpandPathInfo.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ObpCaptureObjectName @ 0x14089CFB0 (ObpCaptureObjectName.c)
 *     PspThreadIndexCleanup @ 0x1408A8620 (PspThreadIndexCleanup.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D54A0 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140A48E64 (WdipSemFastAllocate.c)
 *     VfPoolCheckForLeaks @ 0x140B9A350 (VfPoolCheckForLeaks.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  signed __int32 v6; // [rsp+10h] [rbp+8h] BYREF

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr(&v6, 0);
  return v1;
}
