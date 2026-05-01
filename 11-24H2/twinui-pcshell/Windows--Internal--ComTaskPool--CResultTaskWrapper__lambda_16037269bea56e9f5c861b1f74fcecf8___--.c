/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16037269bea56e9f5c861b1f74fcecf8___::Run @ 0x180441EB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_16037269bea56e9f5c861b1f74fcecf8_::operator() @ 0x18043D250 (_lambda_16037269bea56e9f5c861b1f74fcecf8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16037269bea56e9f5c861b1f74fcecf8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_16037269bea56e9f5c861b1f74fcecf8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
