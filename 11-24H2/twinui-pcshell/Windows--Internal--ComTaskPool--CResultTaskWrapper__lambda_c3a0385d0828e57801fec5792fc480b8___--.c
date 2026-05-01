/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3a0385d0828e57801fec5792fc480b8___::Run @ 0x1804422E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c3a0385d0828e57801fec5792fc480b8_::operator() @ 0x18043E9C0 (_lambda_c3a0385d0828e57801fec5792fc480b8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3a0385d0828e57801fec5792fc480b8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c3a0385d0828e57801fec5792fc480b8_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
