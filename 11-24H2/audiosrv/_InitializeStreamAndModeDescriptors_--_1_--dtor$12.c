/*
 * XREFs of _InitializeStreamAndModeDescriptors_::_1_::dtor$12 @ 0x18016DA79
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InitializeStreamAndModeDescriptors_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 160);
}
