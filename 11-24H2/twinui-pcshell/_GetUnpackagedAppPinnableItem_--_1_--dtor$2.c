/*
 * XREFs of _GetUnpackagedAppPinnableItem_::_1_::dtor$2 @ 0x1806D7A6F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetUnpackagedAppPinnableItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 104));
}
