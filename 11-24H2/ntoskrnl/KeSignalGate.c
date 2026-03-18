/*
 * XREFs of KeSignalGate @ 0x14030AB68
 * Callers:
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     MiZeroInParallelWorker @ 0x14030A090 (MiZeroInParallelWorker.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     PspDetachSession @ 0x140348AEC (PspDetachSession.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140445544 (MiUnlockControlAreaSectionExtend.c)
 *     PsWatchWorkingSet @ 0x14044BCD0 (PsWatchWorkingSet.c)
 *     MiFinishVadDeletion @ 0x14044C9BC (MiFinishVadDeletion.c)
 *     KiGenericCallDpcInitiatorDpc @ 0x1404B6360 (KiGenericCallDpcInitiatorDpc.c)
 *     MiSubsectionProtosCreated @ 0x1404CFC98 (MiSubsectionProtosCreated.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405C15C4 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     KiEpfComplete @ 0x1405C33B8 (KiEpfComplete.c)
 *     MiDeleteExtentPfns @ 0x14067A760 (MiDeleteExtentPfns.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x140683208 (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiZeroHugeRangeWorker @ 0x140686090 (MiZeroHugeRangeWorker.c)
 *     MiUnlinkAccelerator @ 0x140691050 (MiUnlinkAccelerator.c)
 *     MiScrubMemoryWorker @ 0x1407FDAD0 (MiScrubMemoryWorker.c)
 *     sub_140BE0C70 @ 0x140BE0C70 (sub_140BE0C70.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSignalGate(_DWORD *SystemArgument1, __int64 a2)
{
  _DWORD *v2; // rbx
  char CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v5; // r14
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  char v9; // cl

  v2 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v2);
  if ( !v2[1] )
  {
    v2[1] = 1;
    v5 = (_QWORD *)*((_QWORD *)v2 + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 == (_QWORD *)(v2 + 2) )
          goto LABEL_12;
        v6 = (_QWORD *)*v5;
        v7 = v5;
        v5 = v6;
        v8 = (_QWORD *)v7[1];
        if ( (_QWORD *)v6[1] != v7 || (_QWORD *)*v8 != v7 )
          __fastfail(3u);
        *v8 = v6;
        v6[1] = v8;
        v9 = *((_BYTE *)v7 + 16);
        if ( v9 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v7, *((unsigned __int16 *)v7 + 9), 0LL) )
        {
LABEL_11:
          if ( v2[1]-- == 1 )
            goto LABEL_12;
        }
      }
      if ( v9 == 2 )
      {
        *((_BYTE *)v7 + 17) = 5;
        KiInsertQueueInternal(v7[3], v7);
        goto LABEL_11;
      }
      if ( v9 == 4 )
      {
        *((_BYTE *)v7 + 17) = 5;
        v2[1] = 0;
        KeInsertQueueDpc((PRKDPC)v7[3], v2, v7);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v7, 256LL, 0LL);
      }
    }
  }
LABEL_12:
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return KiExitDispatcher(CurrentPrcb, CurrentIrql);
}
