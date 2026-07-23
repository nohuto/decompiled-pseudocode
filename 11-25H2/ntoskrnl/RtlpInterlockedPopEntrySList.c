/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1406A85C0
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140207EA4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140209BA8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiCreateDecayPfn @ 0x14021C248 (MiCreateDecayPfn.c)
 *     MiSlistGetFreePage @ 0x14022AF60 (MiSlistGetFreePage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14022BEE0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     IopAllocateIrpPrivate @ 0x140253800 (IopAllocateIrpPrivate.c)
 *     EtwpTraceLastBranchRecord @ 0x140257020 (EtwpTraceLastBranchRecord.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14026CB84 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapSparseGpaPages @ 0x14026CEEC (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14026D068 (HvlMapGpaPages.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14026E010 (HvlDmaMapDeviceLogicalRange.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     MiStoreGetWriteSupport @ 0x1402D9790 (MiStoreGetWriteSupport.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     PfFbLogEntryReserve @ 0x140324A3C (PfFbLogEntryReserve.c)
 *     PfLogEvent @ 0x140324B30 (PfLogEvent.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140348CEC (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     IoMakeAssociatedIrpPriv @ 0x14035E5F8 (IoMakeAssociatedIrpPriv.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x1403AC58C (CcAllocateWorkQueueEntry.c)
 *     ExAllocateFromLookasideListEx @ 0x1403DCD60 (ExAllocateFromLookasideListEx.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     IopAllocateMdl @ 0x1403F7D80 (IopAllocateMdl.c)
 *     HvlGetGpaPagesAccessState @ 0x14042C0FC (HvlGetGpaPagesAccessState.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 *     KeAllocateXStateContext @ 0x14043BD00 (KeAllocateXStateContext.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043C4C0 (HvlpSlowFlushAddressSpaceTb.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404402F0 (EtwpGetStackLookasideListEntry.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140450C38 (MiReclaimUnusedUltraMdlMaps.c)
 *     HvlpSlowFlushListTbEx @ 0x1404518A8 (HvlpSlowFlushListTbEx.c)
 *     MiFreeClonePool @ 0x140459590 (MiFreeClonePool.c)
 *     EtwpCovSampLookasidePop @ 0x140466A90 (EtwpCovSampLookasidePop.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     HvlDmaMapDeviceSparsePages @ 0x14046FDA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140477CC0 (HvlDmaUnmapDeviceSparsePages.c)
 *     KeAllocateInterrupt @ 0x1404881F8 (KeAllocateInterrupt.c)
 *     PfTFullEventListAdd @ 0x14048924C (PfTFullEventListAdd.c)
 *     MiPruneCachedStackList @ 0x14048AF30 (MiPruneCachedStackList.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x14048F044 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x14048F1E4 (EtwpAdjustLastBranchLookasideBuffers.c)
 *     HvlLpWriteMultipleMsr @ 0x140498660 (HvlLpWriteMultipleMsr.c)
 *     MiGetUltraMdlContext @ 0x140498B1C (MiGetUltraMdlContext.c)
 *     HvlLpReadMultipleMsr @ 0x1404B0F00 (HvlLpReadMultipleMsr.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     HvlpSetPowerProperty @ 0x1404BEF1C (HvlpSetPowerProperty.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     HvlSetQpcBias @ 0x1404F56C0 (HvlSetQpcBias.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C7D90 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405DC574 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x1406062C0 (ViGrowPoolAllocation.c)
 *     EtwpStackDeleteProcessor @ 0x140643974 (EtwpStackDeleteProcessor.c)
 *     MiGetTransitionPageHeatList @ 0x140679E94 (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x140685F74 (MiInsertPteTracker.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x1406886A4 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x140688A2C (MiZeroPageCalibrate.c)
 *     PfFbBufferListCleanup @ 0x14073C9D0 (PfFbBufferListCleanup.c)
 *     PspQueryThreadIndexInformation @ 0x14076D510 (PspQueryThreadIndexInformation.c)
 *     CmpComputeComponentHashes @ 0x1408476D0 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x140848278 (CmpExpandPathInfo.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObpCaptureObjectName @ 0x14085C910 (ObpCaptureObjectName.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     PspThreadIndexCleanup @ 0x1408F5210 (PspThreadIndexCleanup.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140A44214 (WdipSemFastAllocate.c)
 *     VfPoolCheckForLeaks @ 0x140B8A370 (VfPoolCheckForLeaks.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  signed __int32 v6; // [rsp+10h] [rbp+8h] BYREF

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
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
