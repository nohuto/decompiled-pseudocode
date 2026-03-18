/*
 * XREFs of ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x14004B570
 * Callers:
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x14004AD74 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x14004B760 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformEarlyDisposeWorkerAndUnlock(
        FxObject *this,
        unsigned __int8 OldIrql,
        unsigned __int8 CanDefer)
{
  $6669C56F21CC8E165773D928B9B8D396 *v3; // r14
  unsigned __int16 v7; // ax
  FxDeviceBase *m_DeviceBase; // rax
  FxDisposeList *m_DisposeList; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  $6669C56F21CC8E165773D928B9B8D396 *v13; // rcx
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *v15; // rcx
  const void *v16; // rdx

  v3 = &this->24;
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 3u);
      v13 = &this->24;
    }
    else
    {
      v13 = v3;
    }
    m_ObjectFlags = v3->m_ObjectFlags;
    v3 = v13;
    if ( m_ObjectFlags < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 3;
  }
  this->m_ObjectState = 3;
  if ( !CanDefer )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  v7 = v3->m_ObjectFlags;
  if ( (v3->m_ObjectFlags & 0x20) == 0 )
  {
    if ( (v7 & 0x10) != 0 && OldIrql )
    {
      v3 = &this->24;
      goto LABEL_8;
    }
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  }
LABEL_8:
  if ( (v7 & 0x200) != 0 )
  {
    v15 = this->m_Globals;
    if ( v15->FxVerboseOn )
    {
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_qqLL(v15, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v16, 3u, 5u);
    }
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 5;
  }
  m_DeviceBase = this->m_DeviceBase;
  this->m_ObjectState = 5;
  if ( m_DeviceBase )
    m_DisposeList = m_DeviceBase->m_DisposeList;
  else
    m_DisposeList = this->m_Globals->Driver->m_DisposeList;
  FxDisposeList::Add(m_DisposeList, this);
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  return 0;
}
