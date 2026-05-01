/*
 * XREFs of ?revoke_canceller@cancellable_promise@winrt@@QEAAXXZ @ 0x180338150
 * Callers:
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::cancellable_promise::revoke_canceller(winrt::cancellable_promise *this)
{
  __int64 i; // rax

  for ( i = _InterlockedExchange64((volatile __int64 *)this, 0LL);
        i == 1;
        i = _InterlockedExchange64((volatile __int64 *)this, 0LL) )
  {
    _Thrd_yield();
  }
}
