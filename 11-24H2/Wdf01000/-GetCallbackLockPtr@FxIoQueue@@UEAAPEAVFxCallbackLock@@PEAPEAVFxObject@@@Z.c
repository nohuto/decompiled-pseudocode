/*
 * XREFs of ?GetCallbackLockPtr@FxIoQueue@@UEAAPEAVFxCallbackLock@@PEAPEAVFxObject@@@Z @ 0x140071340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxCallbackLock *__fastcall FxIoQueue::GetCallbackLockPtr(FxIoQueue *this, FxCallbackMutexLock_vtbl **LockObject)
{
  if ( LockObject )
    *LockObject = this->m_CallbackMutexLock.__vftable;
  return (FxCallbackLock *)this->m_CallbackSpinLock.m_Lock.m_Lock;
}
