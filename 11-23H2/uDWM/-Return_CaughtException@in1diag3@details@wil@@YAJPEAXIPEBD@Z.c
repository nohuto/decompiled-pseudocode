/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EDDD4
 * Callers:
 *     _CWindowList::Initialize_::_1_::catch$25 @ 0x180067B32 (_CWindowList--Initialize_--_1_--catch$25.c)
 *     _CWindowList::StyleChange_::_1_::catch$12 @ 0x180067BC0 (_CWindowList--StyleChange_--_1_--catch$12.c)
 *     _CWindowList::MoveSize_::_1_::catch$40 @ 0x180068040 (_CWindowList--MoveSize_--_1_--catch$40.c)
 *     _CWindowList::MoveSize_::_1_::catch$42 @ 0x1800680C0 (_CWindowList--MoveSize_--_1_--catch$42.c)
 *     _CWindowList::UpdateWindowScale_::_1_::catch$35 @ 0x180068100 (_CWindowList--UpdateWindowScale_--_1_--catch$35.c)
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::OnAnimationComplete_::_1_::catch$0 @ 0x1800ED984 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--OnAnimationComplete_.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::OnAnimationComplete_::_1_::catch$0 @ 0x1800F5568 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--O.c)
 *     __lambda_65776acf8dfa6fe29cb3050938b98b74_::operator()_::_1_::catch$6 @ 0x1800FA910 (__lambda_65776acf8dfa6fe29cb3050938b98b74_--operator()_--_1_--catch$6.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch$10 @ 0x1800FE524 (_winrt--Udwm--Transitions--implementation--TransitionManager--PreTransitionWithNati_ea_1800FE524.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::RegisterTransitionBitmap_::_1_::catch$8 @ 0x1800FE813 (_winrt--Udwm--Transitions--implementation--TransitionManager--RegisterTransitionBitmap_--_1_--ca.c)
 *     _CWindowList::HandleScreenRotation_::_1_::catch$15 @ 0x18010A79F (_CWindowList--HandleScreenRotation_--_1_--catch$15.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$11 @ 0x18010C2DB (_CWindowList--RotationModeChange_--_1_--catch$11.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$12 @ 0x18010C31D (_CWindowList--RotationModeChange_--_1_--catch$12.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180098CC8 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
