/*
 * XREFs of ??1?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@QEAA@XZ @ 0x180621FA4
 * Callers:
 *     _CopilotHotkeyManager::AreValidFastPathEnabledStates_::_1_::dtor$0 @ 0x180700C95 (_CopilotHotkeyManager--AreValidFastPathEnabledStates_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::set<int>::~set<int>(void **a1)
{
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::~_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>(a1);
}
