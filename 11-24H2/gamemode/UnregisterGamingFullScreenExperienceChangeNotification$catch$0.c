/*
 * XREFs of UnregisterGamingFullScreenExperienceChangeNotification$catch$0 @ 0x180010EFD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000BD2C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall UnregisterGamingFullScreenExperienceChangeNotification_catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 40), (void *)0x1C9, a3, a4);
  return 0LL;
}
