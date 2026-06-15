/*
 * XREFs of _CreateSaDevice_::_1_::dtor$17 @ 0x180166623
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateSaDevice_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 432));
}
