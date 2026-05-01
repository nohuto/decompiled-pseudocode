/*
 * XREFs of ?LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Uhstring@5@U?$IMap@Uhstring@winrt@@U12@@Collections@345@@Z @ 0x180353C48
 * Callers:
 *     ?LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVValueSet@Collections@Foundation@Windows@@@56@@Z @ 0x180352870 (-LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU-$IMap@PEAUHSTRIN.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_InitCoro$2 @ 0x180352970 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  void *v8; // rax
  _DWORD v10[522]; // [rsp+30h] [rbp-868h] BYREF
  __int64 *v11; // [rsp+858h] [rbp-40h]
  __int64 *v12; // [rsp+860h] [rbp-38h]

  v11 = a3;
  v12 = a4;
  v8 = operator new(0x820uLL);
  v10[0] = 0;
  GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__InitCoro_2(v10, (__int64)v8 + 112, a2, a3, a4, a1);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a4);
  return a2;
}
