/*
 * XREFs of ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x140079E5C
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x140003DBC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x140005548 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?Dispose@FxWmiInstance@@UEAAEXZ @ 0x140079E10 (-Dispose@FxWmiInstance@@UEAAEXZ.c)
 *     imp_WdfWmiInstanceDeregister @ 0x14008D660 (imp_WdfWmiInstanceDeregister.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1400A7950 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DB44 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x14008DEA8 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 */

void __fastcall FxWmiProvider::RemoveInstance(FxWmiProvider *this, FxWmiInstance *Instance, unsigned __int8 a3)
{
  FxWmiIrpHandler *m_Parent; // rcx
  unsigned __int8 updated; // si
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // di
  _LIST_ENTRY *p_m_ListEntry; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxWmiIrpHandler *v12; // rcx
  unsigned int v13; // eax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  m_Parent = this->m_Parent;
  updated = 0;
  if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0 && m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
  {
    FxVerifierLock::Lock(
      (FxVerifierLock *)m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
      &irql,
      a3);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&m_Parent->m_NPLock.m_Lock);
  }
  p_m_ListEntry = &Instance->m_ListEntry;
  Flink = Instance->m_ListEntry.Flink;
  if ( Flink != &Instance->m_ListEntry )
  {
    if ( Flink->Blink != p_m_ListEntry || (Blink = Instance->m_ListEntry.Blink, Blink->Flink != p_m_ListEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    Instance->m_ListEntry.Blink = &Instance->m_ListEntry;
    p_m_ListEntry->Flink = p_m_ListEntry;
    v12 = this->m_Parent;
    v13 = this->m_NumInstances - 1;
    this->m_NumInstances = v13;
    if ( v12->m_RegisteredState == WmiRegistered )
    {
      if ( !v13 && (this->m_Flags & 2) == 0 )
        this->m_RemoveGuid = 1;
      updated = FxWmiIrpHandler::DeferUpdateLocked(v12, v8);
    }
  }
  FxNonPagedObject::Unlock(this->m_Parent, v8, v7);
  if ( updated )
    FxWmiIrpHandler::UpdateGuids(this->m_Parent);
}
