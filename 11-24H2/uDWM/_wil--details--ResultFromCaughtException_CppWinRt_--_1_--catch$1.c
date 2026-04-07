/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1800F7EF5
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18009F0F8 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800A0C24 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_1(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 32),
    *(const struct winrt::hresult_error **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  *(_DWORD *)(a2 + 168) = *winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 32), (_DWORD *)(a2 + 168));
  return 0LL;
}
