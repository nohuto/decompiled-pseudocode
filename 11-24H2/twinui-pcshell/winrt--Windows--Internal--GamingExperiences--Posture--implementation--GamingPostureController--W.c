/*
 * XREFs of winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_InitCoro$2 @ 0x1803350F4
 * Callers:
 *     ?WaitForOobeToComplete@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x18033552C (-WaitForOobeToComplete@GamingPostureController@implementation@Posture@GamingExperiences@Internal.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180335200 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180335200.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x180336F5C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 273) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v6 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v6 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v6 + 8) = 1LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_BYTE *)(v6 + 48) = 0;
  *(_QWORD *)v6 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v6 + 56));
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  *(_DWORD *)(v6 + 96) = 0;
  *(_BYTE *)(v6 + 100) = 0;
  *(_QWORD *)v6 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 272) = 0;
  return winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete__ResumeCoro_1(a2);
}
