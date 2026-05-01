/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___::Run @ 0x18044B3B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x180449078 (_lambda_2a43ebb49f2e9221dd99f0faba3896bb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
