/*
 * XREFs of ?InitializeGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_N@Z @ 0x180331520
 * Callers:
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_InitCoro$2 @ 0x180330F90 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--I.c)
 */

__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync(
        __int64 a1,
        __int64 *a2,
        char a3)
{
  void *v5; // rax
  int v7; // [rsp+488h] [rbp+10h] BYREF
  char v8; // [rsp+490h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x440uLL);
  v7 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync__InitCoro_2(
    &v7,
    (__int64)v5 + 112,
    a2,
    &v8,
    a1);
  return a2;
}
