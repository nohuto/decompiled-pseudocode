/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08e19f15ae792a297a06aee8f3a7a64f___::Run @ 0x1804E2400
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_08e19f15ae792a297a06aee8f3a7a64f_::operator() @ 0x1804E1D90 (_lambda_08e19f15ae792a297a06aee8f3a7a64f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08e19f15ae792a297a06aee8f3a7a64f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_08e19f15ae792a297a06aee8f3a7a64f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
