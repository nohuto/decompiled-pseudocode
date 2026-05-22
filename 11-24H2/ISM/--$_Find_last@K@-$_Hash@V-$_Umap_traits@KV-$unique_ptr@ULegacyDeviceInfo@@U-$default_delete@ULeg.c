/*
 * XREFs of ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004D9B0
 * Callers:
 *     ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x18004D4A4 (--$_Insert_or_assign@AEBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@1@AEBK@Z @ 0x18004D954 (--$find@X@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDev.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::_Find_last<unsigned long>(
        _QWORD *a1,
        __int64 **a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 **v5; // r11
  __int64 *v6; // r9
  __int64 **result; // rax

  v4 = (__int64 *)a1[1];
  v5 = (__int64 **)(a1[3] + 16 * (a4 & a1[6]));
  v6 = v5[1];
  if ( v6 == v4 )
  {
    a2[1] = 0LL;
LABEL_3:
    *a2 = v4;
    return a2;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *((_DWORD *)v6 + 4) )
      {
        v4 = (__int64 *)*v6;
        a2[1] = v6;
        goto LABEL_3;
      }
      if ( v6 == *v5 )
        break;
      v6 = (__int64 *)v6[1];
    }
    *a2 = v6;
    result = a2;
    a2[1] = 0LL;
  }
  return result;
}
