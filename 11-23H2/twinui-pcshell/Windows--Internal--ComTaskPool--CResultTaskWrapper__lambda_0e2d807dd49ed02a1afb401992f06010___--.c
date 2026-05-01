/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0e2d807dd49ed02a1afb401992f06010___::Run @ 0x1801F9800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0e2d807dd49ed02a1afb401992f06010_::operator() @ 0x1801F7A60 (_lambda_0e2d807dd49ed02a1afb401992f06010_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0e2d807dd49ed02a1afb401992f06010___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0e2d807dd49ed02a1afb401992f06010_::operator()();
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
