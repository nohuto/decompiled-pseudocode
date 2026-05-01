/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd8d76336b73e37cf48b40cc660e7734___::Run @ 0x18044B7B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fd8d76336b73e37cf48b40cc660e7734_::operator() @ 0x18044A784 (_lambda_fd8d76336b73e37cf48b40cc660e7734_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd8d76336b73e37cf48b40cc660e7734___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_fd8d76336b73e37cf48b40cc660e7734_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
