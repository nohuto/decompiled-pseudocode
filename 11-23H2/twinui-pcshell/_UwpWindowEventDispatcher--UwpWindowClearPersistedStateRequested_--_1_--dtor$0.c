/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowClearPersistedStateRequested_::_1_::dtor$0 @ 0x1804D3018
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::UwpWindowClearPersistedStateRequested_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
