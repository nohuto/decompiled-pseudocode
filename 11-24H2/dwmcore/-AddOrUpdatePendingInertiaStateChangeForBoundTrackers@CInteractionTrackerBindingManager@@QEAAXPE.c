/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18029DB78
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800DE2D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800DE2D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800E1BE4 (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E263C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801A60B0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  SIZE_T size_of; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  double CurrentValue; // xmm0_8
  _QWORD *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a2 + 541) & 1) != 0 )
  {
    v11[1] = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)v7 = v7;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)(v7 + 16) = v7;
    *(_WORD *)(v7 + 24) = 257;
    v11[0] = (_QWORD *)v7;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7u, v11, 0LL);
    v8 = (__int64 *)*v11[0];
    v12 = (__int64 *)*v11[0];
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = v8[4];
      if ( v9 != a2 )
      {
        CurrentValue = CInteractionTracker::GetCurrentValue(v8[4], a3);
        CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v9, a3, *(float *)&CurrentValue, 1);
        *(_BYTE *)(*(_QWORD *)(v9 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v9 + 504) - 1) + 20) = 1;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v12);
      v8 = v12;
    }
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v11);
  }
}
