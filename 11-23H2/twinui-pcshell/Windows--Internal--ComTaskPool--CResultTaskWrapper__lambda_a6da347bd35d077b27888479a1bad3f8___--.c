/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___::Run @ 0x1804E08B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a6da347bd35d077b27888479a1bad3f8_::operator() @ 0x1804E01F8 (_lambda_a6da347bd35d077b27888479a1bad3f8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___::Run(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = lambda_a6da347bd35d077b27888479a1bad3f8_::operator()((__int64 *)(a1 + 16), a2);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
