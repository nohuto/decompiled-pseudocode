/*
 * XREFs of _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$16 @ 0x180773CE3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
