/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_909b11586af9f9b22b39a9a889554953___::Run @ 0x18044B560
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_909b11586af9f9b22b39a9a889554953_::operator() @ 0x180449CE0 (_lambda_909b11586af9f9b22b39a9a889554953_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_909b11586af9f9b22b39a9a889554953___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_909b11586af9f9b22b39a9a889554953_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
