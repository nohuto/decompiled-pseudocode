/*
 * XREFs of ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@0@Z @ 0x180333F68
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032EAA0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EAA0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032EFD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EFD0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x1803310C0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_1803310C0.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18032D3CC (--1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_InitCoro$2 @ 0x180332960 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync(
        __int64 a1,
        __int64 *a2,
        char a3,
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *a4,
        char a5)
{
  void *v8; // rax
  char v10[8]; // [rsp+40h] [rbp-848h] BYREF
  char v11[8]; // [rsp+48h] [rbp-840h] BYREF
  _DWORD v12[510]; // [rsp+50h] [rbp-838h] BYREF
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *v13; // [rsp+848h] [rbp-40h]

  v11[0] = a3;
  v13 = a4;
  v10[0] = a5;
  v8 = operator new(0x7F0uLL);
  v12[0] = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__InitCoro_2(
    v12,
    (__int64)v8 + 112,
    a2,
    v11,
    (__int64)a4,
    v10,
    a1);
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity(a4);
  return a2;
}
