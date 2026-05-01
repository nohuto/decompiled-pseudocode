/*
 * XREFs of winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_InitCoro$2 @ 0x180332960
 * Callers:
 *     ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@0@Z @ 0x180333F68 (-SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18032C538 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRefle.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        char *a4,
        __int64 a5,
        char *a6,
        __int64 a7)
{
  char v10; // di
  char v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdi

  v10 = *a6;
  v11 = *a4;
  *(_QWORD *)(a2 + 1553) = a7;
  *(_BYTE *)(a2 + 1561) = v11;
  v12 = a2 + 1552;
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a2 + 1569),
    a5,
    *(_DWORD *)(a5 + 312) != 0);
  *(_QWORD *)(v12 + 17) = &GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::`vftable';
  *(_BYTE *)(a2 + 1905) = v10;
  *(_QWORD *)a2 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v13 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v13 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v13 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v13 + 8) = 1LL;
  *(_QWORD *)(v13 + 32) = 0LL;
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_BYTE *)(v13 + 48) = 0;
  *(_QWORD *)v13 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v13 + 56) = 0LL;
  *(_QWORD *)(v13 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(a2 - 112 + 56));
  *(_QWORD *)(v13 + 72) = 0LL;
  *(_QWORD *)(v13 + 80) = 0LL;
  *(_QWORD *)(v13 + 88) = 0LL;
  *(_DWORD *)(v13 + 96) = 0;
  *(_BYTE *)(v13 + 100) = 0;
  *(_QWORD *)v13 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *a3 = a2 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a6 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a6);
  *(_BYTE *)(a2 + 1552) = 0;
  return winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__ResumeCoro_1(a2);
}
