/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1406B4830
 * Callers:
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     IoMakeAssociatedIrpPriv @ 0x14025D5A8 (IoMakeAssociatedIrpPriv.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiStoreGetWriteSupport @ 0x140276E44 (MiStoreGetWriteSupport.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x14028A010 (EtwpTraceLastBranchRecord.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402E1CAC (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiCreateDecayPfn @ 0x1402FE8EC (MiCreateDecayPfn.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14033D370 (MiGetPerfectFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x14033DDB0 (MiSlistGetFreePage.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14035384C (MiReclaimUnusedUltraMdlMaps.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     HvlGetGpaPagesAccessState @ 0x1403992CC (HvlGetGpaPagesAccessState.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14039C2C0 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlMapSparseGpaPages @ 0x14039CD8C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14039D530 (HvlMapGpaPages.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     KeAllocateXStateContext @ 0x1403D3E40 (KeAllocateXStateContext.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     MiFreeClonePool @ 0x1403EDE7C (MiFreeClonePool.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     IopAllocateMdl @ 0x1403FA4F0 (IopAllocateMdl.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404364B0 (EtwpGetStackLookasideListEntry.c)
 *     PfFbLogEntryReserve @ 0x14044BAF4 (PfFbLogEntryReserve.c)
 *     EtwpCovSampLookasidePop @ 0x14045BD10 (EtwpCovSampLookasidePop.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140468D00 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404740A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     KeAllocateInterrupt @ 0x140482F48 (KeAllocateInterrupt.c)
 *     PfTFullEventListAdd @ 0x140483C48 (PfTFullEventListAdd.c)
 *     MiPruneCachedStackList @ 0x1404878E8 (MiPruneCachedStackList.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x140488FA4 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x140489144 (EtwpAdjustLastBranchLookasideBuffers.c)
 *     HvlLpWriteMultipleMsr @ 0x140492CA0 (HvlLpWriteMultipleMsr.c)
 *     MiGetUltraMdlContext @ 0x1404930EC (MiGetUltraMdlContext.c)
 *     HvlLpReadMultipleMsr @ 0x1404AC6E0 (HvlLpReadMultipleMsr.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     HvlSetQpcBias @ 0x1404F57A0 (HvlSetQpcBias.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C9AD0 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405E5C14 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x140610840 (ViGrowPoolAllocation.c)
 *     EtwpStackDeleteProcessor @ 0x14064DFC0 (EtwpStackDeleteProcessor.c)
 *     MiGetTransitionPageHeatList @ 0x140686854 (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140694BD4 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 *     PfFbBufferListCleanup @ 0x140746CD0 (PfFbBufferListCleanup.c)
 *     PspQueryThreadIndexInformation @ 0x14077C6EC (PspQueryThreadIndexInformation.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     CmpComputeComponentHashes @ 0x140872190 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x14087246C (CmpExpandPathInfo.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObpCaptureObjectName @ 0x1408A5650 (ObpCaptureObjectName.c)
 *     PspThreadIndexCleanup @ 0x1408FE880 (PspThreadIndexCleanup.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 *     VfPoolCheckForLeaks @ 0x140B9C350 (VfPoolCheckForLeaks.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
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
