/*
 * XREFs of MmGetPhysicalAddress @ 0x1402AB2E0
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HalpIommuMapLogical @ 0x14026EAD0 (HalpIommuMapLogical.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1402AA064 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     HalpAcpiAccessSecureAddress @ 0x1402AB1B0 (HalpAcpiAccessSecureAddress.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140397098 (SmPrepareForFatalHeapCorruption.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     HalAllocateCommonBufferExV2 @ 0x140414B70 (HalAllocateCommonBufferExV2.c)
 *     EtwTraceContAllocationEvent @ 0x140416CF0 (EtwTraceContAllocationEvent.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14043C4C0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HsaUpdateDeviceTableEntry @ 0x140449444 (HsaUpdateDeviceTableEntry.c)
 *     HvlpSlowFlushListTbEx @ 0x1404518A8 (HvlpSlowFlushListTbEx.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     EtwpFreeTraceBuffer @ 0x140482D30 (EtwpFreeTraceBuffer.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D83A0 (HalpDmaAllocateContiguousMemory.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1404D95FC (IvtBuildScalableModePasidDirectoryEntry.c)
 *     HvlSetQpcBias @ 0x1404F56C0 (HvlSetQpcBias.c)
 *     IvtBuildScalableModeContextEntry @ 0x1404F6A2C (IvtBuildScalableModeContextEntry.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053EFEC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpHvStartVirtualProcessor @ 0x140548F78 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C488 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054CEA4 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaControllerInitializeController @ 0x140550458 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptBuildStartupStub @ 0x1405566DC (HalpInterruptBuildStartupStub.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405569F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x140564F30 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140564F94 (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x140565158 (HalpIommuMapLogicalRange.c)
 *     IvtLegacyBuildScalableModeContextEntry @ 0x14056CB18 (IvtLegacyBuildScalableModeContextEntry.c)
 *     HsaAllocatePasidTables @ 0x14056EF5C (HsaAllocatePasidTables.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405801F0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x140581D54 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x140581E08 (HvlpSetupSchedulerAssist.c)
 *     HvlpTryConfigureInterface @ 0x1405881AC (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x1405888A8 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x140588E9C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140588F48 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14058908C (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058975C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14058984C (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058B350 (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x14058E080 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x14058EAC0 (IoSetDumpRange.c)
 *     IopRemovePageDumpRange @ 0x140591758 (IopRemovePageDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140592224 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1405A3EF4 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1405A4520 (PnprRecopyAddress.c)
 *     PopGetNextTable @ 0x1405CE9EC (PopGetNextTable.c)
 *     RtlMarkHiberPhase @ 0x1405E5D10 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x14060141C (SmEtwLogStoreCorruption.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140603150 (SmRecordDecompressionFailureDumpPayload.c)
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 *     MmStoreLogDecompressionFailure @ 0x1406810A8 (MmStoreLogDecompressionFailure.c)
 *     BgpFwLibraryEnable @ 0x14068CDB4 (BgpFwLibraryEnable.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406F3E98 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406F3F14 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x1407042F8 (VslStartSecureProcessor.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407A0280 (EtwpBuildMdlForTraceBuffer.c)
 *     HalpCommitCR3Worker @ 0x140B3E648 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140B3E6CC (HalpMapCR3Ex.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140B3E7C0 (HalpMmBuildTiledMemoryMap.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B3E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140B42D00 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x140B4D274 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140B4DB88 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140B4DFC0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B4E968 (PopWriteHiberPages.c)
 *     PopBuildMemoryImageHeader @ 0x140B54810 (PopBuildMemoryImageHeader.c)
 *     ViAllocateMapRegisterFile @ 0x140B77ECC (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     sub_140BF7E44 @ 0x140BF7E44 (sub_140BF7E44.c)
 *     IommupHvInitializeLibrary @ 0x140C038B4 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140C0891C (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140C08DD8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfnEx @ 0x1402AB010 (MiVaToPfnEx.c)
 *     MiQueuePinDriverAddressLog @ 0x1402ABB78 (MiQueuePinDriverAddressLog.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  PHYSICAL_ADDRESS v1; // rdi
  PHYSICAL_ADDRESS v3; // rbx
  __int64 v4; // r11
  int v5; // r14d
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // r14d
  int v13; // eax
  volatile signed __int64 *v15; // r8
  signed __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  _KPROCESS *v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v25; // rdx
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
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v22 = *(_QWORD *)v7;
      if ( (v8 & 1) == 0 )
        goto LABEL_6;
      if ( ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v25 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v25 & 0x20) != 0 )
              LOBYTE(v22) = v8 | 0x20;
            LOBYTE(v8) = v22 | 0x42;
            if ( (v25 & 0x42) == 0 )
              LOBYTE(v8) = v22;
          }
        }
      }
    }
    if ( (v8 & 1) == 0 )
      break;
    if ( (v8 & 0x80u) != 0LL )
    {
      if ( !v5 )
        goto LABEL_6;
      v17 = MiVaToPfnEx((unsigned __int64)BaseAddress);
      MI_READ_PTE_LOCK_FREE(*(&v28 + v5));
      goto LABEL_21;
    }
    if ( v6 == 1 )
      goto LABEL_6;
  }
  do
  {
LABEL_6:
    v9 = *(&v27 + v4--);
    v10 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v18 = *(_QWORD *)v9;
      if ( (v10 & 1) == 0 )
        goto LABEL_13;
      if ( ((v10 & 0x42) == 0 || (v10 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v19 = KeGetCurrentThread()->ApcState.Process;
        if ( v19->AddressPolicy != 1 )
        {
          v20 = v19[2].KernelWaitTime;
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v21 & 0x20) != 0 )
              LOBYTE(v18) = v10 | 0x20;
            LOBYTE(v10) = v18 | 0x42;
            if ( (v21 & 0x42) == 0 )
              LOBYTE(v10) = v18;
          }
        }
      }
    }
    if ( (v10 & 1) == 0 )
      goto LABEL_13;
  }
  while ( v4 != 1 );
  v11 = *(_QWORD *)v28;
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
  {
    v12 = 0;
  }
  else
  {
    v12 = byte_140E38768[(((unsigned __int64)BaseAddress >> 39) & 0x1FF) - 256];
    if ( v12 == 11 )
      MiQueuePinDriverAddressLog(BaseAddress, *(_QWORD *)v28, 0LL);
  }
  if ( (v11 & 1) == 0 )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
  if ( v12 == 4 )
  {
    v15 = (volatile signed __int64 *)v28;
    v16 = *(_QWORD *)v28;
    if ( (*(_QWORD *)v28 & 0x200LL) == 0 )
    {
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v26 = v16;
        v16 = _InterlockedCompareExchange64(v15, v16 | 0x220, v16);
      }
      while ( v26 != v16 && (v16 & 0x200) == 0 );
    }
    v11 = *(_QWORD *)v28;
  }
  v17 = (v11 >> 12) & 0xFFFFFFFFFFLL;
LABEL_21:
  v13 = 1;
  v3.QuadPart = __PAIR64__(v17 >> 20, ((_DWORD)v17 << 12) + ((unsigned __int16)BaseAddress & 0xFFFu));
LABEL_14:
  if ( v13 )
    return v3;
  return v1;
}
