/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x1800F9620
 * Callers:
 *     <none>
 * Callees:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x1800839A8 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18012AA04 (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 *     ?ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ @ 0x18012DBF0 (-ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call(
        __int64 a1,
        CEndpointCharacteristics **a2)
{
  CEndpointCharacteristics *v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  result = CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable(v2, v3, &v5);
  if ( v5 )
  {
    CEndpointCharacteristics::ReconcileEffectPacksOnEndpoint(v2);
    return CEndpointCharacteristics::DetermineCurrentEffectPack(v2);
  }
  return result;
}
