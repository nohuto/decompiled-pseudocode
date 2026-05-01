/*
 * XREFs of _VirtualDesktopGestureWindow::SetDropShadowEffect_::_1_::dtor$0 @ 0x180611C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureWindow::SetDropShadowEffect_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
