/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x1402BAFA0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MiDeprioritizeVad @ 0x1403FD204 (MiDeprioritizeVad.c)
 *     MiProbeAndLockPages @ 0x140420120 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x140438384 (IopProbeAndLockPages_0.c)
 *     MiFinishVadDeletion @ 0x14044C9BC (MiFinishVadDeletion.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiCheckLockUnlockByVa @ 0x14066EA6C (MiCheckLockUnlockByVa.c)
 *     MmSetGraphicsPtes @ 0x1407EB910 (MmSetGraphicsPtes.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x1407EDB58 (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F2B54 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x1407F5F98 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F6184 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x1407F7080 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1407F7674 (MiInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1407F7FC0 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x1407FDB40 (MiScrubProcessLargePage.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x1408DBC38 (MiFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 *     MiCleanVad @ 0x1408E5224 (MiCleanVad.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x1408F9980 (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E9914 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x1409E9AAC (MiCfgMarkValidEntries.c)
 *     MmSecureVirtualMemoryEx @ 0x1409EA790 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x140A2E770 (MmRotatePhysicalView.c)
 *     MiQuerySingleLoadedPatch @ 0x140A32534 (MiQuerySingleLoadedPatch.c)
 *     NtResetWriteWatch @ 0x140A3C540 (NtResetWriteWatch.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A4B09C (MmSelectVsmEnclaveByAddress.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A61744 (MiUnmapLockedPagesInUserSpace.c)
 *     MiCreatePatchSectionRequest @ 0x140AAB9A8 (MiCreatePatchSectionRequest.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(PVOID P)
{
  signed __int32 v2; // edx
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v4 = v2 == 0;
  LODWORD(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)P + 40);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
