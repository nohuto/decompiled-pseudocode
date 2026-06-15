/*
 * XREFs of wil::details::ScopeExitFn__lambda_61997a3b092130ee93efce308d0406a1___::_ScopeExitFn__lambda_61997a3b092130ee93efce308d0406a1___ @ 0x1800B7300
 * Callers:
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$28 @ 0x18016445A (_CAudioResourceManager--CreateStream_--_1_--dtor$28.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall wil::details::ScopeExitFn__lambda_61997a3b092130ee93efce308d0406a1___::_ScopeExitFn__lambda_61997a3b092130ee93efce308d0406a1___(
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
