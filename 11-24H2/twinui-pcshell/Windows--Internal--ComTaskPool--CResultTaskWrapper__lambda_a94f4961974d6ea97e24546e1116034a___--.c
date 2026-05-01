/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a94f4961974d6ea97e24546e1116034a___::Run @ 0x18044B620
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a94f4961974d6ea97e24546e1116034a_::operator() @ 0x18044A084 (_lambda_a94f4961974d6ea97e24546e1116034a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a94f4961974d6ea97e24546e1116034a___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_a94f4961974d6ea97e24546e1116034a_::operator()((_BYTE **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
