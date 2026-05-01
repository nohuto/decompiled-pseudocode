/*
 * XREFs of _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$3 @ 0x1806D127B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 208));
}
