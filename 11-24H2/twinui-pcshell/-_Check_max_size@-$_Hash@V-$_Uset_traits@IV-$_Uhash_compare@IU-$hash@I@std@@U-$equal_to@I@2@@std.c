/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBAXXZ @ 0x1800AB45C
 * Callers:
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800AB6F4 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$emplace@_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEA_K@Z @ 0x18057CA90 (--$emplace@_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@st.c)
 *     ??$emplace@AEAI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEAI@Z @ 0x18066270C (--$emplace@AEAI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$_Try_emplace@W4CloudPCState@Shell@Internal@Windows@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@IV?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@_N@1@$$QEAW4CloudPCState@Shell@Internal@Windows@winrt@@@Z @ 0x180671590 (--$_Try_emplace@W4CloudPCState@Shell@Internal@Windows@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Cloud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0xAAAAAAAAAAAAAAALL;
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
