/*
 * XREFs of MiObtainReferencedVadEx @ 0x140344D30
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MmGetEnclaveModuleList @ 0x140681DD8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x1406F71E8 (MiHandleEnclaveFault.c)
 *     MmSetGraphicsPtes @ 0x1407EBEE0 (MmSetGraphicsPtes.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F3124 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x1407F6688 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F68F8 (MmPrepareImagePagesForHotPatch.c)
 *     MiInitializeEnclave @ 0x1407F7DE8 (MiInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1407F8730 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x1407FE2B0 (MiScrubProcessLargePage.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MmDeleteTeb @ 0x1408D96BC (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E48D4 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 *     MmSecureVirtualMemoryEx @ 0x1409E5080 (MmSecureVirtualMemoryEx.c)
 *     MmGetImageInformation @ 0x1409F9444 (MmGetImageInformation.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     MiCheckShadowStackOverflow @ 0x140A1CD08 (MiCheckShadowStackOverflow.c)
 *     MmRotatePhysicalView @ 0x140A231B0 (MmRotatePhysicalView.c)
 *     MiQuerySingleLoadedPatch @ 0x140A2654C (MiQuerySingleLoadedPatch.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 *     NtResetWriteWatch @ 0x140A31D20 (NtResetWriteWatch.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A41D1C (MmSelectVsmEnclaveByAddress.c)
 *     MmStoreFreeVirtualMemory @ 0x140A56CE4 (MmStoreFreeVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 *     MiReferenceCfgVad @ 0x140A91CA0 (MiReferenceCfgVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiUnlockVadShared @ 0x1403620A0 (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, __int64 a2, int *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v7; // bp
  _KPROCESS *Process; // r13
  unsigned __int64 v9; // r14
  __int64 Address; // rbx
  unsigned __int64 v11; // rsi
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  char *v19; // rax
  char *v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = a2;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v9 = (unsigned __int8)MiLockVadTree(0, a2, (__int64)a3, a4);
  Address = MiLocateAddress(a1);
  if ( !Address )
  {
    v21 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v21 = -1073741664;
    goto LABEL_25;
  }
  if ( (v7 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v21 = -1073741558;
LABEL_25:
    *a3 = v21;
    MiUnlockVadTree(0, v9);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v23, v22, v24, v25);
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(Address + 36)) )
    __fastfail(0xEu);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( (_BYTE)v9 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
    __writecr8(v9);
  }
  v11 = a1 >> 12;
  v12 = v7 & 2;
  if ( v12 )
  {
    MiLockVadShared(CurrentThread, Address);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v19 = (char *)KeAbPreAcquire(Address + 40, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Address + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Address + 40), v19, Address + 40);
    if ( v20 )
      v20[10] = 1;
    LODWORD(CurrentThread[1].Queue) |= 0x80u;
  }
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  if ( (*(_DWORD *)(Address + 48) & 4) != 0 )
  {
    if ( v12 )
    {
      MiUnlockVadShared(CurrentThread, Address);
      MiLockVad((__int64)CurrentThread, Address);
    }
    MiWaitForVadDeletion(Address);
    MiUnlockAndDereferenceVad((PVOID)Address);
    v26 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v26 = -1073741664;
    *a3 = v26;
  }
  else
  {
    if ( v11 >= (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32))
      && v11 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      return Address;
    }
    if ( v12 )
      MiUnlockAndDereferenceVadShared(Address);
    else
      MiUnlockAndDereferenceVad((PVOID)Address);
    *a3 = -1073741664;
  }
  return 0LL;
}
