/*
 * XREFs of KeWaitForGate @ 0x140415DEC
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiAttemptSectionDelete @ 0x140314F64 (MiAttemptSectionDelete.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     MiLockControlAreaSectionExtend @ 0x140414FF0 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForPageWriteCompletion @ 0x14041514C (MiWaitForPageWriteCompletion.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     MiWaitForZeroWorkers @ 0x14041561C (MiWaitForZeroWorkers.c)
 *     MiUnlinkWorkingSet @ 0x140416DF8 (MiUnlinkWorkingSet.c)
 *     MiDrainControlAreaWrites @ 0x140416FA4 (MiDrainControlAreaWrites.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 *     KeSrcuFree @ 0x1405C0B50 (KeSrcuFree.c)
 *     KiEpfStart @ 0x1405C3574 (KiEpfStart.c)
 *     KiExecuteDpc @ 0x1405C6F50 (KiExecuteDpc.c)
 *     MiChangingSubsectionProtos @ 0x14067A42C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14067BE30 (MiWaitForExtentDeletions.c)
 *     MiResolveAwePageConflict @ 0x140682F08 (MiResolveAwePageConflict.c)
 *     MiDeleteHardwareAccelerators @ 0x140690ACC (MiDeleteHardwareAccelerators.c)
 *     KeRcuSynchronize @ 0x14073C200 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x14073C950 (KeSrcuSynchronize.c)
 *     PspDereferenceSessionFinal @ 0x14077BA80 (PspDereferenceSessionFinal.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140A147AC (PspQueryWorkingSetWatch.c)
 *     sub_140BD60B0 @ 0x140BD60B0 (sub_140BD60B0.c)
 *     sub_140BDF96C @ 0x140BDF96C (sub_140BDF96C.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140209010 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // r15d
  __int64 v6; // rbx
  $170BED6759C51D14495B6D160899A925 *v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // ebp
  struct _LIST_ENTRY *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v6 = a1;
  v7 = &CurrentThread->320;
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
    v9 = KiBeginThreadWait((ULONG_PTR)CurrentThread, a3, v5, 0, 0);
    if ( v9 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)v6;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v6);
    if ( *(_DWORD *)(v6 + 4) )
    {
      *(_DWORD *)(v6 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread, 0);
      return v9;
    }
    v10 = *(struct _LIST_ENTRY **)(v6 + 16);
    if ( v10->Flink != (struct _LIST_ENTRY *)(v6 + 8) )
      __fastfail(3u);
    v7->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v6 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    v10->Flink = (struct _LIST_ENTRY *)v7;
    *(_QWORD *)(v6 + 16) = v7;
    _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v9 = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, 0, 0LL, 0, 0LL);
  }
  while ( v9 == 256 );
  return v9;
}
