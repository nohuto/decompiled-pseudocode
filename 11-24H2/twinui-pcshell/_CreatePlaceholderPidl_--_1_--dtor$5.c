/*
 * XREFs of _CreatePlaceholderPidl_::_1_::dtor$5 @ 0x180704386
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreatePlaceholderPidl_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 120));
}
