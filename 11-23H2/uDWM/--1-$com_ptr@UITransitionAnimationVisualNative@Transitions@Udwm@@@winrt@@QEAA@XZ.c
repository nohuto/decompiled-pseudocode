/*
 * XREFs of ??1?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ @ 0x1800F0DF8
 * Callers:
 *     _winrt::impl::produce_winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler_winrt::Udwm::Transitions::ITransitionHandler_::UpdateScene_::_1_::dtor$1 @ 0x180067250 (_winrt--impl--produce_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiv.c)
 *     _CWindowList::StyleChange_::_1_::dtor$2 @ 0x180067BA0 (_CWindowList--StyleChange_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::CapturePreRotationVisuals_::_1_::dtor$0 @ 0x1800F4A54 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F4A54.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DrawBackground_::_1_::dtor$2 @ 0x1800F4FDA (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F4FDA.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartFirstAnimation_::_1_::dtor$0 @ 0x1800F5EAD (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--S.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartSecondAnimation_::_1_::dtor$0 @ 0x1800F63A4 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F63A4.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$5 @ 0x1800F7EF1 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHan_ea_1800F7EF1.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::StartCrossfadeAnimation_::_1_::dtor$0 @ 0x1800F830F (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHandler--StartCr.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PreTransition_::_1_::dtor$2 @ 0x1800F991B (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F991B.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::RegisterBitmap_::_1_::dtor$1 @ 0x1800F9B7A (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9B7A.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$2 @ 0x1800FE15A (_winrt--Udwm--Transitions--implementation--TransitionManager--OnMoveResizeInitiated_ea_1800FE15A.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow_::_1_::dtor$2 @ 0x1800FE518 (_winrt--Udwm--Transitions--implementation--TransitionManager--PreTransitionWithNati_ea_1800FE518.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::RegisterTransitionBitmap_::_1_::dtor$2 @ 0x1800FE807 (_winrt--Udwm--Transitions--implementation--TransitionManager--RegisterTransitionBit_ea_1800FE807.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled_::_1_::dtor$1 @ 0x180100E27 (_winrt--Udwm--Transitions--implementation--TransitionState--AnimationsEnabled_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateAndInsertSnapshotVisual_::_1_::dtor$1 @ 0x180101402 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateAndInsertSnapshot_ea_180101402.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$3 @ 0x180102AF0 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_180102AF0.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$6 @ 0x180102B14 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_180102B14.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine_::_1_::dtor$0 @ 0x1801033EA (_winrt--Udwm--Transitions--implementation--TransitionState--TransferTransitionVisualAndAnimation.c)
 *     _CWindowList::IsInWindowResizeChange_::_1_::dtor$2 @ 0x18010AE0A (_CWindowList--IsInWindowResizeChange_--_1_--dtor$2.c)
 *     _CWindowList::TransitionBitmap_::_1_::dtor$2 @ 0x18010CF01 (_CWindowList--TransitionBitmap_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 */

__int64 __fastcall winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::~com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(a1);
  return result;
}
