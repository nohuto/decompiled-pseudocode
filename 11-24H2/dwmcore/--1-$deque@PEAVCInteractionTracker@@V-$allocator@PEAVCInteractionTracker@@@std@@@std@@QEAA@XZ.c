/*
 * XREFs of ??1?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ @ 0x1800E2690
 * Callers:
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 * Callees:
 *     ?_Tidy@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXXZ @ 0x1800E2B2C (-_Tidy@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXX.c)
 */

void __fastcall std::deque<CInteractionTracker *>::~deque<CInteractionTracker *>(_QWORD **a1)
{
  _QWORD *v2; // rcx

  std::deque<CInteractionTracker *>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
