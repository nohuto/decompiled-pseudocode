/*
 * XREFs of ??1?$unique_ptr@Uthreadpool_resume@impl@winrt@@U?$default_delete@Uthreadpool_resume@impl@winrt@@@std@@@std@@QEAA@XZ @ 0x1802CD3F4
 * Callers:
 *     ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z @ 0x180336950 (-fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z.c)
 *     _winrt::impl::resume_apartment_on_threadpool_::_1_::dtor$0 @ 0x1806DE13F (_winrt--impl--resume_apartment_on_threadpool_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<winrt::impl::threadpool_resume>::~unique_ptr<winrt::impl::threadpool_resume>(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
