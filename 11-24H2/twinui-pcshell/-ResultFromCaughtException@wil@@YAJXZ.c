/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18031E634 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$89 @ 0x1806D136C (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$89.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$25 @ 0x1806D654B (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$25.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$46 @ 0x1806D9555 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$46.c)
 *     _wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch$0 @ 0x1806DCC54 (_wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x1806DF095 (_winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--Initialize_ea_1806DF095.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$42 @ 0x1806E0EE6 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0EE6.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$43 @ 0x1806E0F44 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0F44.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$44 @ 0x1806E0F9E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0F9E.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch$16 @ 0x1806E11D0 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E11D0.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::catch$96 @ 0x1806E1B6E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1B6E.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::catch$146 @ 0x1806E33B0 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--catch$146.c)
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$17 @ 0x1806E583B (_CStartExperienceManager--SetDockedStartController_--_1_--catch$17.c)
 *     _CStartExperienceManager::SetDockedStartController_::_1_::catch$18 @ 0x1806E5891 (_CStartExperienceManager--SetDockedStartController_--_1_--catch$18.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$51 @ 0x1806E89F0 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$51.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$6 @ 0x1806E979B (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$6.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$20 @ 0x1806F40EE (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806F40EE.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$16 @ 0x1806FACAE (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 *     __lambda_02d18896a6f04e84a63129cc1fd81310_::operator()_::_1_::catch$4 @ 0x1806FCB40 (__lambda_02d18896a6f04e84a63129cc1fd81310_--operator()_--_1_--catch$4.c)
 *     __lambda_037aa076caca4eb578368a6543edcedb_::operator()_::_1_::catch$3 @ 0x1806FCBC2 (__lambda_037aa076caca4eb578368a6543edcedb_--operator()_--_1_--catch$3.c)
 *     __lambda_0b18bae158eb7b112561ba3eda31e137_::operator()_::_1_::catch$3 @ 0x1806FCC33 (__lambda_0b18bae158eb7b112561ba3eda31e137_--operator()_--_1_--catch$3.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x18070462C (_PersistEnterprisePinDataToRegistry_--_1_--catch$4.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1807046C7 (_ShouldAddEnterprisePinToOutput_--_1_--catch$26.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-28h]
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = *(unsigned int *)g_pfnResultFromCaughtExceptionInternal(v3, 0LL, 0LL, &v5), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xDAF, (int)"wil", (const char *)0x8007023ELL, v2);
  }
  return result;
}
