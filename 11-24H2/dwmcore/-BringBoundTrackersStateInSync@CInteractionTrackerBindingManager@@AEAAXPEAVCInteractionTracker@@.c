/*
 * XREFs of ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800DF830
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1800DFAE8 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800DE2D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800E1BE4 (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E263C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5AB4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800E5B6C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5BE8 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801A60B0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(
        int a1,
        __int64 a2,
        CInteractionTracker *a3,
        int a4)
{
  _DWORD *v4; // rdi
  SIZE_T size_of; // rax
  __int64 v9; // rax
  SIZE_T v10; // rax
  __int64 v11; // rax
  CInteractionTracker *v12; // r15
  _DWORD *v13; // r14
  CInteractionTracker *v14; // rax
  __int64 v15; // rdi
  double CurrentValue; // xmm0_8
  double v17; // xmm0_8
  double v18; // xmm0_8
  double v19; // xmm0_8
  double v20; // xmm0_8
  double v21; // xmm0_8
  CInteractionTracker *v22; // [rsp+30h] [rbp-30h] BYREF
  CInteractionTracker *v23; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h]

  if ( a4 )
  {
    v4 = (_DWORD *)((char *)a3 + 184);
    if ( *(_DWORD *)(a2 + 184) || *v4 )
    {
      v23 = 0LL;
      v22 = 0LL;
      v26 = 0LL;
      size_of = std::_Get_size_of_n<40>(1LL);
      v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *(_QWORD *)v9 = v9;
      *(_QWORD *)(v9 + 8) = v9;
      *(_QWORD *)(v9 + 16) = v9;
      *(_WORD *)(v9 + 24) = 257;
      v24[1] = 0LL;
      v25 = v9;
      v10 = std::_Get_size_of_n<40>(1LL);
      v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
      *(_QWORD *)v11 = v11;
      *(_QWORD *)(v11 + 8) = v11;
      *(_QWORD *)(v11 + 16) = v11;
      *(_WORD *)(v11 + 24) = 257;
      v24[0] = v11;
      CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)&v25, (__int64)&v23);
      CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        a1,
        (_DWORD)a3,
        7,
        (unsigned int)v24,
        (__int64)&v22);
      v12 = v22;
      if ( v23 != v22 )
      {
        v13 = v4;
        if ( *(_DWORD *)(a2 + 184) && v26 == 1 )
        {
          *(_BYTE *)(a2 + 541) |= 1u;
          v13 = (_DWORD *)((char *)a3 + 184);
        }
        CInteractionTracker::StopCustomAndDefaultAnimations(a3, 1);
        CInteractionTracker::DestroyInteractionAnimations(a3);
        if ( v12 )
          CInteractionTracker::DemoteToBoundTracker(v12, 1);
        if ( *(_DWORD *)(a2 + 184) != *v4 )
        {
          v14 = *(CInteractionTracker **)v24[0];
          v23 = *(CInteractionTracker **)v24[0];
          while ( !*((_BYTE *)v14 + 25) )
          {
            v15 = *((_QWORD *)v14 + 4);
            if ( !*(_DWORD *)(a2 + 184) && *v13 == 1 )
            {
              CInteractionTracker::SetState(*((_QWORD *)v14 + 4), 2LL, 1LL);
              CurrentValue = CInteractionTracker::GetCurrentValue(v15, 0LL);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v15, 0, *(float *)&CurrentValue, 1);
              v17 = CInteractionTracker::GetCurrentValue(v15, 1LL);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v15, 1u, *(float *)&v17, 1);
              v18 = CInteractionTracker::GetCurrentValue(v15, 2LL);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v15, 2u, *(float *)&v18, 1);
              *(_BYTE *)(*(_QWORD *)(v15 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v15 + 504) - 1) + 20) = 1;
            }
            CInteractionTracker::SetState(v15, *(unsigned int *)(a2 + 184), 1LL);
            if ( *(_DWORD *)(a2 + 184) == 2 )
            {
              v19 = CInteractionTracker::GetCurrentValue(v15, 0LL);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v15, 0, *(float *)&v19, 1);
              v20 = CInteractionTracker::GetCurrentValue(v15, 1LL);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v15, 1u, *(float *)&v20, 1);
              v21 = CInteractionTracker::GetCurrentValue(v15, 2LL);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v15, 2u, *(float *)&v21, 1);
            }
            *(_BYTE *)(*(_QWORD *)(v15 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v15 + 504) - 1) + 20) = 1;
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v23);
            v14 = v23;
          }
        }
      }
      std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v24);
      std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(&v25);
    }
  }
}
