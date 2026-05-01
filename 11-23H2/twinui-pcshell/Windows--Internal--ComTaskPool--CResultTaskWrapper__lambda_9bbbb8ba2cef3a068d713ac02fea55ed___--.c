/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9bbbb8ba2cef3a068d713ac02fea55ed___::Run @ 0x1804F1930
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9bbbb8ba2cef3a068d713ac02fea55ed_::operator() @ 0x1804F0990 (_lambda_9bbbb8ba2cef3a068d713ac02fea55ed_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9bbbb8ba2cef3a068d713ac02fea55ed___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9bbbb8ba2cef3a068d713ac02fea55ed_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
