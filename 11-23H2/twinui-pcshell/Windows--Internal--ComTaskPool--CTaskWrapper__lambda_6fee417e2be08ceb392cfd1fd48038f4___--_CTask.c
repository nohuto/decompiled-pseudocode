/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fee417e2be08ceb392cfd1fd48038f4___::_CTaskWrapper__lambda_6fee417e2be08ceb392cfd1fd48038f4___ @ 0x1801D0700
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fee417e2be08ceb392cfd1fd48038f4___::_scalar_deleting_destructor_ @ 0x1801D0C40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fee417e2be08ceb392cfd1fd48038f4___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fee417e2be08ceb392cfd1fd48038f4___::_CTaskWrapper__lambda_6fee417e2be08ceb392cfd1fd48038f4___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
