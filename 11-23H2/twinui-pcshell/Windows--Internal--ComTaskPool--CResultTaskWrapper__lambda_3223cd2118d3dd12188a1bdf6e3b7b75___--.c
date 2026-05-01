/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3223cd2118d3dd12188a1bdf6e3b7b75___::Run @ 0x1804F18A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3223cd2118d3dd12188a1bdf6e3b7b75_::operator() @ 0x1804F04B8 (_lambda_3223cd2118d3dd12188a1bdf6e3b7b75_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3223cd2118d3dd12188a1bdf6e3b7b75___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3223cd2118d3dd12188a1bdf6e3b7b75_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
