/*
 * XREFs of _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$5 @ 0x1801651A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 264);
}
