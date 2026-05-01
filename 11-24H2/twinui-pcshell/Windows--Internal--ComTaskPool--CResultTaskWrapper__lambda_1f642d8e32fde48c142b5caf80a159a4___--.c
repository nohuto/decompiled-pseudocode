/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f642d8e32fde48c142b5caf80a159a4___::Run @ 0x180429C10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1f642d8e32fde48c142b5caf80a159a4_::operator() @ 0x180427BE0 (_lambda_1f642d8e32fde48c142b5caf80a159a4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f642d8e32fde48c142b5caf80a159a4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1f642d8e32fde48c142b5caf80a159a4_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
