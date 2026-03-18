/*
 * XREFs of MmGetPhysicalAddress @ 0x140263A60
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140262A88 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     HalpAcpiAccessSecureAddress @ 0x140263930 (HalpAcpiAccessSecureAddress.c)
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140380700 (SmPrepareForFatalHeapCorruption.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalpIommuMapLogical @ 0x1403AC998 (HalpIommuMapLogical.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403C6780 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403C9670 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403CA27C (HvlpSlowFlushListTbEx.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     EtwTraceContAllocationEvent @ 0x14041138C (EtwTraceContAllocationEvent.c)
 *     HalAllocateCommonBufferExV2 @ 0x140411600 (HalAllocateCommonBufferExV2.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043B838 (HvlpSlowFlushAddressSpaceTb.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404465C4 (HsaUpdateDeviceTableEntry.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     EtwpFreeTraceBuffer @ 0x140483510 (EtwpFreeTraceBuffer.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D7240 (HalpDmaAllocateContiguousMemory.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1404D867C (IvtBuildScalableModePasidDirectoryEntry.c)
 *     HvlSetQpcBias @ 0x1404F7EC0 (HvlSetQpcBias.c)
 *     IvtBuildScalableModeContextEntry @ 0x1404F90F0 (IvtBuildScalableModeContextEntry.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14054181C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpHvStartVirtualProcessor @ 0x14054B868 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054EDEC (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054F804 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaControllerInitializeController @ 0x140552D58 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptBuildStartupStub @ 0x140558FDC (HalpInterruptBuildStartupStub.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405592F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055FAA4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x140567B00 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140567B64 (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x140567D28 (HalpIommuMapLogicalRange.c)
 *     IvtLegacyBuildScalableModeContextEntry @ 0x14056FE18 (IvtLegacyBuildScalableModeContextEntry.c)
 *     HsaAllocatePasidTables @ 0x14057225C (HsaAllocatePasidTables.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405839A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x140585504 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1405855B8 (HvlpSetupSchedulerAssist.c)
 *     HvlpTryConfigureInterface @ 0x14058B81C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x14058BF18 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x14058C50C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14058C5B8 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14058C6FC (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058CE7C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14058CF6C (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058EB30 (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1405918B0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405922F0 (IoSetDumpRange.c)
 *     IopRemovePageDumpRange @ 0x140594F58 (IopRemovePageDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140595A24 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1405A7704 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1405A7D30 (PnprRecopyAddress.c)
 *     PopGetNextTable @ 0x1405D3444 (PopGetNextTable.c)
 *     RtlMarkHiberPhase @ 0x1405F2060 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x14060D448 (SmEtwLogStoreCorruption.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060F110 (SmRecordDecompressionFailureDumpPayload.c)
 *     MiDbgCopyMemory @ 0x14067E4A8 (MiDbgCopyMemory.c)
 *     MmStoreLogDecompressionFailure @ 0x14068C938 (MmStoreLogDecompressionFailure.c)
 *     BgpFwLibraryEnable @ 0x140698104 (BgpFwLibraryEnable.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FFC88 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406FFD04 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x1407103F8 (VslStartSecureProcessor.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407AF650 (EtwpBuildMdlForTraceBuffer.c)
 *     HalpCommitCR3Worker @ 0x140B4E648 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140B4E6CC (HalpMapCR3Ex.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140B4E7C0 (HalpMmBuildTiledMemoryMap.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140B52D00 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x140B5D304 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B5DC4C (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B5E080 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
 *     PopBuildMemoryImageHeader @ 0x140B64920 (PopBuildMemoryImageHeader.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     sub_140C08E44 @ 0x140C08E44 (sub_140C08E44.c)
 *     IommupHvInitializeLibrary @ 0x140C14944 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140C199BC (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140C19E78 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueuePinDriverAddressLog @ 0x140264300 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x140264680 (MiVaToPfnEx.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  PHYSICAL_ADDRESS v1; // rsi
  PHYSICAL_ADDRESS v3; // rbx
  __int64 v4; // r11
  int v5; // r14d
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // r14d
  int v15; // eax
  _KPROCESS *v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v22; // rdx
  volatile signed __int64 *v23; // r8
  signed __int64 v24; // rax
  unsigned __int64 v25; // rdi
  signed __int64 v26; // rtt
  __int64 v27; // [rsp+18h] [rbp-60h]
  unsigned __int64 v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+30h] [rbp-48h]
  _QWORD v31[5]; // [rsp+38h] [rbp-40h]

  v1.QuadPart = 0LL;
  v3.QuadPart = 0LL;
  v28 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31[1] = v28;
  v4 = 4LL;
  v31[0] = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 4;
  v31[4] = v31[0];
  v6 = 4LL;
  v31[2] = v29;
  v31[3] = v30;
  while ( 1 )
  {
    v7 = v31[v6--];
    --v5;
    v8 = *(_QWORD *)v7;
    if ( v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_6;
    v9 = *(_QWORD *)v7;
    if ( (v8 & 1) == 0 )
      break;
    if ( ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v22 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            LOBYTE(v9) = v8 | 0x20;
          LOBYTE(v8) = v9 | 0x42;
          if ( (v22 & 0x42) == 0 )
            LOBYTE(v8) = v9;
        }
      }
    }
LABEL_6:
    if ( (v8 & 1) == 0 )
      goto LABEL_7;
    if ( (v8 & 0x80u) != 0LL )
    {
      if ( !v5 )
        goto LABEL_7;
      v25 = MiVaToPfnEx(BaseAddress);
      MI_READ_PTE_LOCK_FREE(*(&v28 + v5));
      goto LABEL_41;
    }
    if ( v6 == 1 )
      goto LABEL_7;
  }
  do
  {
LABEL_7:
    v10 = *(&v27 + v4--);
    v11 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v12 = *(_QWORD *)v10;
      if ( (v11 & 1) == 0 )
        goto LABEL_17;
      if ( ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v17 = KeGetCurrentThread()->ApcState.Process;
        if ( v17->AddressPolicy != 1 )
        {
          v18 = v17[2].KernelWaitTime;
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * ((v10 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              LOBYTE(v12) = v11 | 0x20;
            LOBYTE(v11) = v12 | 0x42;
            if ( (v19 & 0x42) == 0 )
              LOBYTE(v11) = v12;
          }
        }
      }
    }
    if ( (v11 & 1) == 0 )
      goto LABEL_17;
  }
  while ( v4 != 1 );
  v13 = *(_QWORD *)v28;
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
  {
    v14 = 0;
  }
  else
  {
    v14 = byte_140E389A8[(((unsigned __int64)BaseAddress >> 39) & 0x1FF) - 256];
    if ( v14 == 11 )
      MiQueuePinDriverAddressLog(BaseAddress, *(_QWORD *)v28, 0LL);
  }
  if ( (v13 & 1) == 0 )
  {
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  if ( v14 == 4 )
  {
    v23 = (volatile signed __int64 *)v28;
    v24 = *(_QWORD *)v28;
    if ( (*(_QWORD *)v28 & 0x200LL) == 0 )
    {
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v26 = v24;
        v24 = _InterlockedCompareExchange64(v23, v24 | 0x220, v24);
      }
      while ( v26 != v24 && (v24 & 0x200) == 0 );
    }
    v13 = *(_QWORD *)v28;
  }
  v25 = (v13 >> 12) & 0xFFFFFFFFFFLL;
LABEL_41:
  v15 = 1;
  v3.QuadPart = __PAIR64__(v25 >> 20, ((_DWORD)v25 << 12) + ((unsigned __int16)BaseAddress & 0xFFFu));
LABEL_18:
  if ( v15 )
    return v3;
  return v1;
}
