/*
 * XREFs of ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1400090C0
 * Callers:
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140008EFC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140026330 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x14004C15C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::DeleteEarlyDisposedObject(FxObject *this)
{
  KIRQL v2; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v4; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  this->m_ObjectFlags |= 4u;
  if ( this->m_ParentObject )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    m_ParentObject = this->m_ParentObject;
    v4 = v2;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
        return;
      }
      this->m_ParentObject = 0LL;
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
  }
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xAu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 10;
  }
  this->m_ObjectState = 10;
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1248, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
