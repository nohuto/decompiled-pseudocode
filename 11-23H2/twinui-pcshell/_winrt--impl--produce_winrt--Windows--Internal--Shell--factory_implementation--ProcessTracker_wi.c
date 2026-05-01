/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker_winrt::Windows::Foundation::IActivationFactory_::ActivateInstance_::_1_::catch$2 @ 0x18027E21A
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker_winrt::Windows::Foundation::IActivationFactory_::ActivateInstance_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *(_DWORD *)winrt::to_hresult(a2 + 56);
  return 0LL;
}
