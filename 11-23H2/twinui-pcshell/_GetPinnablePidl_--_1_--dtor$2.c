/*
 * XREFs of _GetPinnablePidl_::_1_::dtor$2 @ 0x1806A224F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetPinnablePidl_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 48);
}
