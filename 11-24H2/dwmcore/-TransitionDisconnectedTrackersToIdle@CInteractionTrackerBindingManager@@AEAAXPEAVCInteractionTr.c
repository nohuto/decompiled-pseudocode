/*
 * XREFs of ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x18029DD7C
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800E1140 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800DE2D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800E1BE4 (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E263C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801A60B0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        struct CInteractionTracker *a3)
{
  SIZE_T size_of; // rax
  __int64 v7; // rax
  SIZE_T v8; // rax
  __int64 v9; // rax
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  double CurrentValue; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  __int64 *v16; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v17[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v18[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v19; // [rsp+98h] [rbp+38h] BYREF

  v18[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  v17[1] = 0LL;
  v18[0] = (_QWORD *)v7;
  v8 = std::_Get_size_of_n<40>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  v19 = 0LL;
  v16 = 0LL;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  v17[0] = (_QWORD *)v9;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(this, (__int64)a2, 7u, v18, (__int64)&v19);
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(this, (__int64)a3, 7u, v17, (__int64)&v16);
  if ( v19 )
  {
    if ( v16 && v19 == v16 )
      goto LABEL_11;
    v10 = (__int64 **)v17[0];
  }
  else
  {
    v10 = (__int64 **)v18[0];
  }
  v11 = *v10;
  v19 = v11;
  while ( !*((_BYTE *)v11 + 25) )
  {
    v12 = v11[4];
    if ( *(_DWORD *)(v12 + 184) == 1 )
    {
      CInteractionTracker::SetState(v11[4], 2, 1);
      CurrentValue = CInteractionTracker::GetCurrentValue(v12, 0);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v12, 0, *(float *)&CurrentValue, 1);
      v14 = CInteractionTracker::GetCurrentValue(v12, 1);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v12, 1u, *(float *)&v14, 1);
      v15 = CInteractionTracker::GetCurrentValue(v12, 2);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v12, 2u, *(float *)&v15, 1);
    }
    CInteractionTracker::SetState(v12, 0, 1);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v19);
    v11 = v19;
  }
LABEL_11:
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v17);
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v18);
}
