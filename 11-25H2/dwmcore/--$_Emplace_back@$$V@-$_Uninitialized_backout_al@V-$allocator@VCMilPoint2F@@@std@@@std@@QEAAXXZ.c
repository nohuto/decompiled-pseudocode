/*
 * XREFs of ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@VCMilPoint2F@@@std@@@std@@QEAAXXZ @ 0x1801E21E0
 * Callers:
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PEAV1@_KAEAV?$allocator@VCMilPoint2F@@@0@@Z @ 0x1801E2030 (--$_Uninitialized_value_construct_n@V-$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PE.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E206C (--$_Resize@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<CMilPoint2F>>::_Emplace_back<>(__int64 a1)
{
  *(_QWORD *)(a1 + 8) += 8LL;
}
