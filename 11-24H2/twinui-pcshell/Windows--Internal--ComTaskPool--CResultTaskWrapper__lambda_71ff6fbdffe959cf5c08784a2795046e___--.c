/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71ff6fbdffe959cf5c08784a2795046e___::Run @ 0x180436FD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_71ff6fbdffe959cf5c08784a2795046e_::operator() @ 0x180436788 (_lambda_71ff6fbdffe959cf5c08784a2795046e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71ff6fbdffe959cf5c08784a2795046e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_71ff6fbdffe959cf5c08784a2795046e_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
