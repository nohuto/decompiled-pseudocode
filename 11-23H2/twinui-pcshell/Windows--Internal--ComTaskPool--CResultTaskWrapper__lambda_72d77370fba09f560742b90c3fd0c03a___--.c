/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run @ 0x18006BA30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_72d77370fba09f560742b90c3fd0c03a_::operator() @ 0x18006BA58 (_lambda_72d77370fba09f560742b90c3fd0c03a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_72d77370fba09f560742b90c3fd0c03a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
