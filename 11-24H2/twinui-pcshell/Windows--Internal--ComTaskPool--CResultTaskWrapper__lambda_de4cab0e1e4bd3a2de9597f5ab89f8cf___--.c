/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___::Run @ 0x1804423D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator() @ 0x18043F114 (_lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
