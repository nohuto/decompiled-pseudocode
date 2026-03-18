/*
 * XREFs of MiObtainReferencedVadEx @ 0x1402FBE30
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiQueryImageExtensionInformation @ 0x140474954 (MiQueryImageExtensionInformation.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MmGetEnclaveModuleList @ 0x140680BD8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x1406F95A8 (MiHandleEnclaveFault.c)
 *     MmSetGraphicsPtes @ 0x1407EB910 (MmSetGraphicsPtes.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F2B54 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x1407F5F98 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F6184 (MmPrepareImagePagesForHotPatch.c)
 *     MiInitializeEnclave @ 0x1407F7674 (MiInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1407F7FC0 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x1407FDB40 (MiScrubProcessLargePage.c)
 *     MmGetImageInformation @ 0x140837878 (MmGetImageInformation.c)
 *     MmGetFileNameForAddress @ 0x140838768 (MmGetFileNameForAddress.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MmDeleteTeb @ 0x1408DB490 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x1408DB8A0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E9914 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x1409E9AAC (MiCfgMarkValidEntries.c)
 *     MmSecureVirtualMemoryEx @ 0x1409EA790 (MmSecureVirtualMemoryEx.c)
 *     MiCheckShadowStackOverflow @ 0x140A28288 (MiCheckShadowStackOverflow.c)
 *     MmRotatePhysicalView @ 0x140A2E770 (MmRotatePhysicalView.c)
 *     MiQuerySingleLoadedPatch @ 0x140A32534 (MiQuerySingleLoadedPatch.c)
 *     NtResetWriteWatch @ 0x140A3C540 (NtResetWriteWatch.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A4B09C (MmSelectVsmEnclaveByAddress.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5EAF4 (MmStoreFreeVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A61744 (MiUnmapLockedPagesInUserSpace.c)
 *     MiReferenceCfgVad @ 0x140A954F0 (MiReferenceCfgVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVadShared @ 0x1402BA960 (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, __int64 a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v6; // bp
  _KPROCESS *Process; // r13
  unsigned __int64 v8; // r14
  __int64 Address; // rbx
  unsigned __int64 v10; // rsi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int8)MiLockVadTree(0, a2, (__int64)a3);
  Address = MiLocateAddress(a1);
  if ( !Address )
  {
    v20 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v20 = -1073741664;
    goto LABEL_25;
  }
  if ( (v6 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v20 = -1073741558;
LABEL_25:
    *a3 = v20;
    MiUnlockVadTree(0, v8);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v22, v21);
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(Address + 36)) )
    __fastfail(0xEu);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( (_BYTE)v8 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
    __writecr8(v8);
  }
  v10 = a1 >> 12;
  v11 = v6 & 2;
  if ( v11 )
  {
    MiLockVadShared(CurrentThread, Address);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v18 = KeAbPreAcquire(Address + 40, 0LL, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Address + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(Address + 40, v18, Address + 40);
    if ( v19 )
      *(_BYTE *)(v19 + 10) = 1;
    LODWORD(CurrentThread[1].Queue) |= 0x80u;
  }
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12);
  if ( (*(_DWORD *)(Address + 48) & 4) != 0 )
  {
    if ( v11 )
    {
      MiUnlockVadShared((__int64)CurrentThread, Address);
      MiLockVad((__int64)CurrentThread, Address);
    }
    MiWaitForVadDeletion(Address);
    MiUnlockAndDereferenceVad((PVOID)Address);
    v23 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v23 = -1073741664;
    *a3 = v23;
  }
  else
  {
    if ( v10 >= (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32))
      && v10 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      return Address;
    }
    if ( v11 )
      MiUnlockAndDereferenceVadShared(Address, v12, v14, v15);
    else
      MiUnlockAndDereferenceVad((PVOID)Address);
    *a3 = -1073741664;
  }
  return 0LL;
}
