/*
 * XREFs of ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18014A3CC
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180149848 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@23@@Z @ 0x18014A424 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$ComPt.c)
 *     ??0ResizeProcessor@@QEAA@XZ @ 0x18015027C (--0ResizeProcessor@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180152BC0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_c.c)
 *     ??0EdgyProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x1801531DC (--0EdgyProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ??0InputInfoValidator@@QEAA@XZ @ 0x18019C4DC (--0InputInfoValidator@@QEAA@XZ.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x18019C678 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBK_K@std@@@1@@Z @ 0x180093E50 (--0-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allocat.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>(
    a1,
    &v3);
  return a1;
}
