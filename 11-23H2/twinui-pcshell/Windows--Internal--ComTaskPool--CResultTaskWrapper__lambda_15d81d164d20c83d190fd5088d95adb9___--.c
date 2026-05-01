/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_15d81d164d20c83d190fd5088d95adb9___::Run @ 0x1801F5070
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_15d81d164d20c83d190fd5088d95adb9_::operator() @ 0x1801F49E8 (_lambda_15d81d164d20c83d190fd5088d95adb9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_15d81d164d20c83d190fd5088d95adb9___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_15d81d164d20c83d190fd5088d95adb9_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
