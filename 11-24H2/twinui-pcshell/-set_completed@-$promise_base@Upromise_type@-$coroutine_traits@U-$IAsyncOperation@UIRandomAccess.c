/*
 * XREFs of ?set_completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1800521FC
 * Callers:
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800521A4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOp.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180102F38 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180102F38.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x180052298 (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_base@Upromis.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 */

void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::set_completed(
        __int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v4[0] = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  v5 = *(_DWORD *)(a1 + 96);
  if ( !v5 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 96) = 1;
  }
  v2 = (__int64 *)(a1 + 80);
  if ( v4 == (__int64 *)(a1 + 80) )
  {
    v3 = v4[0];
  }
  else
  {
    v3 = *v2;
    *v2 = 0LL;
    v4[0] = v3;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 72));
  if ( v3 )
  {
    winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
      v4,
      a1,
      &v5);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
  }
}
