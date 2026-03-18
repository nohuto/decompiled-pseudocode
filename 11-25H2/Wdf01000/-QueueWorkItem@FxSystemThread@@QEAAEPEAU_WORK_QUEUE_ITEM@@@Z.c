/*
 * XREFs of ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140073F5C
 * Callers:
 *     ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140073F40 (-_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

char __fastcall FxSystemThread::QueueWorkItem(FxSystemThread *this, _WORK_QUEUE_ITEM *WorkItem, unsigned __int8 a3)
{
  char v3; // di
  unsigned __int8 v6; // si
  unsigned __int8 v7; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_Reaper.List.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( !this->m_Exit )
  {
    v3 = 1;
    Blink = this->m_WorkList.Blink;
    if ( Blink->Flink != &this->m_WorkList )
      __fastfail(3u);
    WorkItem->List.Blink = Blink;
    WorkItem->List.Flink = &this->m_WorkList;
    Blink->Flink = &WorkItem->List;
    this->m_WorkList.Blink = &WorkItem->List;
    KeSetEvent(&this->m_WorkEvent.m_Event, 0, 0);
  }
  FxNonPagedObject::Unlock(this, v6, v7);
  return v3;
}
