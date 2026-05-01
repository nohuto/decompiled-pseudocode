/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x1802C5E0D
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x18038E190 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 72),
    *(const struct std::exception **)(a2 + 112),
    *(unsigned __int16 **)(a2 + 120),
    a4);
  return 0LL;
}
