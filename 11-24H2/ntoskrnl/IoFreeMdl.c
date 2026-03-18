/*
 * XREFs of IoFreeMdl @ 0x140267750
 * Callers:
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 *     IopUnlockAndFreeMdl @ 0x140268818 (IopUnlockAndFreeMdl.c)
 *     MiZeroPageWrite @ 0x140268964 (MiZeroPageWrite.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     HalMapTransferEx @ 0x140391AE0 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140391F30 (HalpDmaCheckMdlAccessibility.c)
 *     HalFlushAdapterBuffersEx @ 0x140392210 (HalFlushAdapterBuffersEx.c)
 *     HalPutScatterGatherListV3 @ 0x140392818 (HalPutScatterGatherListV3.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x14040C970 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x14040CB58 (CcLockSystemCacheBuffer.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14044D690 (HalBuildMdlFromScatterGatherListV2.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404805A0 (HalBuildMdlFromScatterGatherListV3.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 *     CcMdlWriteAbort @ 0x14057C350 (CcMdlWriteAbort.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405925BC (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14059AF20 (IopLiveDumpFreeMappingResources.c)
 *     IopMcReleaseMdl @ 0x1405A2CE8 (IopMcReleaseMdl.c)
 *     DifIoFreeMdlWrapper @ 0x1406285C0 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14067C928 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     FsRtlpFreeMdlChain @ 0x14070D104 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DE70 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DF10 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070F368 (HvlpDynamicUpdateMicrocode.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     PnprFreeMappingReserve @ 0x14072F56C (PnprFreeMappingReserve.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0938 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1407F0AF0 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F5158 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     MiDeleteImageCreationMdls @ 0x140945F4C (MiDeleteImageCreationMdls.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     sub_1409E0E1C @ 0x1409E0E1C (sub_1409E0E1C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A0B28C (AlpcpFreeCompletionList.c)
 *     CcMdlReadComplete2 @ 0x140A3C878 (CcMdlReadComplete2.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     MiReleaseHotPatchResources @ 0x140AB45B8 (MiReleaseHotPatchResources.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v4 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v4];
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
        LOBYTE(v2) = 1;
        VfPtMiscPoolNotification(Mdl, Mdl->Size, 543974477LL, v2);
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
      }
      else
      {
        ++P->FreeMisses;
        guard_dispatch_icall_no_overrides(Mdl, CurrentPrcb, v1, v2);
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
          guard_dispatch_icall_no_overrides(Mdl, CurrentPrcb, v1, v2);
      }
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
