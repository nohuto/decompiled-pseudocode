/*
 * XREFs of IoAllocateMdl @ 0x14025F1D0
 * Callers:
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14038B860 (HalpDmaCheckMdlAccessibility.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140444590 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14047B100 (HalBuildMdlFromScatterGatherListV3.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140596728 (IopLiveDumpAllocateMappingResources.c)
 *     MmAllocateMdlForIoSpace @ 0x1406706B0 (MmAllocateMdlForIoSpace.c)
 *     MiLockPatchIatForDV @ 0x14067D0E0 (MiLockPatchIatForDV.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x14070F4DC (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     PnprInitializeMappingReserve @ 0x14072DA04 (PnprInitializeMappingReserve.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407AFAA0 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0F08 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F584C (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 *     IovAllocateMdl @ 0x140B84350 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B87950 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140B89EAC (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140B8D1A0 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  unsigned int v10; // r13d
  struct _KPRCB *v11; // rbp
  _GENERAL_LOOKASIDE *v12; // rdi
  PSLIST_ENTRY Pool2; // rbx
  _GENERAL_LOOKASIDE *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int Number; // eax
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rax
  _GENERAL_LOOKASIDE *P; // rbp
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 v25; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp+8h]
  char v31; // [rsp+68h] [rbp+10h]

  v5 = Length;
  v6 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  v10 = 8 * v9 + 48;
  if ( v10 <= 0xB8 )
  {
    v8 = 8;
    v10 = 184;
    if ( ViAptInitialized && KernelVerifier == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = 1;
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( Pool2 )
        goto LABEL_24;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[3].L;
      ++L->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( Pool2
        || (Size = L->Size,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            v31 = 0,
            (Pool2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(Type, Size, Tag, v25)) != 0LL) )
      {
LABEL_24:
        LODWORD(Pool2->Next) = CurrentPrcb->Number;
      }
      if ( Pool2 )
      {
        if ( v31 )
          VfPtMiscPoolNotification(Pool2, *((__int16 *)&Pool2->Next + 4), 543974477LL, 0LL);
LABEL_8:
        LOWORD(Number) = Pool2->Next;
        goto LABEL_9;
      }
    }
    else
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->PPLookasideList[3].P;
      ++v12->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&v12->ListHead);
      if ( Pool2 )
        goto LABEL_6;
      ++v12->AllocateMisses;
      v14 = v11->PPLookasideList[3].L;
      ++v14->TotalAllocates;
      Pool2 = RtlpInterlockedPopEntrySList(&v14->ListHead);
      if ( Pool2
        || (v16 = v14->Size,
            v17 = v14->Tag,
            v18 = (unsigned int)v14->Type,
            ++v14->AllocateMisses,
            (Pool2 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(v18, v16, v17, v15)) != 0LL) )
      {
LABEL_6:
        LODWORD(Pool2->Next) = v11->Number;
      }
      v5 = Length;
      if ( Pool2 )
        goto LABEL_8;
    }
  }
  Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x42uLL, v10, 0x206C644Du);
  if ( !Pool2 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
LABEL_9:
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
