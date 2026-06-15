/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18003E66C
 * Callers:
 *     ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x18012F8E0 (--$copy@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VEffectPack@@@std@@@st.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VEffectPack@@@2@_K1@Z @ 0x18003E764 (-_Change_array@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@.c)
 *     ?_Calculate_growth@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEBA_K_K@Z @ 0x18003E7E0 (-_Calculate_growth@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$allocator@U_Grp_t@-$_Tgt_state_t.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@YAPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18003F204 (--$_Uninitialized_move@PEAV-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPac.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@AEA_K@Z @ 0x18009E828 (--$_Allocate_at_least_helper@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@.c)
 *     ??$construct@V?$shared_ptr@VEffectPack@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@1@QEAV?$shared_ptr@VEffectPack@@@1@AEBV31@@Z @ 0x1800FB7D4 (--$construct@V-$shared_ptr@VEffectPack@@@std@@AEBV12@@-$_Default_allocator_traits@V-$allocator@V.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  char *v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v22 = a3;
  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Calculate_growth(
         a1,
         v6 + 1);
  v21 = v8;
  v10 = std::_Allocate_at_least_helper<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v9, &v21);
  v12 = v10;
  v18 = v10;
  v13 = v10 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v23 = v13 + 16;
  try
  {
    std::_Default_allocator_traits<std::allocator<std::shared_ptr<EffectPack>>>::construct<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> const &>(
      v11,
      v13,
      v22);
    v20 = v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::shared_ptr<EffectPack> *,std::allocator<std::shared_ptr<EffectPack>>>(v16, a2, v12);
      v20 = v12;
      v15 = v13 + 16;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<EffectPack> *,std::allocator<std::shared_ptr<EffectPack>>>(v16, v14, v15);
    std::vector<std::shared_ptr<EffectPack>>::_Change_array(a1, v12, v7, v8, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v20, v23);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(16 * v21));
    throw;
  }
  return result;
}
