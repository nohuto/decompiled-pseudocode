/*
 * XREFs of ?EnterGamingPostureAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x18032EE10
 * Callers:
 *     ?EnterGamingPostureAsync@?$produce@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureController@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18032EDC0 (-EnterGamingPostureAsync@-$produce@UGamingPostureController@implementation@Posture@GamingExperie.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_InitCoro$2 @ 0x18032E994 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--E.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+518h] [rbp+10h] BYREF

  v4 = operator new(0x4E0uLL);
  v6 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
