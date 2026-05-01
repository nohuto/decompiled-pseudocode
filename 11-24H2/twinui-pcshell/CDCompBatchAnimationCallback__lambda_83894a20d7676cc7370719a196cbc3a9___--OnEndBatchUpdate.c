/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnEndBatchUpdate @ 0x18052C2B0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback @ 0x18052EB4C (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnEndBatchUpdate(
        __int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = (*(_DWORD *)(a1 + 40))-- == 1;
  if ( v1 )
  {
    v1 = *(_DWORD *)(a1 + 24) == 0;
    *(_DWORD *)(a1 + 28) = 2;
    if ( v1 || !*(_QWORD *)(a1 + 32) )
      return CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback();
  }
  return result;
}
