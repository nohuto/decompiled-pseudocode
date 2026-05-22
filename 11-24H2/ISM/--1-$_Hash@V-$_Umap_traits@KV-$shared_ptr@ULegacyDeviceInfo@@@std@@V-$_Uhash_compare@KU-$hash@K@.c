/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800D527C
 * Callers:
 *     ??1?$unordered_map@IV?$shared_ptr@VCustomCursorApplication2@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800D5404 (--1-$unordered_map@IV-$shared_ptr@VCustomCursorApplication2@@@std@@U-$hash@I@2@U-$equal_to@I@2@V.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D55B0 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x1800F9044 (--1SystemCursor2@@QEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800F909C (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1SystemCursorShape2@@QEAA@XZ @ 0x1800F9128 (--1SystemCursorShape2@@QEAA@XZ.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180141D18 (--1GestureServices@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D4974 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>(
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
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((char *)a1[1], (const struct std::nothrow_t *)0x28);
}
