/*
 * XREFs of _wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch$1 @ 0x1805B2437
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
