/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@@std@@QEAA@XZ @ 0x18015CE48
 * Callers:
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x180057710 (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 *     ??$_Construct_n@$$V@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z @ 0x18019DB14 (--$_Construct_n@$$V@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x18005787C (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types.c)
 */

void __fastcall std::_Tidy_guard<std::vector<LightDismissClientProxy *>>::~_Tidy_guard<std::vector<LightDismissClientProxy *>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(v1);
}
