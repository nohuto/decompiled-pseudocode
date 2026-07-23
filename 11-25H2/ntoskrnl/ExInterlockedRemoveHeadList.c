/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x1403546E0
 * Callers:
 *     PopFxProcessWorkPool @ 0x14034D940 (PopFxProcessWorkPool.c)
 *     WheapWorkQueueWorkerRoutine @ 0x140354510 (WheapWorkQueueWorkerRoutine.c)
 *     KiAltReturnWorkerRoutine @ 0x1405C5610 (KiAltReturnWorkerRoutine.c)
 *     WmipEventNotification @ 0x1409B3410 (WmipEventNotification.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockDisabled @ 0x140354784 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *Flink; // rbx
  char v5; // cl
  struct _LIST_ENTRY *v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  Flink = 0LL;
  v5 = ExpAcquireSpinLockDisabled(Lock);
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v6 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v6->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v6;
    v6->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return Flink;
}
