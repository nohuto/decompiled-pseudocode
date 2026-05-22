/*
 * XREFs of ??1?$unordered_map@IUTargetingInfo@ForegroundManager@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@@std@@QEAA@XZ @ 0x1800AC7A4
 * Callers:
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$2 @ 0x1801D1EFD (_ResizeProcessor--ResizeProcessor_--_1_--dtor$2.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$4 @ 0x1801D774A (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned int,ForegroundManager::TargetingInfo>::~unordered_map<unsigned int,ForegroundManager::TargetingInfo>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::PointerCache>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::PointerCache>>,0>>(a1);
}
