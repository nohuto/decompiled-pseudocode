/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$5 @ 0x1802D7FDE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 136));
}
