/*
 * XREFs of IoFreeMdl @ 0x1402D5960
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     IopUnlockAndFreeMdl @ 0x1402D3518 (IopUnlockAndFreeMdl.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D4A40 (IopBuildDeviceIoControlRequest.c)
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140332BD0 (HalpDmaCheckMdlAccessibility.c)
 *     HalPutScatterGatherListV3 @ 0x14033419C (HalPutScatterGatherListV3.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     MiZeroPageWrite @ 0x1403BEEAC (MiZeroPageWrite.c)
 *     CcCopyBytesToUserBuffer @ 0x140404FD0 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14044D9F0 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14047F7E0 (HalBuildMdlFromScatterGatherListV3.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CC00 (HalpDmaFreeChildAdapter.c)
 *     CcMdlWriteAbort @ 0x140579040 (CcMdlWriteAbort.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058ED8C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140597810 (IopLiveDumpFreeMappingResources.c)
 *     IopMcReleaseMdl @ 0x14059F578 (IopMcReleaseMdl.c)
 *     DifIoFreeMdlWrapper @ 0x14061C600 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140671168 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     FsRtlpFreeMdlChain @ 0x140701224 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140701F90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140702030 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     PnprFreeMappingReserve @ 0x1407235EC (PnprFreeMappingReserve.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x1407E0A98 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1407E0C50 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407E52D0 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     sub_1409E1F18 @ 0x1409E1F18 (sub_1409E1F18.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2E48 (IopCleanupFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A08300 (AlpcpFreeCompletionList.c)
 *     MiDeleteImageCreationMdls @ 0x140A2AA8C (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x140A35D18 (CcMdlReadComplete2.c)
 *     PopReadPagesFromHiberFile @ 0x140AABC80 (PopReadPagesFromHiberFile.c)
 *     MiReleaseHotPatchResources @ 0x140AAF5C8 (MiReleaseHotPatchResources.c)
 *     CcMdlRead @ 0x140ABFBF0 (CcMdlRead.c)
 *     ViAllocateMapRegisterFile @ 0x140B77ECC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    if ( ViAptInitialized && KernelVerifier == 1 )
    {
      if ( !CurrentPrcb )
        CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[3].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        LOBYTE(v1) = 1;
        VfPtMiscPoolNotification(Mdl, Mdl->Size, 543974477LL, v1);
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
      }
      else
      {
        ++P->FreeMisses;
        guard_dispatch_icall_no_overrides(Mdl, CurrentPrcb);
      }
    }
    else
    {
      if ( !CurrentPrcb )
        CurrentPrcb = KeGetCurrentPrcb();
      L = CurrentPrcb->PPLookasideList[3].P;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) < L->Depth
        || (++L->FreeMisses,
            L = CurrentPrcb->PPLookasideList[3].L,
            ++L->TotalFrees,
            LOWORD(L->ListHead.Alignment) < L->Depth) )
      {
        RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)Mdl);
      }
      else
      {
        ++L->FreeMisses;
        if ( (void (__stdcall *)(PVOID))L->FreeEx == ExFreePool )
          ExFreePool(Mdl);
        else
          guard_dispatch_icall_no_overrides(Mdl, CurrentPrcb);
      }
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
