/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@1@@Z @ 0x1800C7D78
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@1@@Z @ 0x1800C7D78 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@st.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C8134 (--1-$_Tree@V-$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocator@U-.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800CAB7C (-_Erase@-$_Tree@V-$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocat.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@1@@Z @ 0x1800C7D78 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@st.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C7DD0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3;
        !*((_BYTE *)i + 25);
        result = std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
                   v7,
                   v6) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
