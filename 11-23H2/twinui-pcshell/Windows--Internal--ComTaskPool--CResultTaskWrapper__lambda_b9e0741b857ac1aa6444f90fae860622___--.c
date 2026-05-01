/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b9e0741b857ac1aa6444f90fae860622___::Run @ 0x1804EBE70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b9e0741b857ac1aa6444f90fae860622_::operator() @ 0x1804E7B44 (_lambda_b9e0741b857ac1aa6444f90fae860622_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b9e0741b857ac1aa6444f90fae860622___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b9e0741b857ac1aa6444f90fae860622_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
