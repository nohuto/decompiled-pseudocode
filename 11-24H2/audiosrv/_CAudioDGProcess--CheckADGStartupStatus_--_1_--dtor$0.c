/*
 * XREFs of _CAudioDGProcess::CheckADGStartupStatus_::_1_::dtor$0 @ 0x180169E12
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAudioDGProcess::CheckADGStartupStatus_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((RPC_BINDING_HANDLE *)(a2 + 64));
}
