/*
 * XREFs of wil::details::ScopeExitFn__lambda_e73f1fa433a23bd79cceee655a8deeb2___::_ScopeExitFn__lambda_e73f1fa433a23bd79cceee655a8deeb2___ @ 0x1800B6764
 * Callers:
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$29 @ 0x18016D868 (_CAudioResourceManager--CreateStream_--_1_--dtor$29.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall wil::details::ScopeExitFn__lambda_e73f1fa433a23bd79cceee655a8deeb2___::_ScopeExitFn__lambda_e73f1fa433a23bd79cceee655a8deeb2___(
        __int64 a1)
{
  volatile __int32 *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(volatile __int32 **)a1;
    if ( **(_BYTE **)a1 )
    {
      result = *(volatile __int32 **)(**(_QWORD **)(a1 + 8) + 96LL);
      _InterlockedExchange(result + 69, 0);
    }
  }
  return result;
}
