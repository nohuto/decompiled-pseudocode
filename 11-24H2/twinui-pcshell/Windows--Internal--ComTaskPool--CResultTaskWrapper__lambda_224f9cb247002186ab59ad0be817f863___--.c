/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___::Run @ 0x1801BA2C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_224f9cb247002186ab59ad0be817f863_::operator() @ 0x1801BA2E8 (_lambda_224f9cb247002186ab59ad0be817f863_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_224f9cb247002186ab59ad0be817f863_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
