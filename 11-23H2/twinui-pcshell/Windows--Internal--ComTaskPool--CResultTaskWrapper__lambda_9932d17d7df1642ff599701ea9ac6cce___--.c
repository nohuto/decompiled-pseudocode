/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9932d17d7df1642ff599701ea9ac6cce___::Run @ 0x1804DA420
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9932d17d7df1642ff599701ea9ac6cce_::operator() @ 0x1804D8734 (_lambda_9932d17d7df1642ff599701ea9ac6cce_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9932d17d7df1642ff599701ea9ac6cce___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9932d17d7df1642ff599701ea9ac6cce_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
