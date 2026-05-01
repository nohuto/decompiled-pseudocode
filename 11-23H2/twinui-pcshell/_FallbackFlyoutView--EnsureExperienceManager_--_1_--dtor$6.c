/*
 * XREFs of _FallbackFlyoutView::EnsureExperienceManager_::_1_::dtor$6 @ 0x1806C43F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FallbackFlyoutView::EnsureExperienceManager_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
