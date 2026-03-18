/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800F86F4
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18003DCF4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF928 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1800F06E4 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800F85BC (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FC434 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802A7B50 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800F85BC (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1800F96F4 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1800F975C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800F9864 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800F9B2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1800F9BC8 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180230EA0 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1802357F0 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, int a3, int a4)
{
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  __int64 *v12; // r14
  unsigned int v13; // esi
  __int64 v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // xmm3_4
  int v18; // eax
  _DWORD v19[4]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h] BYREF
  int v21; // [rsp+58h] [rbp-1h]
  int v22; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp+Fh] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 208, *(unsigned int *)(a1 + 184));
    }
    else
    {
      v7 = a2 - 2;
      if ( a2 == 2 )
      {
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 208));
      }
      else if ( a2 == 3 )
      {
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 208));
      }
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle(a1 + 208, *(unsigned int *)(a1 + 184));
  }
  if ( *(_DWORD *)(a1 + 184) != a2 )
  {
    if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
    {
      v19[0] = *(_DWORD *)(a1 + 184);
      v22 = a2;
      v20 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned int)&unk_1803D8FEA,
        a3,
        a4,
        (__int64)&v20,
        (__int64)v19,
        (__int64)&v22);
    }
    *(_DWORD *)(a1 + 184) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v12 = v23;
      v23[0] = *(_QWORD *)(a1 + 336);
      v13 = 0;
      v23[1] = *(_QWORD *)(a1 + 344);
      v23[2] = *(_QWORD *)(a1 + 328);
      do
      {
        v14 = *v12;
        v19[0] = a2;
        v15 = *(_DWORD *)(v14 + 408);
        v16 = v15 + 1;
        if ( v15 + 1 >= v15 )
        {
          if ( v16 > *(_DWORD *)(v14 + 404) )
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet(v14 + 384, 4, 1, v19);
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xC0u, 0LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v14 + 384) + 4LL * *(unsigned int *)(v14 + 408)) = a2;
            *(_DWORD *)(v14 + 408) = v16;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        ++v13;
        ++v12;
      }
      while ( v13 < 3 );
    }
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        if ( v11 != 2 || (*(_BYTE *)(a1 + 540) & 0x40) != 0 )
          goto LABEL_15;
        v8 = 3LL;
      }
      else
      {
        v17 = *(_DWORD *)(a1 + 144);
        v8 = 1LL;
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 528) = v17;
      }
    }
    else
    {
      if ( *(char *)(a1 + 540) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(CResource *), __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 5688LL)
                                                                                                  + 152LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5688LL),
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 540) |= 0x80u;
      }
      v8 = 0LL;
    }
    v9 = *(_DWORD *)(a1 + 96);
    v20 = *(_QWORD *)(a1 + 88);
    v21 = v9;
    CInteractionTracker::AddPendingStateChange(a1, v8, &v20);
LABEL_15:
    CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
  }
  v10 = *(_QWORD *)(a1 + 640);
  if ( v10 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v10, (CInteractionTracker *)a1, *(_DWORD *)(a1 + 184));
  }
}
