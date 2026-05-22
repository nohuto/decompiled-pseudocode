/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800232D0
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001C760 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18012DA30 (--1-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$Com.c)
 *     ??1?$list@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18012DAB0 (--1-$list@U-$pair@$$CB_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180023320 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  char *v2; // rdi
  char *v3; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *(char **)v2;
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v2 + 24);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v2 = v3;
    }
    while ( v3 );
  }
}
