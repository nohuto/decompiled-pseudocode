/*
 * XREFs of ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x1802C8B1C
 * Callers:
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$5 @ 0x1806CE605 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$6 @ 0x1806CE617 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$6.c)
 *     _AppViewDataSourceAdapter::InitializeTaskGroupItems_::_1_::dtor$25 @ 0x1806D29FE (_AppViewDataSourceAdapter--InitializeTaskGroupItems_--_1_--dtor$25.c)
 *     _CNetworkExperienceManager::RuntimeClassInitialize_::_1_::dtor$30 @ 0x1806D5789 (_CNetworkExperienceManager--RuntimeClassInitialize_--_1_--dtor$30.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031____::_1_::dtor$0 @ 0x1806F0B58 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabEx.c)
 *     __lambda_3915b0af65937f5328b5adc87798a766_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer__::_1_::dtor$0 @ 0x1806F0B6A (__lambda_3915b0af65937f5328b5adc87798a766_--operator()_winrt--Windows--System--Threading--Thread.c)
 *     _GamingPosturePositioner::DisplaySettingsChange_::_1_::dtor$4 @ 0x1806F12EF (_GamingPosturePositioner--DisplaySettingsChange_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$1 @ 0x1806F706F (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$1.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$4 @ 0x1806F7081 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$5 @ 0x1806F7093 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$7 @ 0x1806F70C6 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$7.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$9 @ 0x1806F70F9 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$9.c)
 *     _VirtualDesktopSwitcherHost::StartPointerExitedTimer_::_1_::dtor$4 @ 0x180705C3B (_VirtualDesktopSwitcherHost--StartPointerExitedTimer_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SnapLayoutHelpers::FillCandidate::~FillCandidate(__int64 *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(this);
}
