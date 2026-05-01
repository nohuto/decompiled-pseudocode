/*
 * XREFs of _VirtualDesktopGestureWindow::SetBackdropBlurEffect_::_1_::dtor$5 @ 0x1806F2E65
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopGestureWindow::SetBackdropBlurEffect_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
