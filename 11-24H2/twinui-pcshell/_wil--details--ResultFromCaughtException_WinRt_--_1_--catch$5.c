/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x1806DB7C4
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1801CF5B4 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?__abi_translateCurrentException@@YAJ_N@Z @ 0x1802D9924 (-__abi_translateCurrentException@@YAJ_N@Z.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_WinRt_::_1_::catch_5(__int64 a1, __int64 a2)
{
  **(_BYTE **)(a2 + 128) = 1;
  __abi_translateCurrentException();
}
