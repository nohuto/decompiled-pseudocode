/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800AC778
 * Callers:
 *     _ForegroundManager::ForegroundManager_::_1_::dtor$9 @ 0x1801D1F13 (_ForegroundManager--ForegroundManager_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC3E4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unordered_set@_KU-$hash@_K@std@@U-$.c)
 */

void __fastcall std::list<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>::~list<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x58);
}
