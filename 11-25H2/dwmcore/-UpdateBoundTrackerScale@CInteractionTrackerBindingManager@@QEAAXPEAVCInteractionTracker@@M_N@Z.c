/*
 * XREFs of ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800F849C
 * Callers:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18003BEF0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M@Z @ 0x180221104 (-SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18003BEF0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800F75E4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800F8C2C (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F8EC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800F9698 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerScale(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        float a3,
        char a4)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  struct CInteractionTracker *v9; // rbx
  _QWORD *v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v6 = (int)this;
  if ( (*((_BYTE *)a2 + 541) & 1) != 0 )
  {
    v10[1] = 0LL;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v7 = v7;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)(v7 + 16) = v7;
    *(_WORD *)(v7 + 24) = 257;
    v10[0] = (_QWORD *)v7;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(v6, (_DWORD)a2, 4, (unsigned int)v10, 0LL);
    v8 = *v10[0];
    v11 = *v10[0];
    while ( !*(_BYTE *)(v8 + 25) )
    {
      v9 = *(struct CInteractionTracker **)(v8 + 32);
      if ( v9 != a2 )
      {
        if ( (*((_BYTE *)v9 + 541) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v8 + 32), 0);
        CInteractionTracker::SetScale((__int64)v9, a3, 1);
      }
      *((_BYTE *)v9 + 540) = (4 * a4) | *((_BYTE *)v9 + 540) & 0xFB;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v11);
      v8 = v11;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      v10,
      v10,
      v10[0][1]);
    std::_Deallocate<16,0>(v10[0], 0x28uLL);
  }
}
