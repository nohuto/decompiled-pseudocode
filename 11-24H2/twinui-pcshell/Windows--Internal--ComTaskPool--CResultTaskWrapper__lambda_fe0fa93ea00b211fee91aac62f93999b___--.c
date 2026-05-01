/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___::Run @ 0x1800A8080
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x1800A80A8 (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_fe0fa93ea00b211fee91aac62f93999b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
