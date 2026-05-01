/*
 * XREFs of ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18005C468
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180192B18 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801EDA5C (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicatio.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18021665C (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Microsoft@.c)
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x18029A2A0 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180317BB0 (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 *     _BroadcastDVRComponent::OnApplicationViewChangedTask_::_1_::dtor$5 @ 0x1806CD48D (_BroadcastDVRComponent--OnApplicationViewChangedTask_--_1_--dtor$5.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$4 @ 0x1806DEAF4 (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$4.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$5 @ 0x1806DEB0D (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$5.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$6 @ 0x1806DEB26 (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$6.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(
        __int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
