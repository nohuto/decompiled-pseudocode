/*
 * XREFs of ??1ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180086BC8
 * Callers:
 *     _CWindowList::Initialize_::_1_::dtor$1 @ 0x1800F6D34 (_CWindowList--Initialize_--_1_--dtor$1.c)
 *     _CWindowList::Initialize_::_1_::dtor$2 @ 0x1800F6D46 (_CWindowList--Initialize_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual_::_1_::dtor$0 @ 0x1800F7016 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateSnapshotVisual_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::dtor$1 @ 0x1800F7156 (_winrt--Udwm--Transitions--TransitionManager--PreTransitionWithNativeWindow_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$0 @ 0x1800F7A0D (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChange_--_1_--dto.c)
 *     _winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$1 @ 0x1800F7A1F (_winrt--Udwm--Transitions--TransitionManager--OnMoveResizeInitiatedFromWorkAreaChan_ea_1800F7A1F.c)
 *     _winrt::impl::consume_Windows_Foundation_Collections_IVector_winrt::Windows::Foundation::Collections::IVector_winrt::Udwm::Transitions::UserResizeVisual__winrt::Udwm::Transitions::UserResizeVisual_::GetAt_::_1_::dtor$0 @ 0x1800F8AFA (_winrt--impl--consume_Windows_Foundation_Collections_IVector_winrt--Windows--Foundation--Collect.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_1_::dtor$1 @ 0x1800F8B39 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--PostTransition_.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::UpdateRect_::_1_::dtor$0 @ 0x1800F8B93 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--UpdateRect_--_1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$5 @ 0x1800F8D4D (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800F8D4D.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::dtor$2 @ 0x1800F8E77 (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--dtor$2.c)
 *     _CGlobalTimeTrackVisual::SetTransitionHandler_::_1_::dtor$0 @ 0x1800F8EC3 (_CGlobalTimeTrackVisual--SetTransitionHandler_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Udwm::Transitions::Private::ScreenRotationTransition::~ScreenRotationTransition(
        winrt::Udwm::Transitions::Private::ScreenRotationTransition *this)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler(this);
}
