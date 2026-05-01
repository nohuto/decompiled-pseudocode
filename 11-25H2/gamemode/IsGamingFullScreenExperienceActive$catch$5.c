/*
 * XREFs of IsGamingFullScreenExperienceActive$catch$5 @ 0x18000FAA5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000AAEC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall IsGamingFullScreenExperienceActive_catch_5(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 104), (void *)0xB4, a3, a4);
  return 0LL;
}
