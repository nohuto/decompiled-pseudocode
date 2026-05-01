/*
 * XREFs of _GuidedSnapAssistControl::GuidedSnapAssistControl_::_1_::dtor$3 @ 0x1806CE97D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GuidedSnapAssistControl::GuidedSnapAssistControl_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 32LL));
}
