/*
 * XREFs of CanSetGamingFullScreenExperience$catch$8 @ 0x18000FA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000AAEC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CanSetGamingFullScreenExperience_catch_8(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 56), (void *)0xD6, a3, a4);
  return 0LL;
}
