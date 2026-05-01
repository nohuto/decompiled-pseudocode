/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_873da902577de7b1e240af1da8b9a9bc___::Run @ 0x1804EBDB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_873da902577de7b1e240af1da8b9a9bc_::operator() @ 0x1804E72E8 (_lambda_873da902577de7b1e240af1da8b9a9bc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_873da902577de7b1e240af1da8b9a9bc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_873da902577de7b1e240af1da8b9a9bc_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
