/*
 * XREFs of ??1?$com_ptr@UIApplicationView@@@winrt@@QEAA@XZ @ 0x180221FE4
 * Callers:
 *     _SnapInteraction::InteractionTracker::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1806CBEA8 (_SnapInteraction--InteractionTracker--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _SnapInteraction::SendTelemetryAsync_::_1_::dtor$0 @ 0x1806D6AF3 (_SnapInteraction--SendTelemetryAsync_--_1_--dtor$0.c)
 *     _std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0____::_1_::dtor$0 @ 0x1806D7638 (_std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d6.c)
 *     __lambda_1ac48a6b3b3cf435c7174fb01e7933ad_::operator()_::_1_::dtor$1 @ 0x1806F5AF6 (__lambda_1ac48a6b3b3cf435c7174fb01e7933ad_--operator()_--_1_--dtor$1.c)
 *     _SnapInteraction::SendTelemetryAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1806F6F6A (_SnapInteraction--SendTelemetryAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     _SnapInteraction::InteractionTracker::WindowSnapStateChanged_::_1_::dtor$0 @ 0x1806F7021 (_SnapInteraction--InteractionTracker--WindowSnapStateChanged_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::AssociateAppWindowWithRemoteVirtualDesktop_::_1_::dtor$1 @ 0x1806F8BED (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--AssociateAppWindowWit.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$10 @ 0x1806F8D75 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F8D75.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SetForegroundToLastRegistedProviderWindow_::_1_::dtor$4 @ 0x180703B95 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectStateBase--SetForegroundToLastReg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::com_ptr<IApplicationView>::~com_ptr<IApplicationView>(__int64 *a1)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
}
