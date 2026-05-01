/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39c05a2d08f91a104f18850ee37f7c9d___::Run @ 0x1800674B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_39c05a2d08f91a104f18850ee37f7c9d_::operator() @ 0x1800674D8 (_lambda_39c05a2d08f91a104f18850ee37f7c9d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39c05a2d08f91a104f18850ee37f7c9d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_39c05a2d08f91a104f18850ee37f7c9d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
