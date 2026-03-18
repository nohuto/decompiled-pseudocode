/*
 * XREFs of ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1400461B8
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002C3B0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140034510 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x140044A20 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140044FC0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x140045630 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140045980 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x140045CD0 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140045EC0 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140046310 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall FxDisposeList::Add(FxDisposeList *this, FxObject *Object, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v6; // di
  _SINGLE_LIST_ENTRY *v7; // r8
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Next = this[-1].m_List.Next) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Next, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v7 = this->m_List.Next;
  *this->m_ListEnd = &Object->m_DisposeSingleEntry;
  this->m_ListEnd = &Object->m_DisposeSingleEntry.Next;
  if ( !v7 )
    FxSystemWorkItem::EnqueueWorker(
      this->m_SystemWorkItem,
      (void (__fastcall *)(void *))FxDisposeList::_WorkItemThunk,
      this,
      0);
  FxNonPagedObject::Unlock(this, v6, (unsigned __int8)v7);
}
