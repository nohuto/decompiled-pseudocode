/*
 * XREFs of IoFreeMdl @ 0x14025ED30
 * Callers:
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     HalMapTransferEx @ 0x14038B410 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14038B860 (HalpDmaCheckMdlAccessibility.c)
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x140405000 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140444590 (HalBuildMdlFromScatterGatherListV2.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14047B100 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     CcMdlWriteAbort @ 0x1405797E0 (CcMdlWriteAbort.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140597EA0 (IopLiveDumpFreeMappingResources.c)
 *     IopMcReleaseMdl @ 0x14059FC28 (IopMcReleaseMdl.c)
 *     DifIoFreeMdlWrapper @ 0x140626B80 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14067DB08 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     FsRtlpFreeMdlChain @ 0x14070ACA4 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BA10 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BAB0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     PnprFreeMappingReserve @ 0x14072D57C (PnprFreeMappingReserve.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0F08 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1407F10C0 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F584C (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 *     sub_1409DABCC @ 0x1409DABCC (sub_1409DABCC.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A077BC (AlpcpFreeCompletionList.c)
 *     CcMdlReadComplete2 @ 0x140A32058 (CcMdlReadComplete2.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 *     ViAllocateMapRegisterFile @ 0x140B89EAC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
