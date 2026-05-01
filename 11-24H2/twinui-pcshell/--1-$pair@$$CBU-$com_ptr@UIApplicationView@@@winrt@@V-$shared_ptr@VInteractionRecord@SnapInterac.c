/*
 * XREFs of ??1?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@QEAA@XZ @ 0x18014E768
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014E6C0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-$sha.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18014E6EC (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@U-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>::~pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>(
        __int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
}
