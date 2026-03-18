/*
 * XREFs of ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006DDA8
 * Callers:
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x14004A4E0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14004C790 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DC20 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DEE8 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::Deregister(FxWmiIrpHandler *this)
{
  unsigned __int8 v2; // r8
  char m_ObjectFlags; // al
  char v4; // di
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  NTSTATUS _a1; // eax
  _LIST_ENTRY *Flink; // rcx
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&event.m_Event.m_Event, SynchronizationEvent, 0);
  m_ObjectFlags = this->m_ObjectFlags;
  v4 = 0;
  event.m_Event.m_DbgFlagIsInitialized = 1;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v2);
    v5 = irql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_RegisteredState == WmiRegistered )
  {
    this->m_RegisteredState = WmiDeregistered;
    if ( this->m_WorkItemQueued )
      this->m_WorkItemEvent = (_KEVENT *)&event;
    v4 = 1;
  }
  FxNonPagedObject::Unlock(this, v5, v6);
  if ( this->m_WorkItemEvent )
    FxCREvent::EnterCRAndWaitAndLeave(&event);
  if ( v4 )
  {
    FxWmiIrpHandler::DecrementUpdateCount(this);
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_UpdateEvent);
    _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 2u);
    if ( _a1 < 0 )
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
  }
}
