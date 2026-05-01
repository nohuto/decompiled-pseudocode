/*
 * XREFs of _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$23 @ 0x1806D12F9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_23(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgsForWindowingSettings,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForWindowingSettings,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
