/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$8 @ 0x18016F2B7
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1800A9570 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_8(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 88),
    *(const struct std::exception **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  return 0LL;
}
