/*
 * XREFs of KeSignalGate @ 0x140314A48
 * Callers:
 *     KiGenericCallDpcInitiatorDpc @ 0x1402700D0 (KiGenericCallDpcInitiatorDpc.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     MiZeroInParallelWorker @ 0x140313F70 (MiZeroInParallelWorker.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     PspDetachSession @ 0x1403C252C (PspDetachSession.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14043D6F4 (MiUnlockControlAreaSectionExtend.c)
 *     PsWatchWorkingSet @ 0x140442E10 (PsWatchWorkingSet.c)
 *     MiFinishVadDeletion @ 0x1404438BC (MiFinishVadDeletion.c)
 *     MiSubsectionProtosCreated @ 0x1404C8D48 (MiSubsectionProtosCreated.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405BEB94 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     KiEpfComplete @ 0x1405C0988 (KiEpfComplete.c)
 *     MiDeleteExtentPfns @ 0x14067B940 (MiDeleteExtentPfns.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x1406843F8 (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiZeroHugeRangeWorker @ 0x1406871C0 (MiZeroHugeRangeWorker.c)
 *     MiUnlinkAccelerator @ 0x140692120 (MiUnlinkAccelerator.c)
 *     MiScrubMemoryWorker @ 0x1407FE240 (MiScrubMemoryWorker.c)
 *     sub_140BE2C70 @ 0x140BE2C70 (sub_140BE2C70.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeSignalGate(volatile signed __int32 *SystemArgument1, __int64 a2)
{
  unsigned int v2; // ebp
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v6; // r14
  volatile signed __int32 *v7; // rdx
  __int64 v8; // rax
  volatile signed __int32 **v9; // rcx
  char v10; // cl

  v2 = a2;
  v3 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v3);
  if ( !*((_DWORD *)v3 + 1) )
  {
    *((_DWORD *)v3 + 1) = 1;
    v6 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v6 == v3 + 2 )
          goto LABEL_12;
        v7 = *(volatile signed __int32 **)v6;
        v8 = (__int64)v6;
        v6 = v7;
        v9 = *(volatile signed __int32 ***)(v8 + 8);
        if ( *((_QWORD *)v7 + 1) != v8 || *v9 != (volatile signed __int32 *)v8 )
          __fastfail(3u);
        *v9 = v7;
        *((_QWORD *)v7 + 1) = v9;
        v10 = *(_BYTE *)(v8 + 16);
        if ( v10 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v8, *(unsigned __int16 *)(v8 + 18), 0LL) )
        {
LABEL_11:
          if ( (*((_DWORD *)v3 + 1))-- == 1 )
            goto LABEL_12;
        }
      }
      if ( v10 == 2 )
      {
        *(_BYTE *)(v8 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v8 + 24), (__int64 *)v8);
        goto LABEL_11;
      }
      if ( v10 == 4 )
      {
        *(_BYTE *)(v8 + 17) = 5;
        *((_DWORD *)v3 + 1) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v8 + 24), (PVOID)v3, (PVOID)v8);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v8, 256LL, 0LL);
      }
    }
  }
LABEL_12:
  _InterlockedAnd(v3, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, v2, CurrentIrql);
}
