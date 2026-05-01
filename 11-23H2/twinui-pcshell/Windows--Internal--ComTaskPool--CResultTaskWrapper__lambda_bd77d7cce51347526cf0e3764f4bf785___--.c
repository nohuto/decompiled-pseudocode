/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bd77d7cce51347526cf0e3764f4bf785___::Run @ 0x1804EBEA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_bd77d7cce51347526cf0e3764f4bf785_::operator() @ 0x1804E7C20 (_lambda_bd77d7cce51347526cf0e3764f4bf785_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bd77d7cce51347526cf0e3764f4bf785___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_bd77d7cce51347526cf0e3764f4bf785_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
