/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180150998
 * Callers:
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18015073C (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$h.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180150930 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@s.c)
 * Callees:
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x1801513F0 (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>,void *>>>(
        __int64 a1,
        char *a2)
{
  EdgyProcessor::EdgyDragMessageInfo::~EdgyDragMessageInfo((EdgyProcessor::EdgyDragMessageInfo *)(a2 + 24));
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x88);
}
