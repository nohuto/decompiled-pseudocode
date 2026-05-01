/*
 * XREFs of __anonymous_namespace_::GetConfigurationValue_unsigned_long__::_1_::catch$6 @ 0x1806E134D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::GetConfigurationValue_unsigned_long__::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0xED,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
    a4);
  return 0LL;
}
