/*
 * XREFs of ?at@?$map@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@@std@@QEAAAEA_KAEBUDockInputIdentity@@@Z @ 0x18019485C
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x1801934E8 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x18017EE50 (--$_Find_lower_bound@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@.c)
 *     ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x18017EEEC (--$_Lower_bound_duplicate@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$.c)
 */

__int64 __fastcall std::map<DockInputIdentity,unsigned __int64>::at(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r11
  __int64 v4; // r10
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
    a1,
    v6,
    a2);
  if ( !std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
          v2,
          v6[2],
          v3) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
  }
  return v4 + 56;
}
