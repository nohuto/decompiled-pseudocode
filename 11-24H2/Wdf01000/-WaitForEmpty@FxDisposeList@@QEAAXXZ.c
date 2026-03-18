/*
 * XREFs of ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x14004C30C
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400412C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?Dispose@FxDriver@@UEAAEXZ @ 0x14004C760 (-Dispose@FxDriver@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14004C790 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x140094180 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x14004A6B4 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::WaitForEmpty(FxDisposeList *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // r8
  char v6; // di
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Next = this[-1].m_List.Next) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Next, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  v6 = 1;
  if ( this->m_WorkItemThread == KeGetCurrentThread() )
  {
    FxDisposeList::DrainListLocked(this, &irql);
    v6 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  if ( v6 )
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_SystemWorkItem->m_WorkItemCompleted);
}
