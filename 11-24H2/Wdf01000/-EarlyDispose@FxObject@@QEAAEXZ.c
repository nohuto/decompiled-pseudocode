/*
 * XREFs of ?EarlyDispose@FxObject@@QEAAEXZ @ 0x14004B220
 * Callers:
 *     imp_WdfRequestSend @ 0x14000A850 (imp_WdfRequestSend.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400412C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14004B198 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3210 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x14004B760 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::EarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  unsigned __int8 v4; // bp
  FxObject *m_ParentObject; // rdi
  KIRQL v6; // r15
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int16 v10; // ax
  unsigned __int16 m_ObjectFlags; // ax
  FxDeviceBase *m_DeviceBase; // rax
  FxDisposeList *m_DisposeList; // rcx
  _FX_DRIVER_GLOBALS *v16; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v19; // rdx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v4 = v3;
  if ( this->m_ObjectState != 1 )
  {
    KeReleaseSpinLock(p_m_Lock, v3);
    return 0;
  }
  m_ParentObject = this->m_ParentObject;
  if ( !m_ParentObject )
    goto LABEL_7;
  v6 = KeAcquireSpinLockRaiseToDpc(&m_ParentObject->m_SpinLock.m_Lock);
  if ( m_ParentObject->m_ObjectState == 1 )
  {
    Flink = this->m_ChildEntry.Flink;
    p_m_ChildEntry = &this->m_ChildEntry;
    if ( Flink->Blink != &this->m_ChildEntry || (Blink = this->m_ChildEntry.Blink, Blink->Flink != p_m_ChildEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    this->m_ChildEntry.Blink = &this->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v6);
    this->m_ParentObject = 0LL;
LABEL_7:
    v10 = this->m_ObjectFlags | 0x100;
    this->m_ObjectFlags = v10;
    if ( (v10 & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v19 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v19, this->m_ObjectState, 3u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 3;
    }
    m_ObjectFlags = this->m_ObjectFlags;
    this->m_ObjectState = 3;
    if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v4) )
      return FxObject::PerformDisposingDisposeChildrenLocked(this, v4, 1u);
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDisposing);
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase )
      m_DisposeList = m_DeviceBase->m_DisposeList;
    else
      m_DisposeList = this->m_Globals->Driver->m_DisposeList;
    FxDisposeList::Add(m_DisposeList, this);
    KeReleaseSpinLock(p_m_Lock, v4);
    return 0;
  }
  FxObject::TraceDroppedEvent(m_ParentObject, FxObjectDroppedEventRemoveChildObjectInternal);
  KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v6);
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    v16 = this->m_Globals;
    if ( v16->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(v16, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 7u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 7;
  }
  this->m_ObjectState = 7;
  KeReleaseSpinLock(p_m_Lock, v4);
  return 0;
}
