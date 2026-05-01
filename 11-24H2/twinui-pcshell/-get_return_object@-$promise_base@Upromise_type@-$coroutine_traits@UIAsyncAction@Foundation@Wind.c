/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x180336F5C
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_InitCoro$2 @ 0x18032E994 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--E.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_InitCoro$2 @ 0x18032EED0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EED0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_InitCoro$2 @ 0x1803350F4 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--W.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_InitCoro$2 @ 0x18035D160 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_InitCoro$2.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2 @ 0x18035D648 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_InitCoro$2 @ 0x18035DAE8 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_InitCoro$2.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_InitCoro$2 @ 0x18035DF50 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_InitCoro$2.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_InitCoro$2 @ 0x1805D4944 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_InitCoro$2.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_InitCoro$2 @ 0x1805D8AE8 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  *a2 = a1 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v4 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  return a2;
}
