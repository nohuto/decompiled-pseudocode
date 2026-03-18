/*
 * XREFs of ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1400055F8
 * Callers:
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x140005548 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x140055210 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiInstanceRegister @ 0x14007E600 (imp_WdfWmiInstanceRegister.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1400A7950 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x140005748 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DB44 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x14008DEA8 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 */

__int64 __fastcall FxWmiProvider::AddInstance(
        FxWmiProvider *this,
        FxWmiInstance *Instance,
        unsigned __int8 NoErrorIfPresent)
{
  FxWmiIrpHandler *m_Parent; // rcx
  unsigned __int8 v7; // di
  int v8; // eax
  unsigned __int8 updated; // si
  unsigned int v10; // ebp
  const void *_a2; // r10
  const void *_a1; // rsi
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 update; // [rsp+78h] [rbp+20h] BYREF

  irql = 0;
  update = 0;
  if ( (this->m_Flags & 4) != 0 )
  {
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    _a1 = (const void *)((unsigned __int64)Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Instance->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, _a1, _a2, 0xC0000010);
    return 3221225488LL;
  }
  else
  {
    m_Parent = this->m_Parent;
    if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0 && m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
    {
      FxVerifierLock::Lock(
        (FxVerifierLock *)m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
        &irql,
        NoErrorIfPresent);
      v7 = irql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&m_Parent->m_NPLock.m_Lock);
    }
    v8 = FxWmiProvider::AddInstanceLocked(this, Instance, NoErrorIfPresent, &update, AddInstanceToTail);
    updated = update;
    v10 = v8;
    if ( update )
      updated = FxWmiIrpHandler::DeferUpdateLocked(this->m_Parent, v7);
    FxNonPagedObject::Unlock(this->m_Parent, v7);
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(this->m_Parent);
    return v10;
  }
}
