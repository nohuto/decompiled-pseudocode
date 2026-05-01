/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000C880
 * Callers:
 *     RegisterGamingFullScreenExperienceChangeNotification$catch$2 @ 0x18000FB0B (RegisterGamingFullScreenExperienceChangeNotification$catch$2.c)
 *     SetGamingFullScreenExperience$catch$12 @ 0x18000FB43 (SetGamingFullScreenExperience$catch$12.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18000823C (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr);
}
