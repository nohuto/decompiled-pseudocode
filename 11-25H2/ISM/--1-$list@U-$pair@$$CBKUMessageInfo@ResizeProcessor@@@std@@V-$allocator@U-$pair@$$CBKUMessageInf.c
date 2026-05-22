/*
 * XREFs of ??1?$list@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x18014E2FC
 * Callers:
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$10 @ 0x1801D01F8 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014DA94 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PE.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>::~list<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x40);
}
