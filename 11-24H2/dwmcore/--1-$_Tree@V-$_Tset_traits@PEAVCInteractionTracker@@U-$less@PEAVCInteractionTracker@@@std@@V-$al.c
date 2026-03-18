/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800E1BE4
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800DF830 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1800E0554 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18029DB78 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x18029DD7C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800E2E18 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(
        _QWORD **a1)
{
  std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
    a1,
    a1,
    (*a1)[1]);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
