/*
 * XREFs of _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs_::InitializeViewDependent_::_1_::catch$1 @ 0x1802C7150
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs_::InitializeViewDependent_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *(_DWORD *)winrt::to_hresult(a2 + 56);
  return 0LL;
}
