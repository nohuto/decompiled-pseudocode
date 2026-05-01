/*
 * XREFs of ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUIAsyncAction@Foundation@Windows@2@$$QEAU3452@@Z @ 0x18032A5EC
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032EAA0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EAA0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032EFD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EFD0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x1803310C0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_1803310C0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x18035D290 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x18035D780 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x18035DC20 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x18035E080 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x180579390 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180579390.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x18057A2E0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057A2E0.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x18057A640 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057A640.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805D2D00 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
        __int64 a1,
        __int64 a2)
{
  const struct winrt::impl::slim_source_location *v3; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 96) == 2 )
  {
    v3 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v5);
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v3);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  return a2;
}
