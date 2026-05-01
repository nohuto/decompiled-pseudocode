/*
 * XREFs of ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x18023B880
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x18023C8B0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802B7E2C (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 * Callees:
 *     TrySubmitThreadpoolCallback_0 @ 0x1802DB159 (TrySubmitThreadpoolCallback_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802DFC4C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 */

BOOL __fastcall winrt::impl::submit_threadpool_callback(winrt::impl *this, void (*a2)(void *, void *), void *a3)
{
  BOOL result; // eax
  winrt *v4; // rax
  const struct winrt::impl::slim_source_location *v5; // rdx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  result = TrySubmitThreadpoolCallback_0((PTP_SIMPLE_CALLBACK)this, a2, 0LL);
  if ( !result )
  {
    v4 = (winrt *)winrt::impl::slim_source_location::current(v6);
    winrt::throw_last_error(v4, v5);
  }
  return result;
}
