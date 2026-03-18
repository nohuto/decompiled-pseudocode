/*
 * XREFs of ?GetCallbackLockPtr@FxDriver@@UEAAPEAVFxCallbackLock@@PEAPEAVFxObject@@@Z @ 0x140095450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxCallbackLock *__fastcall FxDriver::GetCallbackLockPtr(FxDriver *this, FxCallbackMutexLock_vtbl **LockObject)
{
  if ( LockObject )
    *LockObject = this->m_CallbackMutexLock.__vftable;
  return *(FxCallbackLock **)&this->m_ExecutionLevel;
}
