/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4825f127a8d2295f8f183f2ddcdfea56___::Run @ 0x180423390
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4825f127a8d2295f8f183f2ddcdfea56_::operator() @ 0x180419190 (_lambda_4825f127a8d2295f8f183f2ddcdfea56_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4825f127a8d2295f8f183f2ddcdfea56___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_4825f127a8d2295f8f183f2ddcdfea56_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
