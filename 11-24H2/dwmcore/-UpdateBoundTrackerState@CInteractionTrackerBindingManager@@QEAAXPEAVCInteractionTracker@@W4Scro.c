/*
 * XREFs of ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800E1D34
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E263C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800E2E18 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5AB4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerState(
        int a1,
        CInteractionTracker *a2,
        unsigned int a3)
{
  char v3; // al
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_BYTE *)a2 + 541);
  if ( (v3 & 1) == 0 )
    *((_BYTE *)a2 + 541) = v3 | 1;
  v10[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  v10[0] = (_QWORD *)v7;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, (_DWORD)a2, 7, (unsigned int)v10, 0LL);
  v8 = *v10[0];
  v11 = *v10[0];
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = *(_QWORD *)(v8 + 32);
    if ( (CInteractionTracker *)v9 != a2 )
    {
      if ( (*(_BYTE *)(v9 + 541) & 1) != 0 )
        CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v8 + 32), a3 == 3);
      CInteractionTracker::SetState(v9, a3, 1LL);
      if ( *(_DWORD *)(v9 + 504) )
        *(_BYTE *)(*(_QWORD *)(v9 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v9 + 504) - 1) + 20) = 1;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v11);
    v8 = v11;
  }
  if ( !a3 )
    CInteractionTracker::DemoteToBoundTracker(a2, 0);
  std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
    v10,
    v10,
    v10[0][1]);
  std::_Deallocate<16,0>(v10[0], 0x28uLL);
}
