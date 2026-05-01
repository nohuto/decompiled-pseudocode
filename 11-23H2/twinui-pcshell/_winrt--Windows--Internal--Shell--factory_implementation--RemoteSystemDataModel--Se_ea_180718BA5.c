/*
 * XREFs of _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession_::_1_::dtor$3 @ 0x180718BA5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>((HKEY *)(a2 + 192));
}
