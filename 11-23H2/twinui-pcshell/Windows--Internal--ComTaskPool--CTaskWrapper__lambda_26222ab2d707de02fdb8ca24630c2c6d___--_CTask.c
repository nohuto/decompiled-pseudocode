/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26222ab2d707de02fdb8ca24630c2c6d___::_CTaskWrapper__lambda_26222ab2d707de02fdb8ca24630c2c6d___ @ 0x1801DA1A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26222ab2d707de02fdb8ca24630c2c6d___::_scalar_deleting_destructor_ @ 0x1801DA6E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_26222ab2d707de02fdb8ca24630c2c6d___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26222ab2d707de02fdb8ca24630c2c6d___::_CTaskWrapper__lambda_26222ab2d707de02fdb8ca24630c2c6d___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
