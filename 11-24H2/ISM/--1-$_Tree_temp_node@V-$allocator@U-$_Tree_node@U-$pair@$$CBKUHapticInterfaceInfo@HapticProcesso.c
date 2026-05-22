/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C8164
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800C7DFC (--$_Try_emplace@AEBK$$V@-$map@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocator.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::wstring::_Tidy_deallocate(v2 + 40);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>,void *>>>(a1);
}
