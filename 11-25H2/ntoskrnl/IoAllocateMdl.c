/*
 * XREFs of IoAllocateMdl @ 0x1402D5350
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1402D4A40 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140332BD0 (HalpDmaCheckMdlAccessibility.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     MiZeroPageWrite @ 0x1403BEEAC (MiZeroPageWrite.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14044D9F0 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14047F7E0 (HalBuildMdlFromScatterGatherListV3.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058ED8C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140596098 (IopLiveDumpAllocateMappingResources.c)
 *     MmAllocateMdlForIoSpace @ 0x1406639C0 (MmAllocateMdlForIoSpace.c)
 *     MiLockPatchIatForDV @ 0x140670740 (MiLockPatchIatForDV.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x14070584C (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     PnprInitializeMappingReserve @ 0x140723A74 (PnprInitializeMappingReserve.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407A0280 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1407A0A90 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x1407E0A98 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407E52D0 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     MiCreateMdl @ 0x140A2A938 (MiCreateMdl.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 *     PopReadPagesFromHiberFile @ 0x140AABC80 (PopReadPagesFromHiberFile.c)
 *     CcMdlRead @ 0x140ABFBF0 (CcMdlRead.c)
 *     IovAllocateMdl @ 0x140B72350 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B75970 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140B77ECC (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140B7B1C0 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  ULONG v5; // esi
  __int16 v6; // r14
  __int16 v8; // r12
  unsigned __int64 v9; // rdi
  struct _KPRCB *v10; // r15
  _GENERAL_LOOKASIDE *v11; // rsi
  PSLIST_ENTRY Pool2; // rbx
  unsigned int Number; // eax
  _GENERAL_LOOKASIDE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rax
  _GENERAL_LOOKASIDE *P; // r15
  _GENERAL_LOOKASIDE *L; // r15
  __int64 Size; // rdx
  __int64 Type; // rcx
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp+8h]
  char v26; // [rsp+68h] [rbp+10h]

  v5 = Length;
  v6 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)(8 * v9 + 48) <= 0xB8 )
  {
    v8 = 8;
    if ( ViAptInitialized && KernelVerifier == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = 1;
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( Pool2 )
        goto LABEL_25;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[3].L;
      ++L->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( Pool2
        || (Size = L->Size,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            v26 = 0,
            (Pool2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
      {
LABEL_25:
        LODWORD(Pool2->Next) = CurrentPrcb->Number;
      }
      if ( Pool2 )
      {
        if ( v26 )
          VfPtMiscPoolNotification(Pool2, *((__int16 *)&Pool2->Next + 4), 543974477LL, 0LL);
LABEL_6:
        LOWORD(Number) = Pool2->Next;
        goto LABEL_7;
      }
    }
    else
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->PPLookasideList[3].P;
      ++v11->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&v11->ListHead);
      if ( Pool2 )
        goto LABEL_4;
      ++v11->AllocateMisses;
      v15 = v10->PPLookasideList[3].L;
      ++v15->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&v15->ListHead);
      if ( Pool2
        || (v16 = v15->Size,
            v17 = (unsigned int)v15->Type,
            ++v15->AllocateMisses,
            (Pool2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(v17, v16)) != 0LL) )
      {
LABEL_4:
        LODWORD(Pool2->Next) = v10->Number;
      }
      v5 = Length;
      if ( Pool2 )
        goto LABEL_6;
    }
  }
  Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x42uLL);
  if ( !Pool2 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
LABEL_7:
  *((_WORD *)&Pool2->Next + 6) = Number;
  Pool2->Next = 0LL;
  *((_WORD *)&Pool2->Next + 4) = 8 * (v9 + 6);
  Pool2[2].Next = (_SLIST_ENTRY *)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  *((_DWORD *)&Pool2[2].Next + 3) = v6 & 0xFFF;
  *((_DWORD *)&Pool2[2].Next + 2) = v5;
  *((_WORD *)&Pool2->Next + 5) = v8;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = (struct _MDL *)Pool2;
    }
    else
    {
      Irp->MdlAddress = (PMDL)Pool2;
    }
  }
  return (PMDL)Pool2;
}
