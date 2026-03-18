/*
 * XREFs of ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1802460F8
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1801E8240 (-erase@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@V-.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CBetterCheckMPOCache_std::default_delete_CBetterCheckMPOCache___________lambda_fe304b6b2b6f0e67e1f1dd6983e4971f___ @ 0x1802C1DAC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CBetter.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___ @ 0x1802C1E50 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CCheckM.c)
 *     ?erase@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1802C49E0 (-erase@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@@@s.c)
 */

void __fastcall CD3DDevice::RemoveStaleCheckMPOCaches(CD3DDevice *this)
{
  __int64 v2; // r9
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 1501) )
    {
      v2 = *((_QWORD *)this + 182);
      *((_BYTE *)this + 1501) = 0;
      std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CBetterCheckMPOCache_std::default_delete_CBetterCheckMPOCache___________lambda_fe304b6b2b6f0e67e1f1dd6983e4971f___(
        &v3,
        *((_QWORD *)this + 179),
        *((_QWORD *)this + 180),
        v2);
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::erase((char *)this + 1432, &v3, v3, *((_QWORD *)this + 180));
    }
  }
  else
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___(
      &v3,
      *((_QWORD *)this + 176),
      *((_QWORD *)this + 177));
    std::vector<std::unique_ptr<CCheckMPOCache>>::erase((__int64)this + 1408, &v3, v3, *((_QWORD *)this + 177));
  }
}
