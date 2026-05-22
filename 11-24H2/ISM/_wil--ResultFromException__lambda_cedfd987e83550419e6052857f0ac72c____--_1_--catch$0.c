/*
 * XREFs of _wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c____::_1_::catch$0 @ 0x1801D8956
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1801907F0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c____::_1_::catch_0(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
