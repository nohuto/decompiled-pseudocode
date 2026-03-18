/*
 * XREFs of ?IsOwner@FxCallbackMutexLock@@UEAAEXZ @ 0x14005F150
 * Callers:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14001AB4C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxCallbackMutexLock::IsOwner(FxCallbackSpinLock *this)
{
  return this->m_OwnerThread == KeGetCurrentThread();
}
