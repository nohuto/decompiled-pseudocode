/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x1802C6EAB
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x1802CE840 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rbx

  **(_BYTE **)(a2 + 168) = 1;
  v5 = *(_QWORD *)(a2 + 32);
  wil::details::MaybeGetExceptionString(
    (wil::details *)v5,
    *(const struct wil::ResultException **)(a2 + 152),
    *(unsigned __int16 **)(a2 + 160),
    a4);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(v5 + 32);
  *(_DWORD *)(a2 + 76) = *(_DWORD *)(v5 + 36);
  *(_BYTE *)(a2 + 80) = (*(_BYTE *)(v5 + 28) & 8) != 0;
  return 0LL;
}
