/*
 * XREFs of KeWaitForGate @ 0x140271C4C
 * Callers:
 *     MiDrainControlAreaWrites @ 0x1402704C4 (MiDrainControlAreaWrites.c)
 *     MiUnlinkWorkingSet @ 0x140270560 (MiUnlinkWorkingSet.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiLockControlAreaSectionExtend @ 0x140270E50 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForPageWriteCompletion @ 0x140270FAC (MiWaitForPageWriteCompletion.c)
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     MiWaitForZeroWorkers @ 0x14027147C (MiWaitForZeroWorkers.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiAttemptSectionDelete @ 0x1403F25B4 (MiAttemptSectionDelete.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     MiIncrementLargeSubsections @ 0x1404C2B90 (MiIncrementLargeSubsections.c)
 *     KeSrcuFree @ 0x1405BE120 (KeSrcuFree.c)
 *     KiEpfStart @ 0x1405C0B44 (KiEpfStart.c)
 *     KiExecuteDpc @ 0x1405C4680 (KiExecuteDpc.c)
 *     MiChangingSubsectionProtos @ 0x14067B60C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14067D010 (MiWaitForExtentDeletions.c)
 *     MiResolveAwePageConflict @ 0x1406840F8 (MiResolveAwePageConflict.c)
 *     MiDeleteHardwareAccelerators @ 0x140691B9C (MiDeleteHardwareAccelerators.c)
 *     KeRcuSynchronize @ 0x14073A130 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x14073A880 (KeSrcuSynchronize.c)
 *     PspDereferenceSessionFinal @ 0x14077B930 (PspDereferenceSessionFinal.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140A0D6C8 (PspQueryWorkingSetWatch.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1403305F0 (KiBeginThreadWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  $0C9BAADE586F3878B709A13404AA1ECE *v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // ebp
  struct _LIST_ENTRY *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    CurrentThread->WaitIrql = CurrentIrql;
    v6 = KiBeginThreadWait((ULONG_PTR)CurrentThread, 0);
    if ( v6 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)v3;
    KiAcquireKobjectLockSafe(v3);
    if ( *(_DWORD *)(v3 + 4) )
    {
      *(_DWORD *)(v3 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread);
      return v6;
    }
    v7 = *(struct _LIST_ENTRY **)(v3 + 16);
    if ( v7->Flink != (struct _LIST_ENTRY *)(v3 + 8) )
      __fastfail(3u);
    v4->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v3 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v7;
    v7->Flink = (struct _LIST_ENTRY *)v4;
    *(_QWORD *)(v3 + 16) = v4;
    _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v6 = KiCommitThreadWait((ULONG_PTR)CurrentThread, 0, 0LL);
  }
  while ( v6 == 256 );
  return v6;
}
