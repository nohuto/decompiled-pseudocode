/*
 * XREFs of ?await_resume@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180335978
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032EAA0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EAA0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032EFD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EFD0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x1803310C0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_1803310C0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x1803349A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_1803349A0.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x18035D290 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x18035D780 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x18035DC20 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x18035E080 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805FCE20 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18065F710 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(__int64 a1)
{
  int v1; // edx
  enum AsyncStatus v3; // edx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v5 = 0;
  v6 = 0LL;
  winrt::check_hresult(&v7, v1, (__int64)&v5);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v3);
  return winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(*(__int64 **)(a1 + 8));
}
