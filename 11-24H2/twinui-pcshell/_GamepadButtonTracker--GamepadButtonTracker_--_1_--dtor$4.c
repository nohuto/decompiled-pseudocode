/*
 * XREFs of _GamepadButtonTracker::GamepadButtonTracker_::_1_::dtor$4 @ 0x1806E457A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamepadButtonTracker::GamepadButtonTracker_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 136LL));
}
