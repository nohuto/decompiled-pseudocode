/*
 * XREFs of ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802A7B50
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800F7E3C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800F47AC (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800F846C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800F86F4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800F8C2C (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F8EC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801022BC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
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
  int v10; // r9d
  __int64 **v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rbx
  double CurrentValue; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm0_8
  __int64 *v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v18[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v19[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v20; // [rsp+98h] [rbp+38h] BYREF

  v19[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  v18[1] = 0LL;
  v19[0] = (_QWORD *)v7;
  v8 = std::_Get_size_of_n<40>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  v20 = 0LL;
  v17 = 0LL;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  v18[0] = (_QWORD *)v9;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(this, (__int64)a2, 7u, v19, (__int64)&v20);
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(this, (__int64)a3, 7u, v18, (__int64)&v17);
  if ( v20 )
  {
    if ( v17 && v20 == v17 )
      goto LABEL_11;
    v11 = (__int64 **)v18[0];
  }
  else
  {
    v11 = (__int64 **)v19[0];
  }
  v12 = *v11;
  v20 = v12;
  while ( !*((_BYTE *)v12 + 25) )
  {
    v13 = v12[4];
    if ( *(_DWORD *)(v13 + 184) == 1 )
    {
      CInteractionTracker::SetState(v12[4], 2, 1, v10);
      CurrentValue = CInteractionTracker::GetCurrentValue(v13, 0);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 0, *(float *)&CurrentValue, 1);
      v15 = CInteractionTracker::GetCurrentValue(v13, 1);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 1u, *(float *)&v15, 1);
      v16 = CInteractionTracker::GetCurrentValue(v13, 2);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 2u, *(float *)&v16, 1);
    }
    CInteractionTracker::SetState(v13, 0, 1, v10);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v20);
    v12 = v20;
  }
LABEL_11:
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v18);
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v19);
}
