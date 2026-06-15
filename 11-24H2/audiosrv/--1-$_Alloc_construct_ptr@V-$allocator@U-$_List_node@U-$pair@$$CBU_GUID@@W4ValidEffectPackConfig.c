/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A1FD4
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A35B4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@W4ValidEffectPackConf.c)
 *     ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x180143520 (--$emplace@AEBU-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@-$_Hash@V-$_Uma.c)
 *     _CResourcePriorityTracker::AddResourcePriorityToMap_::_1_::dtor$2 @ 0x18016A3EF (_CResourcePriorityTracker--AddResourcePriorityToMap_--_1_--dtor$2.c)
 *     _std::_Hash_std::_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std::_Uhash_compare__GUID_std::hash__GUID__std::equal_to__GUID____std::allocator_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings____0___::emplace_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings__const_&__::_1_::dtor$1 @ 0x180171E65 (_std--_Hash_std--_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std--_ea_180171E65.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>(
        __int64 a1)
{
  char *v1; // rcx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x28);
}
