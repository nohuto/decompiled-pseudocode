/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke_::_1_::catch$3 @ 0x1806A30D7
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 40) = *winrt::to_hresult((_DWORD *)(a2 + 40));
  return 0LL;
}
