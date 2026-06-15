/*
 * XREFs of ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18012AA04
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x1800F9620 (std--_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCh_ea_1800F9620.c)
 *     std::_Func_impl_no_alloc__lambda_17fc2edd04bd18a27d70a0bd33a08af0__long_std::shared_ptr_EffectPackConfiguration_const___&_::_Do_call @ 0x1801307E0 (std--_Func_impl_no_alloc__lambda_17fc2edd04bd18a27d70a0bd33a08af0__long_std--shared_ea_1801307E0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x18005EF88 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x180127A98 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18012CE00 (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable(
        CEndpointCharacteristics *a1,
        __int64 a2,
        _BYTE *a3)
{
  int IsEffectPackConfigurationApplicableToEndpoint; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a3 )
    *a3 = 0;
  try
  {
    IsEffectPackConfigurationApplicableToEndpoint = CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint(a1);
    v5 = IsEffectPackConfigurationApplicableToEndpoint;
    if ( IsEffectPackConfigurationApplicableToEndpoint >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x570,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)IsEffectPackConfigurationApplicableToEndpoint);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x59A,
                           (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v4);
  }
  return result;
}
