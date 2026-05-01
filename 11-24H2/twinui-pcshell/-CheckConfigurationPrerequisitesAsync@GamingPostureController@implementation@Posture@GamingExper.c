/*
 * XREFs of ?CheckConfigurationPrerequisitesAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ @ 0x18032E3B0
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_InitCoro$2 @ 0x18032E0F0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--C.c)
 */

__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync(
        __int64 a1,
        __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
