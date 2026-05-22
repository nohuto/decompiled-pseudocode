/*
 * XREFs of ??1?$unordered_map@PEAXV?$vector@IV?$allocator@I@std@@@std@@U?$hash@PEAX@2@U?$equal_to@PEAX@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18007DF74
 * Callers:
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$0 @ 0x1801C9F80 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<void *,std::vector<unsigned int>>::~unordered_map<void *,std::vector<unsigned int>>(
        __int64 a1)
{
  std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>(a1);
}
