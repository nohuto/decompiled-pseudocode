/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x140096890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 168));
}
