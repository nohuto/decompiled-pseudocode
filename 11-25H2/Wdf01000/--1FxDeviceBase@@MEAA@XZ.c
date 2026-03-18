/*
 * XREFs of ??1FxDeviceBase@@MEAA@XZ @ 0x14004D964
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x14004D4A8 (--1FxDevice@@UEAA@XZ.c)
 *     ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1400940E0 (--_GFxDeviceBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDeviceBase::~FxDeviceBase(FxDeviceBase *this)
{
  FxDisposeList *m_DisposeList; // rcx
  FxCallbackLock *m_CallbackLockPtr; // rcx

  this->FxNonPagedObject::FxObject::__vftable = (FxDeviceBase_vtbl *)FxDeviceBase::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
  {
    m_DisposeList->DeleteObject(m_DisposeList);
    this->m_DisposeList = 0LL;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr )
  {
    ((void (__fastcall *)(FxCallbackLock *, __int64))m_CallbackLockPtr->~FxCallbackLock)(m_CallbackLockPtr, 1LL);
    this->m_CallbackLockPtr = 0LL;
  }
  FxNonPagedObject::~FxNonPagedObject(this);
}
