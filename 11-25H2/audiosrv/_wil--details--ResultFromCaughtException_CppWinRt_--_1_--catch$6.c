/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$6 @ 0x180165B87
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x1800AD0E4 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_6(__int64 a1, __int64 a2)
{
  wil::details *v3; // rbx

  **(_BYTE **)(a2 + 160) = 1;
  v3 = *(wil::details **)(a2 + 80);
  wil::details::MaybeGetExceptionString(
    v3,
    *(const struct wil::ResultException **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  *(_DWORD *)(a2 + 168) = *((_DWORD *)v3 + 8);
  return 0LL;
}
