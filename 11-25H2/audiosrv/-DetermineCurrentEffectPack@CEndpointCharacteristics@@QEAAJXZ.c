/*
 * XREFs of ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x1800839A8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180078A24 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x1800F9620 (std--_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCh_ea_1800F9620.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18012DF00 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_ @ 0x1800EE940 (_lambda_aa1414ab8e95a4429593081bb8a30d1f_--_lambda_aa1414ab8e95a4429593081bb8a30d1f_.c)
 *     wil::scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___ @ 0x180127EFC (wil--scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___.c)
 *     wil::details::lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___::_lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___ @ 0x18012862C (wil--details--lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___--_lambda_call__lambda_1d68.c)
 *     _lambda_aa1414ab8e95a4429593081bb8a30d1f_::operator() @ 0x1801298F4 (_lambda_aa1414ab8e95a4429593081bb8a30d1f_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::DetermineCurrentEffectPack(CEndpointCharacteristics *this)
{
  __int64 v1; // rax
  int v2; // r10d
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+30h] [rbp-49h] BYREF
  std::_Ref_count_base *v7[2]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-31h] BYREF
  char v9; // [rsp+70h] [rbp-9h] BYREF
  char v10; // [rsp+90h] [rbp+17h] BYREF
  GUID v11; // [rsp+B0h] [rbp+37h] BYREF

  v6 = 0;
  *(_OWORD *)v7 = 0LL;
  v11 = GUID_00000000_0000_0000_0000_000000000000;
  v1 = lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_(
         (unsigned int)&v9,
         (_DWORD)this,
         (unsigned int)v7,
         (unsigned int)&v11,
         (__int64)&v6);
  wil::scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___(v8, v1);
  v3 = lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_(
         (unsigned int)&v10,
         v2,
         (unsigned int)&v6,
         (unsigned int)&v11,
         (__int64)v7);
  v4 = lambda_aa1414ab8e95a4429593081bb8a30d1f_::operator()(v3);
  v6 = v4;
  wil::details::lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___::_lambda_call__lambda_1d68eae0fd094447b2813f6c1dba66de___(v8);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v4;
}
