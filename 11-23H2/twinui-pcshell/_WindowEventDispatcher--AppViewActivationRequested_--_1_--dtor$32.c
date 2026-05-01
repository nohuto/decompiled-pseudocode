/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$32 @ 0x1804BF7FF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
