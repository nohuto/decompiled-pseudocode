/*
 * XREFs of ??1FxIoQueue@@UEAA@XZ @ 0x1400402F8
 * Callers:
 *     ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1400402C0 (--_EFxIoQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x140040708 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x140040748 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 */

void __fastcall FxIoQueue::~FxIoQueue(FxIoQueue *this)
{
  bool v1; // zf

  v1 = this->m_PkgIo == 0LL;
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxIoQueue::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxIoQueue::`vftable'{for `IFxHasCallbacks'};
  if ( !v1 )
    this->m_PkgIo = 0LL;
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxCallbackSpinLock::~FxCallbackSpinLock(&this->m_CallbackSpinLock);
  FxNonPagedObject::~FxNonPagedObject(this);
}
