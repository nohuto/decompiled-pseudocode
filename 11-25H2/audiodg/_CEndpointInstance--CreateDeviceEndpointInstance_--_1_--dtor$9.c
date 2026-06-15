/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$9 @ 0x140092D04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 200));
}
