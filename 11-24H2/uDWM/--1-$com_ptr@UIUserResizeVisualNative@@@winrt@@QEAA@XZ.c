/*
 * XREFs of ??1?$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ @ 0x18004D274
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual_::_1_::dtor$1 @ 0x1800F6DC4 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateSnapshotVisual_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$5 @ 0x1800F6E8C (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransi_ea_1800F6E8C.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine_::_1_::dtor$0 @ 0x1800F6F26 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferTransitionVisualAndAnimation.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled_::_1_::dtor$1 @ 0x1800F6F38 (_winrt--Udwm--Transitions--implementation--TransitionState--AnimationsEnabled_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$6 @ 0x1800F7168 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisuals_--_1_--dt.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$2 @ 0x1800F7A31 (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChan_ea_1800F7A31.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::CapturePreRotationVisuals_::_1_::dtor$1 @ 0x1800F8987 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--CapturePreRotation.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground_::_1_::dtor$2 @ 0x1800F89AB (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--DrawB_ea_1800F89AB.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$3 @ 0x1800F8D29 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800F8D29.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18004C1CC (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IUserResizeVisualNative>::~com_ptr<IUserResizeVisualNative>(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IBitmapManager>::unconditional_release_ref(a1);
  return result;
}
