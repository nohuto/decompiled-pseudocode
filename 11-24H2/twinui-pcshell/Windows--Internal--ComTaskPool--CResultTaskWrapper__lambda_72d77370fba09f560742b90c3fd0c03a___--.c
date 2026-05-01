/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run @ 0x1801E9210
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_72d77370fba09f560742b90c3fd0c03a_::operator() @ 0x1801E9238 (_lambda_72d77370fba09f560742b90c3fd0c03a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_72d77370fba09f560742b90c3fd0c03a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
