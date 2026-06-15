/*
 * XREFs of ??$_Construct_in_place@V?$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV?$shared_ptr@VEffectPack@@@0@0@Z @ 0x1800FB688
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800FBAA8 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x18012F8E0 (--$copy@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VEffectPack@@@std@@@st.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x18012FB58 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
_QWORD *__fastcall std::_Construct_in_place<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  return std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1, a2);
}
