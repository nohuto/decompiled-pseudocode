/*
 * XREFs of MiObtainReferencedVadEx @ 0x1402A7A60
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x1406753B8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x1406ED838 (MiHandleEnclaveFault.c)
 *     MmSetGraphicsPtes @ 0x1407DBA70 (MmSetGraphicsPtes.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407E2CB4 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x1407E6108 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407E62F4 (MmPrepareImagePagesForHotPatch.c)
 *     MiInitializeEnclave @ 0x1407E77E4 (MiInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1407E8130 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x1407EDCB0 (MiScrubProcessLargePage.c)
 *     MmGetImageInformation @ 0x140898318 (MmGetImageInformation.c)
 *     MmGetFileNameForAddress @ 0x140899218 (MmGetFileNameForAddress.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     NtAreMappedFilesTheSame @ 0x1408D8E90 (NtAreMappedFilesTheSame.c)
 *     MmDeleteTeb @ 0x1408F6330 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     MmSecureVirtualMemoryEx @ 0x1409F0080 (MmSecureVirtualMemoryEx.c)
 *     MiProcessVaRangesInfoClass @ 0x1409FD8CC (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x1409FDA5C (MiCfgMarkValidEntries.c)
 *     MiQuerySingleLoadedPatch @ 0x140A1DB54 (MiQuerySingleLoadedPatch.c)
 *     MmRotatePhysicalView @ 0x140A28CF0 (MmRotatePhysicalView.c)
 *     MiCheckShadowStackOverflow @ 0x140A299E0 (MiCheckShadowStackOverflow.c)
 *     NtResetWriteWatch @ 0x140A37110 (NtResetWriteWatch.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A483EC (MmSelectVsmEnclaveByAddress.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5FD24 (MmStoreFreeVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A5FDD0 (MiUnmapLockedPagesInUserSpace.c)
 *     MiReferenceCfgVad @ 0x140A9ED54 (MiReferenceCfgVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     MiUnlockVadShared @ 0x1402A6620 (MiUnlockVadShared.c)
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
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
  __int64 *v18; // rax
  __int64 *v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int8)MiLockVadTree(0LL);
  Address = MiLocateAddress(a1);
  if ( !Address )
  {
    v20 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v20 = -1073741664;
    goto LABEL_25;
  }
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v20 = -1073741558;
LABEL_25:
    *a3 = v20;
    MiUnlockVadTree(0LL, (unsigned __int8)v8);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v22, v21, v23, v24);
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
  v11 = a2 & 2;
  if ( v11 )
  {
    MiLockVadShared(CurrentThread, Address);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v18 = KeAbPreAcquire(Address + 40, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Address + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Address + 40), v18, Address + 40);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    LODWORD(CurrentThread[1].Queue) |= 0x80u;
  }
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  if ( (*(_DWORD *)(Address + 48) & 4) != 0 )
  {
    if ( v11 )
    {
      MiUnlockVadShared((__int64)CurrentThread, Address);
      MiLockVad((__int64)CurrentThread, Address);
    }
    MiWaitForVadDeletion(Address);
    MiUnlockAndDereferenceVad((PVOID)Address);
    v25 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v25 = -1073741664;
    *a3 = v25;
  }
  else
  {
    if ( v10 >= (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32))
      && v10 <= (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      return Address;
    }
    if ( v11 )
      MiUnlockAndDereferenceVadShared((PVOID)Address);
    else
      MiUnlockAndDereferenceVad((PVOID)Address);
    *a3 = -1073741664;
  }
  return 0LL;
}
