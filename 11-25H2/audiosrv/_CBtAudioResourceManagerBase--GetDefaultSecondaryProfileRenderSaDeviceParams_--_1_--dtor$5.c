/*
 * XREFs of _CBtAudioResourceManagerBase::GetDefaultSecondaryProfileRenderSaDeviceParams_::_1_::dtor$5 @ 0x1801651CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::GetDefaultSecondaryProfileRenderSaDeviceParams_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 224);
}
