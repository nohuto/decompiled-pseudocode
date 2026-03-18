/*
 * XREFs of ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ @ 0x1801D8870
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800F5C44 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x18027D354 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$ComPtr@VBamoDataS.c)
 */

void __fastcall DataProviderManager::PostExpressionsUpdated(DataProviderManager *this)
{
  _QWORD *v1; // r14
  _QWORD *i; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  _QWORD *j; // rsi
  __int64 v6; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = (_QWORD *)i[3];
    v4 = (_QWORD *)v3[19];
    for ( j = (_QWORD *)v3[18]; j != v4; ++j )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        v3 + 10,
        &v7,
        j);
      if ( v7 != v3[11] )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 24) + 192LL) = 0LL;
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>,0>(
          v3 + 10,
          &v8);
      }
    }
    v6 = v3[18];
    if ( v6 != v3[19] )
      v3[19] = v6;
  }
}
