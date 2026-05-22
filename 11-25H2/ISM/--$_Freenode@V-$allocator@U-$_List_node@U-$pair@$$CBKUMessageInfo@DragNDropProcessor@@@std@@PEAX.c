/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801473CC
 * Callers:
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180146FEC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180147330 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@.c)
 * Callees:
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x1801486D8 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>(
        __int64 a1,
        char *a2)
{
  DragNDropProcessor::MessageInfo::~MessageInfo((DragNDropProcessor::MessageInfo *)(a2 + 24));
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x90);
}
