/*
 * XREFs of _CreateSaDevice_::_1_::dtor$11 @ 0x180166611
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateSaDevice_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 432);
}
