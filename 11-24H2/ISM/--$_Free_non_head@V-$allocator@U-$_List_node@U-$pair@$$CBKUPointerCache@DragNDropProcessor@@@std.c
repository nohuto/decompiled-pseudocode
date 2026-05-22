/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC3AC
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KUPointerCache@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800AC674 (--1-$_Hash@V-$_Umap_traits@KUPointerCache@ResizeProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ??1?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@QEAA@XZ @ 0x1800AC74C (--1-$list@U-$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V-$allocator@U-$pair@$$CBIUTarget.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  char *v2; // rcx
  char *v3; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *(char **)v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v2 = v3;
    }
    while ( v3 );
  }
}
