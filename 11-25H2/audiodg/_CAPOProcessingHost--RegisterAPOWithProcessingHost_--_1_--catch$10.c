/*
 * XREFs of _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::catch$10 @ 0x140093034
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DFE4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x7E,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           a4);
  return 0LL;
}
