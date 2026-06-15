/*
 * XREFs of _GetPacketSizeConstraints_::_1_::dtor$6 @ 0x1801696DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetPacketSizeConstraints_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 120);
}
