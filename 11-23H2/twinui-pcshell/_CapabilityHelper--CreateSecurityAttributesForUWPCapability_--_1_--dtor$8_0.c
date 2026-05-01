/*
 * XREFs of _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$8_0 @ 0x180710D0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor_8_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((void **)(a2 + 88));
}
