/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x180042554
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@YAPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x180041A78 (--$_Uninitialized_move@PEAV-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPac.c)
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180042244 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x180042484 (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18004284C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VEffectPack@@@2@_K1@Z @ 0x18007DDB4 (-_Change_array@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1800F85B8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x1800F87F4 (--1EffectPackConfigurationManager@@UEAA@XZ.c)
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800F8FC0 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180103914 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?erase@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@0@Z @ 0x1801319A0 (-erase@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@.c)
 *     _std::vector_std::shared_ptr_EffectPack__std::allocator_std::shared_ptr_EffectPack_____::_Emplace_reallocate_std::shared_ptr_EffectPack__const_&__::_1_::catch$0 @ 0x180162F5F (_std--vector_std--shared_ptr_EffectPack__std--allocator_std--shared_ptr_EffectPack_____--_Emplac.c)
 *     _std::vector_std::shared_ptr_EffectPack__std::allocator_std::shared_ptr_EffectPack_____::_Emplace_reallocate_std::shared_ptr_EffectPack__&__::_1_::catch$0 @ 0x180166D51 (_std--vector_std--shared_ptr_EffectPack__std--allocator_std--shared_ptr_EffectPack__ea_180166D51.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
