/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014DAC8
 * Callers:
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014D9B8 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare@KU-$hash@K@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014DA94 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PE.c)
 * Callees:
 *     ??1MessageInfo@ResizeProcessor@@QEAA@XZ @ 0x18014E340 (--1MessageInfo@ResizeProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>>>(
        __int64 a1,
        char *a2)
{
  ResizeProcessor::MessageInfo::~MessageInfo((ResizeProcessor::MessageInfo *)(a2 + 24));
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x40);
}
