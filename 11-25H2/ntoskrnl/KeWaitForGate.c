/*
 * XREFs of KeWaitForGate @ 0x140418844
 * Callers:
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiAttemptSectionDelete @ 0x14034E3B8 (MiAttemptSectionDelete.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlinkWorkingSet @ 0x14041773C (MiUnlinkWorkingSet.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiLockControlAreaSectionExtend @ 0x140417E10 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForPageWriteCompletion @ 0x140417F6C (MiWaitForPageWriteCompletion.c)
 *     MiWaitForZeroWorkers @ 0x140418074 (MiWaitForZeroWorkers.c)
 *     MiDrainControlAreaWrites @ 0x140419008 (MiDrainControlAreaWrites.c)
 *     MiIncrementLargeSubsections @ 0x1404C92E4 (MiIncrementLargeSubsections.c)
 *     KeSrcuFree @ 0x1405BCAE0 (KeSrcuFree.c)
 *     KiEpfStart @ 0x1405BF494 (KiEpfStart.c)
 *     KiExecuteDpc @ 0x1405C2BB0 (KiExecuteDpc.c)
 *     MiChangingSubsectionProtos @ 0x14066EB8C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140670670 (MiWaitForExtentDeletions.c)
 *     MiResolveAwePageConflict @ 0x1406776E8 (MiResolveAwePageConflict.c)
 *     MiDeleteHardwareAccelerators @ 0x14068566C (MiDeleteHardwareAccelerators.c)
 *     KeRcuSynchronize @ 0x14072FF70 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x140730930 (KeSrcuSynchronize.c)
 *     PspDereferenceSessionFinal @ 0x14076BEE0 (PspDereferenceSessionFinal.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140A0AC88 (PspQueryWorkingSetWatch.c)
 *     sub_140BC50B0 @ 0x140BC50B0 (sub_140BC50B0.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  $748129697366ACACF652522F4AB73961 *v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // ebp
  struct _LIST_ENTRY *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v7 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    CurrentThread->WaitIrql = CurrentIrql;
    v9 = KiBeginThreadWait((ULONG_PTR)CurrentThread, a3, a2, 0, 0);
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
