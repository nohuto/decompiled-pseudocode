/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E1670
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800E1B8C (--1-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo.c)
 *     ??1?$list@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E1C94 (--1-$list@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@st.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180090390 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  char *v2; // rdx
  char *v3; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(char **)a2;
  if ( v2 )
  {
    do
    {
      v3 = *(char **)v2;
      std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
        a1,
        v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
