/*
 * XREFs of ?reset@?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAAXPEAUINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@Z @ 0x1802CBA98
 * Callers:
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800EAAEC (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x180249020 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     ??1?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAA@XZ @ 0x1802D0C40 (--1-$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U-$default_delete@UINIT.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1INIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x1803ED688 (--1INIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::reset(
        LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA **a1)
{
  LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA::~INIT_THREAD_DATA(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
