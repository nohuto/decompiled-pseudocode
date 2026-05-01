/*
 * XREFs of _CPinList::_CreateTombstone_::_1_::dtor$3 @ 0x18070477F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinList::_CreateTombstone_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 72));
}
