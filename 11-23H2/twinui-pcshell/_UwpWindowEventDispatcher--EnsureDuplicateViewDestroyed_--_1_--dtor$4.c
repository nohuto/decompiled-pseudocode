/*
 * XREFs of _UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$4 @ 0x1804D0EBD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
