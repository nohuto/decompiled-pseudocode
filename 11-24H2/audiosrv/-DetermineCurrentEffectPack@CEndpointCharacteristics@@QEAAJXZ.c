/*
 * XREFs of ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180070C98
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x1800FC810 (std--_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCh_ea_1800FC810.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180136580 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180136B84 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_d0c0e66dca171ee6ed71d206afa3ba5f_::_lambda_d0c0e66dca171ee6ed71d206afa3ba5f_ @ 0x1800F3990 (_lambda_d0c0e66dca171ee6ed71d206afa3ba5f_--_lambda_d0c0e66dca171ee6ed71d206afa3ba5f_.c)
 *     wil::scope_exit__lambda_d0c0e66dca171ee6ed71d206afa3ba5f___ @ 0x18012FFBC (wil--scope_exit__lambda_d0c0e66dca171ee6ed71d206afa3ba5f___.c)
 *     wil::details::lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___::_lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___ @ 0x1801307E8 (wil--details--lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___--_lambda_call__lambda_9cb6.c)
 *     _lambda_7219fec9e44238e31abb5a0eaf15be97_::operator() @ 0x18013115C (_lambda_7219fec9e44238e31abb5a0eaf15be97_--operator().c)
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
  v1 = lambda_d0c0e66dca171ee6ed71d206afa3ba5f_::_lambda_d0c0e66dca171ee6ed71d206afa3ba5f_(
         (unsigned int)&v9,
         (_DWORD)this,
         (unsigned int)v7,
         (unsigned int)&v11,
         (__int64)&v6);
  wil::scope_exit__lambda_d0c0e66dca171ee6ed71d206afa3ba5f___(v8, v1);
  v3 = lambda_d0c0e66dca171ee6ed71d206afa3ba5f_::_lambda_d0c0e66dca171ee6ed71d206afa3ba5f_(
         (unsigned int)&v10,
         v2,
         (unsigned int)&v6,
         (unsigned int)&v11,
         (__int64)v7);
  v4 = lambda_7219fec9e44238e31abb5a0eaf15be97_::operator()(v3);
  v6 = v4;
  wil::details::lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___::_lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___(v8);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v4;
}
