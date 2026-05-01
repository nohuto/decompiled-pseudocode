/*
 * XREFs of _VirtualDesktopSwitcherController::VirtualDesktopSwitcherController_::_1_::dtor$0 @ 0x1806D41CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitcherController::VirtualDesktopSwitcherController_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 168LL));
}
