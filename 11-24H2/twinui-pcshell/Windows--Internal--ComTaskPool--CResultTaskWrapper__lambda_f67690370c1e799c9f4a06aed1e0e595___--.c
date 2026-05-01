/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___::Run @ 0x180442530
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f67690370c1e799c9f4a06aed1e0e595_::operator() @ 0x18043F59C (_lambda_f67690370c1e799c9f4a06aed1e0e595_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f67690370c1e799c9f4a06aed1e0e595_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
