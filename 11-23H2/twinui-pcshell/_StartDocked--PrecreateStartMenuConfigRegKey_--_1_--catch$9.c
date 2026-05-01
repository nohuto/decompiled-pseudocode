/*
 * XREFs of _StartDocked::PrecreateStartMenuConfigRegKey_::_1_::catch$9 @ 0x1802C685F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall StartDocked::PrecreateStartMenuConfigRegKey_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x2F,
    (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
    a4);
  return 0LL;
}
