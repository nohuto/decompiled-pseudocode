/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed_::_1_::dtor$2 @ 0x1806CD3BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return std::tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2 + 128);
}
