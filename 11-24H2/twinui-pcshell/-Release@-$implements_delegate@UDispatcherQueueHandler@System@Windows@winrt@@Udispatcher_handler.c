/*
 * XREFs of ?Release@?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@details@wil@@@impl@winrt@@UEAAIXZ @ 0x1802094C0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805B1598 (--1-$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@detai.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>::~implements_delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>(a1);
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
