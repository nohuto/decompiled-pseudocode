/*
 * XREFs of _CPinList::_CreateTombstone_::_1_::dtor$4 @ 0x180704791
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinList::_CreateTombstone_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 40);
}
