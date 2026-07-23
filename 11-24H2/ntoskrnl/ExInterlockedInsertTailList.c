/*
 * XREFs of ExInterlockedInsertTailList @ 0x140420930
 * Callers:
 *     PopFxQueueWorkItem @ 0x1403AA2B4 (PopFxQueueWorkItem.c)
 *     IoWMIWriteEvent @ 0x1404206B0 (IoWMIWriteEvent.c)
 *     WheapWorkQueueAddItem @ 0x14042085C (WheapWorkQueueAddItem.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x140711D70 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockDisabled @ 0x140420A88 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _LIST_ENTRY *Blink; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
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
  }
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
