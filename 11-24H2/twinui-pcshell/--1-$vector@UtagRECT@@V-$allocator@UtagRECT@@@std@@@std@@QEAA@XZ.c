/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x180228044
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$2 @ 0x1806CC686 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$2 @ 0x1806D158E (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$1 @ 0x1806D88B0 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::StartGuidedSnapAssist_::_1_::dtor$0 @ 0x1806DC7EA (_CSnapAssistControllerBase--StartGuidedSnapAssist_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$3 @ 0x1806DD61D (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$3.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$2 @ 0x1806F1E16 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$2.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$3 @ 0x1806F6BDD (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$3.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$4 @ 0x1806F6BEF (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::GetOtherColumns_::_1_::dtor$0 @ 0x1806F712F (_SnapLayoutHelpers--GetOtherColumns_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$0 @ 0x1806F80A9 (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$0 @ 0x1806F9042 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--SnapW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  std::vector<Geometry::CRect>::_Tidy(a1);
}
