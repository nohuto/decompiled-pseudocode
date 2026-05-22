/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C8134
 * Callers:
 *     ??1HapticProcessor@@UEAA@XZ @ 0x1800C81BC (--1HapticProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@1@@Z @ 0x1800C7D78 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@st.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,HapticProcessor::HapticInterfaceInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,HapticProcessor::HapticInterfaceInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>,0>>(
        char **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x50);
}
