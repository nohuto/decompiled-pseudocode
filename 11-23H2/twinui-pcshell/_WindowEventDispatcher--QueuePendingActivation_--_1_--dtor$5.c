/*
 * XREFs of _WindowEventDispatcher::QueuePendingActivation_::_1_::dtor$5 @ 0x1804C7CCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::QueuePendingActivation_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
