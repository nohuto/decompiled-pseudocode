/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC360
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC2CC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISP.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800ACC08 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBT_LARGE_I_ea_1800ACC08.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800B34B0 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_M.c)
 * Callees:
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x1800AD078 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)(a2 + 24));
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x88);
}
