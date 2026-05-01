/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$14 @ 0x1802D8032
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
