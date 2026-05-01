/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShim_::_1_::dtor$6 @ 0x1806A4970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShim_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 528));
}
