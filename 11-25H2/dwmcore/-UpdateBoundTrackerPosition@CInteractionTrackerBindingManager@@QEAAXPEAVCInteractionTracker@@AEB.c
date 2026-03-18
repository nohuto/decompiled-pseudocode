/*
 * XREFs of ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800F8A1C
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18003BDB0 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18003BDB0 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800F75E4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800F8C2C (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F8EC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@@Z @ 0x1800F9698 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@-$_Tree_val@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        const struct D2DVector3 *a3,
        char a4)
{
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  _QWORD *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]

  v7 = (int)this;
  if ( (*((_BYTE *)a2 + 541) & 1) != 0 )
  {
    v17 = 0LL;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v8 = v8;
    *(_QWORD *)(v8 + 8) = v8;
    *(_QWORD *)(v8 + 16) = v8;
    *(_WORD *)(v8 + 24) = 257;
    v16 = (_QWORD *)v8;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(v7, (_DWORD)a2, 1, (unsigned int)&v16, 0LL);
    v9 = *v16;
    v18 = *v16;
    while ( !*(_BYTE *)(v9 + 25) )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( (struct CInteractionTracker *)v10 != a2 )
      {
        if ( (*(_BYTE *)(v10 + 541) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v9 + 32), 0);
        v11 = *(_DWORD *)(v10 + 96);
        v19 = *(_QWORD *)(v10 + 88);
        LODWORD(v19) = *(_DWORD *)a3;
        v20 = v11;
        CInteractionTracker::SetPosition(v10, (__int64)&v19, 1);
      }
      *(_BYTE *)(v10 + 540) = (4 * a4) | *(_BYTE *)(v10 + 540) & 0xFB;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v18);
      v9 = v18;
    }
    v12 = v16;
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      &v16,
      &v16,
      v16[1]);
    v12[1] = v12;
    *v12 = v12;
    v12[2] = v12;
    v17 = 0LL;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(v7, (_DWORD)a2, 2, (unsigned int)&v16, 0LL);
    v13 = *v16;
    v18 = *v16;
    while ( !*(_BYTE *)(v13 + 25) )
    {
      v14 = *(_QWORD *)(v13 + 32);
      if ( (struct CInteractionTracker *)v14 != a2 )
      {
        if ( (*(_BYTE *)(v14 + 541) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker(*(CInteractionTracker **)(v13 + 32), 0);
        v15 = *(_DWORD *)(v14 + 96);
        v19 = *(_QWORD *)(v14 + 88);
        HIDWORD(v19) = *((_DWORD *)a3 + 1);
        v20 = v15;
        CInteractionTracker::SetPosition(v14, (__int64)&v19, 1);
      }
      *(_BYTE *)(v14 + 540) = (4 * a4) | *(_BYTE *)(v14 + 540) & 0xFB;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v18);
      v13 = v18;
    }
    std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
      &v16,
      &v16,
      v16[1]);
    std::_Deallocate<16,0>(v16, 0x28uLL);
  }
}
