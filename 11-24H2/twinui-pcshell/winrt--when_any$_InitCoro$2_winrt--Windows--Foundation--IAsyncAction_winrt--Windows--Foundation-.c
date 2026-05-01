/*
 * XREFs of winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180345D90
 * Callers:
 *     ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@0@Z @ 0x180346534 (--$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA-AUIAsyncAction@Foundation@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180345FF0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundatio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::when_any__InitCoro_2_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rdi

  *(_QWORD *)(a2 + 177) = a4;
  *(_QWORD *)(a2 + 185) = a5;
  *(_QWORD *)a2 = winrt::when_any__ResumeCoro_1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v7 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v7 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v7 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v7 + 8) = 1LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_BYTE *)(v7 + 48) = 0;
  *(_QWORD *)v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v7 + 56));
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  *(_DWORD *)(v7 + 96) = 0;
  *(_BYTE *)(v7 + 100) = 0;
  *(_QWORD *)v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *a3 = v7 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a5 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a5);
  *(_BYTE *)(a2 + 176) = 0;
  return winrt::when_any__ResumeCoro_1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_(a2);
}
