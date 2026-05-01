/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x18040FB1C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_scalar_deleting_destructor_ @ 0x180410030 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___--_scala.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 32);
  *(_DWORD *)(a1 + 12) = -1073741823;
}
