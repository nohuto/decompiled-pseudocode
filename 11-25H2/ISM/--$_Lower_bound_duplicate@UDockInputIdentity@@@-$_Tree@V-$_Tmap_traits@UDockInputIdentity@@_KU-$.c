/*
 * XREFs of ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x18017D31C
 * Callers:
 *     ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18017CFB8 (--$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Uta.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017E424 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEA_K@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEA_K@Z @ 0x180183154 (--$_Emplace@AEBUDockInputIdentity@@AEA_K@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$less@U.c)
 *     ?at@?$map@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@@std@@QEAAAEA_KAEBUDockInputIdentity@@@Z @ 0x18018579C (-at@-$map@UDockInputIdentity@@_KU-$less@UDockInputIdentity@@@std@@V-$allocator@U-$pair@$$CBUDock.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@_K@std@@@std@@@std@@@2@AEBUDockInputIdentity@@@Z @ 0x1801857E8 (-find@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$less@UDockInputIdentity@@@std@@V-$allocat.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // cl
  bool v4; // cf
  unsigned __int64 v5; // r9

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v4 = *(_DWORD *)a3 < *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)a3 == *(_DWORD *)(a2 + 32) )
    {
      v5 = *(_QWORD *)(a3 + 8);
      v4 = v5 < *(_QWORD *)(a2 + 40);
      if ( v5 == *(_QWORD *)(a2 + 40) )
        v4 = *(_WORD *)(a3 + 16) < *(_WORD *)(a2 + 48);
    }
    if ( !v4 )
      return 1;
  }
  return v3;
}
