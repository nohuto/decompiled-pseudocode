/*
 * XREFs of ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800DEB94
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800DEFC4 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800DF384 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800DFF78 (--1-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V-$_Uhash_com.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@1@AEBV?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@1@@Z @ 0x1800E04C8 (--0-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$_Uh.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1800E0554 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800E54A8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
        CInteractionTrackerBindingManager *this,
        CScrollAnimation **a2)
{
  unsigned int v4; // ebx
  double CurrentValue; // xmm0_8
  float v6; // xmm7_4
  float ForceEngineCurrentValue; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+38h] [rbp-49h] BYREF
  float v20; // [rsp+48h] [rbp-39h]
  float v21; // [rsp+4Ch] [rbp-35h]
  float v22; // [rsp+54h] [rbp-2Dh]
  _BYTE v23[8]; // [rsp+78h] [rbp-9h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp-1h]
  int v25; // [rsp+F0h] [rbp+6Fh] BYREF

  if ( (*((_BYTE *)a2 + 541) & 1) != 0 )
  {
    v25 = 0;
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>(
      v23,
      &v25);
    v4 = 0;
    CInteractionTracker::CalculateInertiaCallbackValues(a2, v19);
    CurrentValue = CInteractionTracker::GetCurrentValue(a2, 0LL);
    v6 = v20 - *(float *)&CurrentValue;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a2)
      && CScrollAnimation::HasActiveInertiaForce(a2[43]) )
    {
      ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(a2[43]);
    }
    else
    {
      ForceEngineCurrentValue = *((float *)a2 + 23);
    }
    v8 = v21 - ForceEngineCurrentValue;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a2)
      && CScrollAnimation::HasActiveInertiaForce(a2[41]) )
    {
      v9 = CScrollAnimation::GetForceEngineCurrentValue(a2[41]);
    }
    else
    {
      v9 = *((float *)a2 + 36);
    }
    if ( v6 != 0.0 )
      v4 = 1;
    if ( v8 != 0.0 )
      v4 |= 2u;
    if ( (float)(v22 / v9) != 1.0 )
      v4 |= 4u;
    CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(this, a2, v4, v23);
    v11 = v24;
    for ( i = (_QWORD *)*v24; i != v11; i = (_QWORD *)*i )
    {
      if ( (*(_BYTE *)(i[2] + 541LL) & 1) == 0 )
      {
        v13 = CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(v10, v19, a2);
        v14 = *(_OWORD *)v13;
        v15 = *(_OWORD *)(v13 + 16);
        v16 = *(_OWORD *)(v13 + 32);
        v17 = *(_QWORD *)(v13 + 48);
        v18 = i[2];
        *(_OWORD *)(v18 + 580) = v14;
        *(_OWORD *)(v18 + 596) = v15;
        *(_OWORD *)(v18 + 612) = v16;
        *(_QWORD *)(v18 + 628) = v17;
        v11 = v24;
      }
    }
    std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::~_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>(v23);
  }
}
