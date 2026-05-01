/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000AAEC
 * Callers:
 *     CanSetGamingFullScreenExperience$catch$8 @ 0x18000FA60 (CanSetGamingFullScreenExperience$catch$8.c)
 *     IsGamingFullScreenExperienceActive$catch$5 @ 0x18000FAA5 (IsGamingFullScreenExperienceActive$catch$5.c)
 *     IsGamingFullScreenExperienceSupported$catch$0 @ 0x18000FAD8 (IsGamingFullScreenExperienceSupported$catch$0.c)
 *     UnregisterGamingFullScreenExperienceChangeNotification$catch$0 @ 0x18000FB78 (UnregisterGamingFullScreenExperienceChangeNotification$catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18000838C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
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
