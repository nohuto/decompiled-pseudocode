/*
 * XREFs of _PublishApoTelemetry_::_1_::dtor$20 @ 0x140094E05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PublishApoTelemetry_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)(a2 + 712));
}
