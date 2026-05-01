/*
 * XREFs of ?TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@UUri@967@@Z @ 0x180335010
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?TryLaunchGamingAppAsync@?$produce@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureController@34567@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180334FA0 (-TryLaunchGamingAppAsync@-$produce@UGamingPostureController@implementation@Posture@GamingExperie.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_InitCoro$2 @ 0x1803348E8 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--T.c)
 */

__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+2B8h] [rbp+10h] BYREF

  v6 = operator new(0x270uLL);
  v8 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync__InitCoro_2(
    &v8,
    (__int64)v6 + 112,
    a2,
    a3,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
