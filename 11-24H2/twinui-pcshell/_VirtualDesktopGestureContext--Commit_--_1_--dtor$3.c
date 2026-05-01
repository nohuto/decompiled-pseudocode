/*
 * XREFs of _VirtualDesktopGestureContext::Commit_::_1_::dtor$3 @ 0x1806F2D69
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopGestureContext::Commit_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
