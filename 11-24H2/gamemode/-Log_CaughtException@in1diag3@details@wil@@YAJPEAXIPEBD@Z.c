/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000BD2C
 * Callers:
 *     CanSetGamingFullScreenExperience$catch$8 @ 0x180010DD0 (CanSetGamingFullScreenExperience$catch$8.c)
 *     IsGamingFullScreenExperienceActive$catch$24 @ 0x180010E27 (IsGamingFullScreenExperienceActive$catch$24.c)
 *     IsGamingFullScreenExperienceSupported$catch$9 @ 0x180010E5D (IsGamingFullScreenExperienceSupported$catch$9.c)
 *     UnregisterGamingFullScreenExperienceChangeNotification$catch$0 @ 0x180010EFD (UnregisterGamingFullScreenExperienceChangeNotification$catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180008D98 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr);
}
