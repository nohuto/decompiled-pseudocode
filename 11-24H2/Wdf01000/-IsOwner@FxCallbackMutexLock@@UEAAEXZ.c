/*
 * XREFs of ?IsOwner@FxCallbackMutexLock@@UEAAEXZ @ 0x14005B900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxCallbackMutexLock::IsOwner(FxCallbackSpinLock *this)
{
  return this->m_OwnerThread == KeGetCurrentThread();
}
