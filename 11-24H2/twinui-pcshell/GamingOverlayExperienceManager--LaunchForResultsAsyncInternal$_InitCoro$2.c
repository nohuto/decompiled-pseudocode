/*
 * XREFs of GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_InitCoro$2 @ 0x180352970
 * Callers:
 *     ?LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Uhstring@5@U?$IMap@Uhstring@winrt@@U12@@Collections@345@@Z @ 0x180353C48 (-LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA-AU-$IAsyncOperation@UValueSe.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@QEAA@XZ @ 0x180347434 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx

  *(_QWORD *)(a2 + 1937) = a6;
  v9 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 1945) = v9;
  v10 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 1953) = v10;
  *(_QWORD *)a2 = GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::promise_type(a2 - 112);
  *a3 = a2 - 96;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a6 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a6);
  *(_BYTE *)(a2 + 1936) = 0;
  return GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1(a2);
}
