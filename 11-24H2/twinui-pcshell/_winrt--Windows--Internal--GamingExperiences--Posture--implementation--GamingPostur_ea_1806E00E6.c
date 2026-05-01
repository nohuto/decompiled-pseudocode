/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_ResumeCoro$1_::_1_::catch$7 @ 0x1806E00E6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync__ResumeCoro_1_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0xF9,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
    a4);
  *(_BYTE *)(*(_QWORD *)(a2 + 128) - 8LL) = 0;
  return 0LL;
}
