/*
 * XREFs of MmGetPhysicalAddress @ 0x1402932D0
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     HalpAcpiAccessSecureAddress @ 0x1402931A0 (HalpAcpiAccessSecureAddress.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalAllocateCommonBufferExV2 @ 0x140395840 (HalAllocateCommonBufferExV2.c)
 *     EtwTraceContAllocationEvent @ 0x1403960E8 (EtwTraceContAllocationEvent.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpIommuMapLogical @ 0x14039B1A4 (HalpIommuMapLogical.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     EtwpFreeTraceBuffer @ 0x14047E9DC (EtwpFreeTraceBuffer.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D0690 (HalpDmaAllocateContiguousMemory.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1404D1ACC (IvtBuildScalableModePasidDirectoryEntry.c)
 *     HvlSetQpcBias @ 0x1404F57A0 (HvlSetQpcBias.c)
 *     IvtBuildScalableModeContextEntry @ 0x1404F69D0 (IvtBuildScalableModeContextEntry.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053F11C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpHvStartVirtualProcessor @ 0x140549128 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054D144 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaControllerInitializeController @ 0x140550698 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptBuildStartupStub @ 0x140556970 (HalpInterruptBuildStartupStub.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140556F24 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405655F0 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140565654 (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x140565818 (HalpIommuMapLogicalRange.c)
 *     IvtLegacyBuildScalableModeContextEntry @ 0x14056D2A8 (IvtLegacyBuildScalableModeContextEntry.c)
 *     HsaAllocatePasidTables @ 0x14056F6EC (HsaAllocatePasidTables.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140580D20 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x140582884 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x140582938 (HvlpSetupSchedulerAssist.c)
 *     HvlpTryConfigureInterface @ 0x140588B0C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x140589208 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1405898AC (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140589958 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x140589A9C (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058A16C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14058A25C (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058BB50 (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x14058E8D0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x14058F310 (IoSetDumpRange.c)
 *     IopRemovePageDumpRange @ 0x140591F7C (IopRemovePageDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140592A54 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1405A46F4 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1405A4D20 (PnprRecopyAddress.c)
 *     PopGetNextTable @ 0x1405D0B64 (PopGetNextTable.c)
 *     RtlMarkHiberPhase @ 0x1405EF6A0 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x14060BA08 (SmEtwLogStoreCorruption.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MmStoreLogDecompressionFailure @ 0x14068DA68 (MmStoreLogDecompressionFailure.c)
 *     BgpFwLibraryEnable @ 0x140699184 (BgpFwLibraryEnable.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FD8C8 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406FD944 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407AFAA0 (EtwpBuildMdlForTraceBuffer.c)
 *     HalpCommitCR3Worker @ 0x140B50698 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140B5071C (HalpMapCR3Ex.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140B50810 (HalpMmBuildTiledMemoryMap.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B50948 (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140B54D50 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x140B5F384 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B5FCCC (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 *     PopBuildMemoryImageHeader @ 0x140B66A30 (PopBuildMemoryImageHeader.c)
 *     ViAllocateMapRegisterFile @ 0x140B89EAC (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     sub_140C0AE44 @ 0x140C0AE44 (sub_140C0AE44.c)
 *     IommupHvInitializeLibrary @ 0x140C16944 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140C1B9F4 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140C1BEB0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueuePinDriverAddressLog @ 0x140293B70 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x140293EF0 (MiVaToPfnEx.c)
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
    v14 = byte_140E38AE8[(((unsigned __int64)BaseAddress >> 39) & 0x1FF) - 256];
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
