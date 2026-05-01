/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$19 @ 0x1802C499F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
