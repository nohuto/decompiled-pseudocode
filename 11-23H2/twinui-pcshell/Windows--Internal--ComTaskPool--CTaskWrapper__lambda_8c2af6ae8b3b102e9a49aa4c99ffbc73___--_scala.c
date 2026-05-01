/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::_scalar_deleting_destructor_ @ 0x18048C6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
