/*
 * XREFs of _lambda_ce709892295bd7b0448627fa06a7afa0_::operator() @ 0x180124C74
 * Callers:
 *     wil::details::lambda_call__lambda_ce709892295bd7b0448627fa06a7afa0___::_lambda_call__lambda_ce709892295bd7b0448627fa06a7afa0___ @ 0x180124BC4 (wil--details--lambda_call__lambda_ce709892295bd7b0448627fa06a7afa0___--_lambda_call__lambda_ce70.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180124EFC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18006B7BC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18011C0C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x180125934 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ?RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x180126878 (-RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown.c)
 */

_BYTE *__fastcall lambda_ce709892295bd7b0448627fa06a7afa0_::operator()(__int64 a1)
{
  _BYTE *result; // rax
  DynamicAudioEndpointManager *v3; // rcx
  unsigned int v4; // r8d

  result = *(_BYTE **)a1;
  if ( **(_BYTE **)a1 )
  {
    DynamicAudioEndpointManager::RemoveRuleAndBuildRefreshList(
      *(DynamicAudioEndpointManager **)(a1 + 8),
      **(struct IAudioProcess ***)(a1 + 16),
      **(struct IUnknown ***)(a1 + 24),
      1,
      *(bool (*const *)[6])(a1 + 32));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      *(RTL_SRWLOCK ***)(a1 + 40),
      0LL);
    v4 = **(_DWORD **)(a1 + 48);
    if ( v4 )
      DynamicAudioEndpointManager::ClearPerProcessRouting(v3, *(bool (*const *)[6])(a1 + 32), v4);
    return (_BYTE *)DynamicAudioEndpointManager::RefreshPublishedDefaults(
                      *(RTL_SRWLOCK **)(a1 + 8),
                      *(bool (*const *)[6])(a1 + 32),
                      0);
  }
  return result;
}
