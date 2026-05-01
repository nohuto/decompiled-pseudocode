/*
 * XREFs of _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x1807041C6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 208));
}
