/*
 * XREFs of ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FC434
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1800FC2C0 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1800F47AC (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800F757C (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800F75E4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800F769C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800F846C (--1-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-$al.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800F86F4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800F8C2C (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F8EC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801022BC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(
        _QWORD *a1,
        __int64 a2,
        struct CResource **a3,
        int a4)
{
  _DWORD *v4; // rdi
  SIZE_T size_of; // rax
  __int64 v9; // rax
  SIZE_T v10; // rax
  __int64 v11; // rax
  CInteractionTracker *v12; // r15
  _DWORD *v13; // r14
  int v14; // r9d
  __int64 *v15; // rax
  __int64 v16; // rdi
  double CurrentValue; // xmm0_8
  double v18; // xmm0_8
  double v19; // xmm0_8
  double v20; // xmm0_8
  double v21; // xmm0_8
  double v22; // xmm0_8
  CInteractionTracker *v23; // [rsp+30h] [rbp-30h] BYREF
  CInteractionTracker *v24; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v25[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h]

  if ( a4 )
  {
    v4 = a3 + 23;
    if ( *(_DWORD *)(a2 + 184) || *v4 )
    {
      v24 = 0LL;
      v23 = 0LL;
      v27 = 0LL;
      size_of = std::_Get_size_of_n<40>(1LL);
      v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *(_QWORD *)v9 = v9;
      *(_QWORD *)(v9 + 8) = v9;
      *(_QWORD *)(v9 + 16) = v9;
      *(_WORD *)(v9 + 24) = 257;
      v25[1] = 0LL;
      v26 = (_QWORD *)v9;
      v10 = std::_Get_size_of_n<40>(1LL);
      v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
      *(_QWORD *)v11 = v11;
      *(_QWORD *)(v11 + 8) = v11;
      *(_QWORD *)(v11 + 16) = v11;
      *(_WORD *)(v11 + 24) = 257;
      v25[0] = (_QWORD *)v11;
      CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7u, &v26, (__int64)&v24);
      CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, (__int64)a3, 7u, v25, (__int64)&v23);
      v12 = v23;
      if ( v24 != v23 )
      {
        v13 = v4;
        if ( *(_DWORD *)(a2 + 184) && v27 == 1 )
        {
          *(_BYTE *)(a2 + 541) |= 1u;
          v13 = a3 + 23;
        }
        CInteractionTracker::StopCustomAndDefaultAnimations(a3, 1);
        CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a3);
        if ( v12 )
          CInteractionTracker::DemoteToBoundTracker(v12, 1);
        if ( *(_DWORD *)(a2 + 184) != *v4 )
        {
          v15 = (__int64 *)*v25[0];
          v24 = (CInteractionTracker *)*v25[0];
          while ( !*((_BYTE *)v15 + 25) )
          {
            v16 = v15[4];
            if ( !*(_DWORD *)(a2 + 184) && *v13 == 1 )
            {
              CInteractionTracker::SetState(v15[4], 2, 1, v14);
              CurrentValue = CInteractionTracker::GetCurrentValue(v16, 0);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v16, 0, *(float *)&CurrentValue, 1);
              v18 = CInteractionTracker::GetCurrentValue(v16, 1);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v16, 1u, *(float *)&v18, 1);
              v19 = CInteractionTracker::GetCurrentValue(v16, 2);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v16, 2u, *(float *)&v19, 1);
              *(_BYTE *)(*(_QWORD *)(v16 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v16 + 504) - 1) + 20) = 1;
            }
            CInteractionTracker::SetState(v16, *(_DWORD *)(a2 + 184), 1, v14);
            if ( *(_DWORD *)(a2 + 184) == 2 )
            {
              v20 = CInteractionTracker::GetCurrentValue(v16, 0);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v16, 0, *(float *)&v20, 1);
              v21 = CInteractionTracker::GetCurrentValue(v16, 1);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v16, 1u, *(float *)&v21, 1);
              v22 = CInteractionTracker::GetCurrentValue(v16, 2);
              CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v16, 2u, *(float *)&v22, 1);
            }
            *(_BYTE *)(*(_QWORD *)(v16 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v16 + 504) - 1) + 20) = 1;
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++((__int64 **)&v24);
            v15 = (__int64 *)v24;
          }
        }
      }
      std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(v25);
      std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::~_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>(&v26);
    }
  }
}
