/*
 * XREFs of _SearchAppPositionerHelpers::ExtractMonitorInfo_::_1_::catch$16 @ 0x1806D6421
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchAppPositionerHelpers::ExtractMonitorInfo_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 344),
    (void *)0x54,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
    a4);
  return 0LL;
}
