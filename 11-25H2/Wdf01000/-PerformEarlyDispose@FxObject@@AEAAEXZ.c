/*
 * XREFs of ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1400454D4
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140044FC0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x140045630 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140045EC0 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x140045C68 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x140045CD0 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140045EC0 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 */

char __fastcall FxObject::PerformEarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rbp
  char v3; // di
  KIRQL v4; // al
  unsigned int _a3; // r8d
  unsigned __int8 v6; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a3 = this->m_ObjectState;
  v6 = v4;
  if ( _a3 > 7 )
    goto LABEL_19;
  if ( _a3 == 7 )
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v4, 0);
  if ( !this->m_ObjectState )
    goto LABEL_19;
  if ( _a3 == 1 )
  {
    if ( _bittest16((const signed __int16 *)&this->24, 9u) )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, 3u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 3;
    }
    this->m_ObjectState = 3;
    return FxObject::PerformDisposingDisposeChildrenLocked(this, v6, 0);
  }
  if ( _a3 != 5 )
  {
LABEL_19:
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventPerformEarlyDispose);
    KeReleaseSpinLock(p_m_Lock, v6);
    return v3;
  }
  return FxObject::PerformDisposingDisposeChildrenLocked(this, v6, 0);
}
