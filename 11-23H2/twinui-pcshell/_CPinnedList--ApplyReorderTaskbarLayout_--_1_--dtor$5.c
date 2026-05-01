/*
 * XREFs of _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$5 @ 0x180752A3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 56);
}
