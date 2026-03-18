/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x14027FA58
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiCompleteDirectSwitchThread(struct _KPRCB *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 updated; // rax
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
