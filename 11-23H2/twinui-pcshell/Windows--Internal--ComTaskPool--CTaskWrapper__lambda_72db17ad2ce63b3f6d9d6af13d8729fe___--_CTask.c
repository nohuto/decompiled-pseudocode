/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___ @ 0x1801D0728
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_scalar_deleting_destructor_ @ 0x1801D0C80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
