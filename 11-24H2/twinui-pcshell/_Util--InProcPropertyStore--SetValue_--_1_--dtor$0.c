/*
 * XREFs of _Util::InProcPropertyStore::SetValue_::_1_::dtor$0 @ 0x1806CCF92
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Util::InProcPropertyStore::SetValue_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)(a2 + 120));
}
