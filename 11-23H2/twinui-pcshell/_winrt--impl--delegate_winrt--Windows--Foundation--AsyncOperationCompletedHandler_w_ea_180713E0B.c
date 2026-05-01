/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStream___lambda_ca0d86618838526d860e51cc8ad0ffdb___::Invoke_::_1_::catch$3 @ 0x180713E0B
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStream___lambda_ca0d86618838526d860e51cc8ad0ffdb___::Invoke_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
