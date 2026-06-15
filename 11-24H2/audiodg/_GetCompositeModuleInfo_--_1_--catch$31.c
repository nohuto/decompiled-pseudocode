/*
 * XREFs of _GetCompositeModuleInfo_::_1_::catch$31 @ 0x140094DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005F3E4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetCompositeModuleInfo_::_1_::catch_31(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x12B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
    a4);
  return 0LL;
}
