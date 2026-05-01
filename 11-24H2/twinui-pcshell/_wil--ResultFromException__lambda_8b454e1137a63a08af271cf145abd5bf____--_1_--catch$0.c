/*
 * XREFs of _wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch$0 @ 0x1806DCC54
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch_0(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
