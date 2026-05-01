/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::DispatcherQueueHandler__lambda_711bfd1af15e27d1f27b55343e53885b___::Invoke_::_1_::catch$0 @ 0x1802EB13B
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::DispatcherQueueHandler__lambda_711bfd1af15e27d1f27b55343e53885b___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
