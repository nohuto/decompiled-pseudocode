/*
 * XREFs of ??0?$list@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@1@@Z @ 0x1800E052C
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@1@AEBV?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@1@@Z @ 0x1800E04C8 (--0-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$_Uh.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@AEAAXXZ @ 0x1800E0EB8 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingMo.c)
 */

_QWORD *__fastcall std::list<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>::list<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  std::list<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>::_Alloc_sentinel_and_proxy(a1);
  return a1;
}
