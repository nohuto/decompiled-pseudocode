/*
 * XREFs of KePulseEvent @ 0x14045EF70
 * Callers:
 *     MiPulseLowAvailableEvent @ 0x1402F2C10 (MiPulseLowAvailableEvent.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x14041FA20 (MmResourcesAvailable.c)
 *     MiPulseCommitSignal @ 0x1404CE238 (MiPulseCommitSignal.c)
 *     KeBalanceSetManager @ 0x1405C1BE0 (KeBalanceSetManager.c)
 *     DifKePulseEventWrapper @ 0x14062CF30 (DifKePulseEventWrapper.c)
 *     MiNotifyMemoryChange @ 0x1407EA2CC (MiNotifyMemoryChange.c)
 *     NtPulseEvent @ 0x1409E2F70 (NtPulseEvent.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char v4; // di
  PRKEVENT v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // r12d
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // r8
  struct _LIST_ENTRY *v15; // rdx
  __int64 v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  char v18; // cl
  KPRIORITY v20; // [rsp+68h] [rbp+10h]

  v20 = Increment;
  v4 = Event->Header.Type & 0x7F;
  v5 = Event;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Increment) = 2;
    LOBYTE(Event) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Event, Increment);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&v5->Header.Lock);
  SignalState = v5->Header.SignalState;
  if ( !SignalState )
  {
    v5->Header.SignalState = 1;
    p_WaitListHead = &v5->Header.WaitListHead;
    Flink = v5->Header.WaitListHead.Flink;
    if ( !v4 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
        {
          v5->Header.WaitListHead.Blink = &v5->Header.WaitListHead;
          v5->Header.WaitListHead.Flink = &v5->Header.WaitListHead;
          goto LABEL_10;
        }
        v11 = (__int64)Flink;
        Flink = Flink->Flink;
        v12 = *(_BYTE *)(v11 + 16);
        if ( v12 == 1 )
          break;
        if ( v12 == 2 )
        {
          *(_BYTE *)(v11 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v11 + 24), (__int64 *)v11);
        }
        else if ( v12 == 4 )
        {
          *(_BYTE *)(v11 + 17) = 5;
          v5->Header.SignalState = 0;
          KeInsertQueueDpc(*(PRKDPC *)(v11 + 24), v5, (PVOID)v11);
        }
        else
        {
          v13 = 256LL;
LABEL_8:
          KiTryUnwaitThread((__int64)CurrentPrcb, v11, v13, 0LL);
        }
      }
      v13 = *(unsigned __int16 *)(v11 + 18);
      goto LABEL_8;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
          goto LABEL_10;
        v15 = Flink->Flink;
        v16 = (__int64)Flink;
        Flink = v15;
        v17 = *(struct _LIST_ENTRY **)(v16 + 8);
        if ( v15->Blink != (struct _LIST_ENTRY *)v16 || v17->Flink != (struct _LIST_ENTRY *)v16 )
          __fastfail(3u);
        v17->Flink = v15;
        v15->Blink = v17;
        v18 = *(_BYTE *)(v16 + 16);
        if ( v18 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
        {
LABEL_21:
          if ( v5->Header.SignalState-- == 1 )
            goto LABEL_10;
        }
      }
      if ( v18 == 2 )
      {
        *(_BYTE *)(v16 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (__int64 *)v16);
        goto LABEL_21;
      }
      if ( v18 == 4 )
      {
        *(_BYTE *)(v16 + 17) = 5;
        v5->Header.SignalState = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v16 + 24), v5, (PVOID)v16);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
      }
    }
  }
LABEL_10:
  v5->Header.SignalState = 0;
  _InterlockedAnd(&v5->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, Wait != 0 ? 3 : 0, 1u, v20, CurrentIrql);
  return SignalState;
}
