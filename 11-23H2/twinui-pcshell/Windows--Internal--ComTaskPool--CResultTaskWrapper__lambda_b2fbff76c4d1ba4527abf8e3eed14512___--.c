/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2fbff76c4d1ba4527abf8e3eed14512___::Run @ 0x1804EBE40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b2fbff76c4d1ba4527abf8e3eed14512_::operator() @ 0x1804E7AE8 (_lambda_b2fbff76c4d1ba4527abf8e3eed14512_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2fbff76c4d1ba4527abf8e3eed14512___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b2fbff76c4d1ba4527abf8e3eed14512_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
