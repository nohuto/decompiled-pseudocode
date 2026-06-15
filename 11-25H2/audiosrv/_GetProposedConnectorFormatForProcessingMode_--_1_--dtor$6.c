/*
 * XREFs of _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$6 @ 0x1801637E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetProposedConnectorFormatForProcessingMode_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 80));
}
