/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2ca22ad6510bc8d2f46bb56efd928e1d___::Run @ 0x1804EBAB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2ca22ad6510bc8d2f46bb56efd928e1d_::operator() @ 0x1804E5F70 (_lambda_2ca22ad6510bc8d2f46bb56efd928e1d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2ca22ad6510bc8d2f46bb56efd928e1d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2ca22ad6510bc8d2f46bb56efd928e1d_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
