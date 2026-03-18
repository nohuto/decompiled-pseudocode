/*
 * XREFs of ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x1800E587C
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5684 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E263C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800E2E18 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x1800E5828 (-HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ.c)
 */

char __fastcall CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  char v2; // si
  __int64 v5; // rax
  __int64 *v6; // rax
  _QWORD *v8[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v8[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  v8[0] = (_QWORD *)v5;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(this, (__int64)a2, 7u, v8, 0LL);
  v6 = (__int64 *)*v8[0];
  v9 = (__int64 *)*v8[0];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( CInteractionTracker::HasActiveCustomAnimation((CInteractionTracker *)v6[4]) )
    {
      v2 = 1;
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v9);
    v6 = v9;
  }
  std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
    (__int64)v8,
    (__int64)v8,
    *((__int64 **)v8[0] + 1));
  std::_Deallocate<16,0>(v8[0], 0x28uLL);
  return v2;
}
