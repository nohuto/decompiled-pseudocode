/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x14004A860
 * Callers:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14003246C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038290 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x140039820 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x14004A4E0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x140095490 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1400A9430 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1400257B0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140026330 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x14004AD74 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14004B118 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BBB0 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x14004C15C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  KIRQL v2; // al
  int m_ObjectState; // ecx
  KIRQL v4; // r15
  FxObject *m_ParentObject; // rdi
  KIRQL v6; // bp
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  bool v11; // zf
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *i; // rsi
  FxDeviceBase *m_DeviceBase; // rax
  FxDisposeList *m_DisposeList; // rcx
  KIRQL v17; // dl
  KIRQL v18; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v21; // rcx
  const void *v22; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v4 = v2;
  this->m_ObjectFlags |= 4u;
  if ( m_ObjectState == 1 )
  {
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&m_ParentObject->m_SpinLock.m_Lock);
      if ( m_ParentObject->m_ObjectState != 1 )
      {
        FxObject::TraceDroppedEvent(m_ParentObject, FxObjectDroppedEventRemoveChildObjectInternal);
        KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v6);
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
        return;
      }
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
    }
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v4 )
      goto LABEL_30;
    if ( (m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 9u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 9;
    }
    v11 = (this->m_ObjectFlags & 0x20) == 0;
    this->m_ObjectState = 9;
    if ( !v11 && v4 )
    {
LABEL_30:
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
LABEL_27:
      v17 = v4;
LABEL_28:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v17);
    }
    else
    {
      v12 = this->m_ChildListHead.Flink;
      p_m_ChildListHead = &this->m_ChildListHead;
      while ( v12 != p_m_ChildListHead )
      {
        if ( v4 && ((__int64)v12[-3].Flink & 0x10) != 0 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDeleting);
          m_DeviceBase = this->m_DeviceBase;
          if ( m_DeviceBase )
            m_DisposeList = m_DeviceBase->m_DisposeList;
          else
            m_DisposeList = this->m_Globals->Driver->m_DisposeList;
          FxDisposeList::Add(m_DisposeList, this);
          goto LABEL_27;
        }
        v12 = v12->Flink;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
      for ( i = p_m_ChildListHead->Flink; i != p_m_ChildListHead; i = i->Flink )
      {
        if ( !FxObject::PerformEarlyDispose((FxObject *)&i[-5].Blink) )
        {
          v18 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
          FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
          v17 = v18;
          goto LABEL_28;
        }
      }
      if ( (!_bittest16((const signed __int16 *)&this->24, 0xBu) || this->Dispose(this))
        && _bittest16((const signed __int16 *)&this->24, 0xAu) )
      {
        FxObject::CallCleanupCallbacks(this);
      }
      if ( _bittest16((const signed __int16 *)&this->24, 9u) )
      {
        v21 = this->m_Globals;
        if ( v21->FxVerboseOn )
        {
          v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v22 = 0LL;
          WPP_IFR_SF_qqLL(v21, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v22, this->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 10;
      }
      this->m_ObjectState = 10;
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1248, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
    }
  }
  else
  {
    if ( m_ObjectState == 2 )
      JUMPOUT(0x14004AACDLL);
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventDeleteObject);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
  }
}
