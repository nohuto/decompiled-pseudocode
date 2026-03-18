/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800F9698
 * Callers:
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1800F7B24 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800F7E3C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800F835C (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800F846C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800F849C (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800F85BC (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800F8A1C (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800F9698 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FB18C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x180233950 (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800F9698 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v6; // rcx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    std::_Deallocate<16,0>(v6, 0x28uLL);
  }
}
