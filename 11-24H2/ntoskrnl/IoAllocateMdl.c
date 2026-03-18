/*
 * XREFs of IoAllocateMdl @ 0x140267BF0
 * Callers:
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 *     MiZeroPageWrite @ 0x140268964 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140391F30 (HalpDmaCheckMdlAccessibility.c)
 *     CcLockSystemCacheBuffer @ 0x14040CB58 (CcLockSystemCacheBuffer.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14044D690 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404805A0 (HalBuildMdlFromScatterGatherListV3.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405925BC (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1405997A8 (IopLiveDumpAllocateMappingResources.c)
 *     MmAllocateMdlForIoSpace @ 0x14066F4E0 (MmAllocateMdlForIoSpace.c)
 *     MiLockPatchIatForDV @ 0x14067BF00 (MiLockPatchIatForDV.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070F368 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x14071194C (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     PnprInitializeMappingReserve @ 0x14072F9F4 (PnprInitializeMappingReserve.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407AF650 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1407AFE60 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0938 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F5158 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 *     IovAllocateMdl @ 0x140B82350 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B85950 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140B8B1A0 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  ULONG v5; // edi
  __int16 v6; // r15
  __int16 v8; // r12
  unsigned __int64 v9; // rsi
  struct _KPRCB *v10; // rbp
  _GENERAL_LOOKASIDE *v11; // rdi
  __int64 Pool2; // rbx
  _GENERAL_LOOKASIDE *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int Number; // eax
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rax
  _GENERAL_LOOKASIDE *P; // rbp
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 v24; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp+8h]
  char v30; // [rsp+68h] [rbp+10h]

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
      v30 = 1;
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalAllocates;
      Pool2 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( Pool2 )
        goto LABEL_24;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[3].L;
      ++L->TotalAllocates;
      Pool2 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( Pool2
        || (Size = L->Size,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            v30 = 0,
            (Pool2 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v24)) != 0) )
      {
LABEL_24:
        *(_DWORD *)Pool2 = CurrentPrcb->Number;
      }
      if ( Pool2 )
      {
        if ( v30 )
          VfPtMiscPoolNotification(Pool2, *(__int16 *)(Pool2 + 8), 543974477LL, 0LL);
LABEL_8:
        LOWORD(Number) = *(_WORD *)Pool2;
        goto LABEL_9;
      }
    }
    else
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->PPLookasideList[3].P;
      ++v11->TotalAllocates;
      Pool2 = (__int64)RtlpInterlockedPopEntrySList(&v11->ListHead);
      if ( Pool2 )
        goto LABEL_6;
      ++v11->AllocateMisses;
      v13 = v10->PPLookasideList[3].L;
      ++v13->TotalAllocates;
      Pool2 = (__int64)RtlpInterlockedPopEntrySList(&v13->ListHead);
      if ( Pool2
        || (v15 = v13->Size,
            v16 = v13->Tag,
            v17 = (unsigned int)v13->Type,
            ++v13->AllocateMisses,
            (Pool2 = guard_dispatch_icall_no_overrides(v17, v15, v16, v14)) != 0) )
      {
LABEL_6:
        *(_DWORD *)Pool2 = v10->Number;
      }
      v5 = Length;
      if ( Pool2 )
        goto LABEL_8;
    }
  }
  Pool2 = ExAllocatePool2(0x42uLL);
  if ( !Pool2 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
LABEL_9:
  *(_WORD *)(Pool2 + 12) = Number;
  *(_QWORD *)Pool2 = 0LL;
  *(_WORD *)(Pool2 + 8) = 8 * (v9 + 6);
  *(_QWORD *)(Pool2 + 32) = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(Pool2 + 44) = v6 & 0xFFF;
  *(_DWORD *)(Pool2 + 40) = v5;
  *(_WORD *)(Pool2 + 10) = v8;
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
