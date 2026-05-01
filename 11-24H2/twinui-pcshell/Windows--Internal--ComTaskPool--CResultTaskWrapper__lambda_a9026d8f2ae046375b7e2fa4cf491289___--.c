/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9026d8f2ae046375b7e2fa4cf491289___::Run @ 0x18044B5F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a9026d8f2ae046375b7e2fa4cf491289_::operator() @ 0x180449F8C (_lambda_a9026d8f2ae046375b7e2fa4cf491289_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9026d8f2ae046375b7e2fa4cf491289___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a9026d8f2ae046375b7e2fa4cf491289_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
