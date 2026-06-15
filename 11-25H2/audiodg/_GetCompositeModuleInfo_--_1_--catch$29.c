/*
 * XREFs of _GetCompositeModuleInfo_::_1_::catch$29 @ 0x1400952F4
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005F4D4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetCompositeModuleInfo_::_1_::catch_29(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0xFC,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
    a4);
  return 0LL;
}
