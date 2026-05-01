/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b623b03caf8d64c68043fdf6e26afe88___::Run @ 0x1801F9A10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b623b03caf8d64c68043fdf6e26afe88_::operator() @ 0x1801F89B4 (_lambda_b623b03caf8d64c68043fdf6e26afe88_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b623b03caf8d64c68043fdf6e26afe88___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b623b03caf8d64c68043fdf6e26afe88_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
