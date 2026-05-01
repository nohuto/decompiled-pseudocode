/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnBeginBatchUpdate @ 0x1805D3210
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer @ 0x1805D5EF4 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnBeginBatchUpdate(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 40) )
  {
    *(_DWORD *)(a1 + 28) = 1;
    result = CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer();
  }
  ++*(_DWORD *)(a1 + 40);
  return result;
}
