/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18014E240
 * Callers:
 *     ??1?$unordered_map@KUMessageInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18014E334 (--1-$unordered_map@KUMessageInfo@ResizeProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator@U-.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x18014E38C (--1ResizeProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014DA94 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PE.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>(
        __int64 *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((char *)a1[1], (const struct std::nothrow_t *)0x40);
}
