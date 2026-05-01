/*
 * XREFs of _GuidedSnapAssistViewController::DismissViewAnimated_::_1_::dtor$1 @ 0x1807895CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GuidedSnapAssistViewController::DismissViewAnimated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
