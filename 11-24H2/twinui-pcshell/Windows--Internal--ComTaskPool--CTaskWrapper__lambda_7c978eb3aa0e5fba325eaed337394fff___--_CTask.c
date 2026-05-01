/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___ @ 0x180347750
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a437ff59390a72614abce5a0545024f___::_scalar_deleting_destructor_ @ 0x18034B100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8a437ff59390a72614abce5a0545024f___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_scalar_deleting_destructor_ @ 0x1803A1FB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
