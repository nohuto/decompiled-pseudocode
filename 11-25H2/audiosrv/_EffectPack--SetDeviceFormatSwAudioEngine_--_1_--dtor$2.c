/*
 * XREFs of _EffectPack::SetDeviceFormatSwAudioEngine_::_1_::dtor$2 @ 0x18016159D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::SetDeviceFormatSwAudioEngine_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 80);
}
