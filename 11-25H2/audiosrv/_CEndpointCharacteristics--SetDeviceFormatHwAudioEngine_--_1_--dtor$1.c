/*
 * XREFs of _CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor$1 @ 0x1801683A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 56);
}
