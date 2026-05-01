/*
 * XREFs of ??1?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAA@XZ @ 0x1802D0C40
 * Callers:
 *     _LockScreenDirectorServiceProviderImpl::s_RunDirectorThread_::_1_::dtor$0 @ 0x1806E7321 (_LockScreenDirectorServiceProviderImpl--s_RunDirectorThread_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::~unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>(
        LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA **a1)
{
  wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::reset(a1);
}
