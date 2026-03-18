/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x14004B760
 * Callers:
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14004A730 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x14004AD74 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x14004B220 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x14004B570 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1400257B0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x14004AD74 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14004B118 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BBB0 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  $6669C56F21CC8E165773D928B9B8D396 *v3; // rdi
  bool v7; // zf
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *i; // rsi
  unsigned __int16 m_ObjectFlags; // cx
  FxObject *v13; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxDisposeList *m_DisposeList; // rcx
  KIRQL v16; // dl
  KIRQL v17; // di
  _FX_DRIVER_GLOBALS *v18; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v21; // rdx
  $6669C56F21CC8E165773D928B9B8D396 *v22; // rcx

  v3 = &this->24;
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v21, this->m_ObjectState, 4u);
      v22 = &this->24;
    }
    else
    {
      v22 = v3;
    }
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
    {
      v3 = v22;
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 4;
    }
  }
  v7 = (v3->m_ObjectFlags & 0x20) == 0;
  this->m_ObjectState = 4;
  if ( v7 || !OldIrql )
  {
    Flink = this->m_ChildListHead.Flink;
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( 1 )
    {
      if ( Flink == p_m_ChildListHead )
      {
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
        for ( i = this->m_ChildListHead.Flink; i != p_m_ChildListHead; i = i->Flink )
        {
          if ( !FxObject::PerformEarlyDispose((FxObject *)&i[-5].Blink) )
          {
            v17 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
            if ( CanDefer )
              FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
            else
              FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDisposing);
            v16 = v17;
            goto LABEL_24;
          }
        }
        if ( (!_bittest16((const signed __int16 *)&this->24, 0xBu) || this->Dispose(this))
          && _bittest16((const signed __int16 *)&this->24, 0xAu) )
        {
          FxObject::CallCleanupCallbacks(this);
        }
        m_ObjectFlags = this->m_ObjectFlags;
        if ( (m_ObjectFlags & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
        }
        else
        {
          if ( (m_ObjectFlags & 0x200) != 0 )
          {
            v18 = this->m_Globals;
            if ( v18->FxVerboseOn )
            {
              _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                _a2 = 0LL;
              WPP_IFR_SF_qqLL(v18, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 2u);
            }
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 2;
          }
          this->m_ObjectState = 2;
        }
        return 1;
      }
      if ( OldIrql && ((__int64)Flink[-3].Flink & 0x10) != 0 )
        break;
      Flink = Flink->Flink;
    }
    v13 = this;
    if ( !CanDefer )
      goto LABEL_49;
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDisposing);
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase )
      m_DisposeList = m_DeviceBase->m_DisposeList;
    else
      m_DisposeList = this->m_Globals->Driver->m_DisposeList;
    FxDisposeList::Add(m_DisposeList, this);
  }
  else
  {
    v13 = this;
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    else
LABEL_49:
      FxObject::SetObjectStateLocked(v13, FxObjectStateDeferedDisposing);
  }
  v16 = OldIrql;
LABEL_24:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
  return 0;
}
