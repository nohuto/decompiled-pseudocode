/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x1403BF004
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiCompleteDirectSwitchThread(struct _KPRCB *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 updated; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rdi
  signed __int32 *SchedulerAssist; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int64 v10; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  result = *(unsigned int *)(a2 + 120);
  if ( (result & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = updated;
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    Next = a1->DeferredReadyListHead.Next;
    if ( Next )
    {
      v10 = *(_QWORD *)(a2 + 32);
      if ( v10 > v7 )
        Next[-23].Next = (struct _SINGLE_LIST_ENTRY *)((char *)Next[-23].Next + v10 - v7);
    }
    result = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = v7;
  }
  return result;
}
