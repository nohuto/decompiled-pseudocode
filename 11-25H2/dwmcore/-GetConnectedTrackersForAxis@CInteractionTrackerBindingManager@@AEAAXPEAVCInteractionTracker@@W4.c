/*
 * XREFs of ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800F8C2C
 * Callers:
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1800F7B24 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800F7E3C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800F835C (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1800F849C (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800F85BC (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800F8A1C (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FB18C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FC434 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x180233950 (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802A794C (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802A7B50 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F8EC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ??1?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ @ 0x1800F8F18 (--1-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_back_internal@AEBQEAVCInteractionTracker@@@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXAEBQEAVCInteractionTracker@@@Z @ 0x1800F8F44 (--$_Emplace_back_internal@AEBQEAVCInteractionTracker@@@-$deque@PEAVCInteractionTracker@@V-$alloc.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x1800F9380 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Emplace@AEBQEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800F9450 (--$_Emplace@AEBQEAVCInteractionTracker@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$les.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD **a4,
        __int64 a5)
{
  __int64 *v5; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  unsigned __int64 i; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 **v24; // rsi
  __int64 **j; // rbx
  _QWORD *v26; // r10
  _QWORD *v27; // rax
  _BYTE v28[16]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v29; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+40h] [rbp-20h]
  unsigned __int64 v31; // [rsp+48h] [rbp-18h]
  __int64 v32; // [rsp+50h] [rbp-10h]
  _QWORD *v33; // [rsp+90h] [rbp+30h] BYREF
  __int64 v34; // [rsp+98h] [rbp+38h] BYREF

  v34 = a2;
  v5 = (__int64 *)a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v10 = 0LL;
  v11 = 0xCBF29CE484222325uLL;
  do
  {
    v12 = *((unsigned __int8 *)&v34 + v10++);
    v11 = 0x100000001B3LL * (v12 ^ v11);
  }
  while ( v10 < 8 );
  v13 = a1[13];
  v14 = 2 * (v11 & a1[16]);
  result = *(_QWORD *)(v13 + 8 * v14 + 8);
  if ( result == a1[11] )
  {
LABEL_9:
    result = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v13 + 8 * v14);
    while ( a2 != *(_QWORD *)(result + 16) )
    {
      if ( result == v13 )
        goto LABEL_9;
      result = *(_QWORD *)(result + 8);
    }
  }
  if ( !result || result == a1[11] )
  {
    result = std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Emplace<CInteractionTracker * const &>(
               a4,
               v28,
               &v34);
    if ( v5 )
    {
      result = v34;
      *v5 = v34;
    }
  }
  else if ( a3 <= 7 )
  {
    result = 150LL;
    if ( _bittest((const int *)&result, a3) )
    {
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v29 = 0LL;
      std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&v29, v13);
      std::deque<CInteractionTracker *>::_Emplace_back_internal<CInteractionTracker * const &>(&v29, &v34);
      while ( v32 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v29 + 1) + 8 * ((v30 - 1) & (v31 >> 1))) + 8 * (v31 & 1));
        a5 = v16;
        if ( --v32 )
          ++v31;
        else
          v31 = 0LL;
        v17 = 0xCBF29CE484222325uLL;
        for ( i = 0LL; i < 8; ++i )
        {
          v19 = *((unsigned __int8 *)&a5 + i);
          v17 = 0x100000001B3LL * (v19 ^ v17);
        }
        v20 = a1[13];
        v21 = 2 * (a1[16] & v17);
        v22 = a1[11];
        v23 = *(_QWORD *)(v20 + 8 * v21 + 8);
        if ( v23 == v22 )
        {
LABEL_25:
          v23 = 0LL;
        }
        else
        {
          while ( v16 != *(_QWORD *)(v23 + 16) )
          {
            if ( v23 == *(_QWORD *)(v20 + 8 * v21) )
              goto LABEL_25;
            v23 = *(_QWORD *)(v23 + 8);
          }
        }
        if ( v23 )
          v22 = v23;
        v24 = *(__int64 ***)(v22 + 32);
        for ( j = (__int64 **)*v24; j != v24; j = (__int64 **)*j )
        {
          v26 = *a4;
          v27 = (_QWORD *)**a4;
          v33 = v27;
          while ( v27 != v26 )
          {
            if ( (__int64 *)v27[4] == j[2] )
            {
              if ( v27 != v26 )
                goto LABEL_37;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v33);
            v27 = v33;
          }
          if ( (a3 & (_DWORD)j[3]) == a3 || a3 == 7 )
            std::deque<CInteractionTracker *>::_Emplace_back_internal<CInteractionTracker * const &>(&v29, j + 2);
LABEL_37:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Emplace<CInteractionTracker * const &>(
          a4,
          v28,
          &a5);
        if ( v5 && (*(_BYTE *)(a5 + 541) & 1) != 0 )
          *v5 = a5;
      }
      return std::deque<CInteractionTracker *>::~deque<CInteractionTracker *>(&v29);
    }
  }
  return result;
}
