/*
 * XREFs of _DiscoverPeriodicityCharacteristicsForFormat_::_1_::dtor$1 @ 0x18015EB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DiscoverPeriodicityCharacteristicsForFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 112));
}
