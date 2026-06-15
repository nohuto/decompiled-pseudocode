/*
 * XREFs of _GetPacketSizeConstraints_::_1_::dtor$5 @ 0x1801696CD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetPacketSizeConstraints_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 40));
}
