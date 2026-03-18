/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800DFF78
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800DEB94 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800DFC5C (-RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DFF4C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTracker@@V-$unordered_map@PEAVCI.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800E1140 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x18028C9BC (--1CExpressionManager@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DFFCC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCChannelContext@@PEAVCAnimationGlobalCo.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::~_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>(
        _QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>,void *>>>(
    v2,
    a1[1]);
  std::_Deallocate<16,0>((_QWORD *)a1[1], 0x20uLL);
}
