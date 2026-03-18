/*
 * XREFs of ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800E42F8
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1800DFAE8 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E3350 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x18029DC6C (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180014980 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x180014AC0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E263C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800E2E18 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  int v8; // eax
  __int64 v9; // rax
  int v10; // xmm6_4
  __int64 *v11; // rax
  float v12; // xmm6_4
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  int v19; // xmm6_4
  __int64 *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 **v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h]
  __int64 **v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+60h] [rbp-20h]

  if ( (a4 & 4) != 0 )
  {
    v12 = *(float *)(a2 + 144);
    v27 = 0LL;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v13 = v13;
    *(_QWORD *)(v13 + 8) = v13;
    *(_QWORD *)(v13 + 16) = v13;
    *(_WORD *)(v13 + 24) = 257;
    v26 = (__int64 **)v13;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 4u, &v26, 0LL);
    v14 = *v26;
    v23 = *v26;
    while ( !*((_BYTE *)v14 + 25) )
    {
      v15 = v14[4];
      if ( v15 != a2 )
        CInteractionTracker::SetScale(v15, v12, 1);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v23);
      v14 = v23;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      (__int64)&v26,
      (__int64)&v26,
      v26[1]);
    std::_Deallocate<16,0>(v26, 0x28uLL);
  }
  v8 = *(_DWORD *)(a2 + 96);
  v26 = *(__int64 ***)(a2 + 88);
  LODWORD(v27) = v8;
  if ( (a4 & 1) != 0 )
  {
    v25 = 0LL;
    v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v18 = v18;
    *(_QWORD *)(v18 + 8) = v18;
    *(_QWORD *)(v18 + 16) = v18;
    *(_WORD *)(v18 + 24) = 257;
    v24 = (__int64 **)v18;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 1u, &v24, 0LL);
    v19 = (int)v26;
    v20 = *v24;
    v23 = *v24;
    while ( !*((_BYTE *)v20 + 25) )
    {
      v21 = v20[4];
      if ( v21 != a2 )
      {
        v28 = *(_QWORD *)(v21 + 88);
        v22 = *(_DWORD *)(v21 + 96);
        LODWORD(v28) = v19;
        v29 = v22;
        CInteractionTracker::SetPosition(v21, (__int64)&v28, 1);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v23);
      v20 = v23;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      (__int64)&v24,
      (__int64)&v24,
      v24[1]);
    std::_Deallocate<16,0>(v24, 0x28uLL);
  }
  if ( (a4 & 2) != 0 )
  {
    v25 = 0LL;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v9 = v9;
    *(_QWORD *)(v9 + 8) = v9;
    *(_QWORD *)(v9 + 16) = v9;
    *(_WORD *)(v9 + 24) = 257;
    v24 = (__int64 **)v9;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 2u, &v24, 0LL);
    v10 = HIDWORD(v26);
    v11 = *v24;
    v23 = *v24;
    while ( !*((_BYTE *)v11 + 25) )
    {
      v16 = v11[4];
      if ( v16 != a2 )
      {
        v26 = *(__int64 ***)(v16 + 88);
        v17 = *(_DWORD *)(v16 + 96);
        HIDWORD(v26) = v10;
        LODWORD(v27) = v17;
        CInteractionTracker::SetPosition(v16, (__int64)&v26, 1);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v23);
      v11 = v23;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      (__int64)&v24,
      (__int64)&v24,
      v24[1]);
    std::_Deallocate<16,0>(v24, 0x28uLL);
  }
}
