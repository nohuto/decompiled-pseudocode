/*
 * XREFs of KeSignalGate @ 0x140225608
 * Callers:
 *     MiZeroInParallelWorker @ 0x140224150 (MiZeroInParallelWorker.c)
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     PspDetachSession @ 0x1403D6470 (PspDetachSession.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140447AFC (MiUnlockControlAreaSectionExtend.c)
 *     PsWatchWorkingSet @ 0x14044C7A0 (PsWatchWorkingSet.c)
 *     KiGenericCallDpcInitiatorDpc @ 0x1404B6870 (KiGenericCallDpcInitiatorDpc.c)
 *     MiSubsectionProtosCreated @ 0x1404CFB8C (MiSubsectionProtosCreated.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405BD554 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     KiEpfComplete @ 0x1405BF2D8 (KiEpfComplete.c)
 *     MiDeleteExtentPfns @ 0x14066EFA0 (MiDeleteExtentPfns.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x1406779E8 (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiZeroHugeRangeWorker @ 0x14067A800 (MiZeroHugeRangeWorker.c)
 *     MiUnlinkAccelerator @ 0x140685BF0 (MiUnlinkAccelerator.c)
 *     MiScrubMemoryWorker @ 0x1407EDC40 (MiScrubMemoryWorker.c)
 *     sub_140BCFC70 @ 0x140BCFC70 (sub_140BCFC70.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSignalGate(_DWORD *SystemArgument1, int a2)
{
  _DWORD *v3; // rbx
  char CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  char v10; // cl

  v3 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v3);
  if ( !v3[1] )
  {
    v3[1] = 1;
    v6 = (_QWORD *)*((_QWORD *)v3 + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v6 == (_QWORD *)(v3 + 2) )
          goto LABEL_12;
        v7 = (_QWORD *)*v6;
        v8 = v6;
        v6 = v7;
        v9 = (_QWORD *)v8[1];
        if ( (_QWORD *)v7[1] != v8 || (_QWORD *)*v9 != v8 )
          __fastfail(3u);
        *v9 = v7;
        v7[1] = v9;
        v10 = *((_BYTE *)v8 + 16);
        if ( v10 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v8, *((unsigned __int16 *)v8 + 9), 0LL) )
        {
LABEL_11:
          if ( v3[1]-- == 1 )
            goto LABEL_12;
        }
      }
      if ( v10 == 2 )
      {
        *((_BYTE *)v8 + 17) = 5;
        KiInsertQueueInternal(v8[3], v8);
        goto LABEL_11;
      }
      if ( v10 == 4 )
      {
        *((_BYTE *)v8 + 17) = 5;
        v3[1] = 0;
        KeInsertQueueDpc((PRKDPC)v8[3], v3, v8);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v8, 256LL, 0LL);
      }
    }
  }
LABEL_12:
  _InterlockedAnd(v3, 0xFFFFFF7F);
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a2, CurrentIrql);
}
