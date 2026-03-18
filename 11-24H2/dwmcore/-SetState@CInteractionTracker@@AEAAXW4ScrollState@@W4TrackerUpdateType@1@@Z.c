/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800DF830 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800E1D34 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5790 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801E09AC (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E143C (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x18029DD7C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180096A38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800E1918 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1800E1A10 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1800E1D34 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1800E2E74 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1800E3E70 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180225690 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x18022A1F0 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, int a3)
{
  __int64 v6; // rcx
  int v7; // edx
  float v8; // xmm3_4
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  __int64 *v12; // r14
  unsigned int v13; // esi
  __int64 v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  __int64 *v18; // [rsp+20h] [rbp-39h]
  _DWORD *v19; // [rsp+28h] [rbp-31h]
  int *v20; // [rsp+30h] [rbp-29h]
  _DWORD v21[4]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h] BYREF
  int v23; // [rsp+58h] [rbp-1h]
  int v24; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp+Fh] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 208, *(unsigned int *)(a1 + 184));
    }
    else
    {
      v6 = (unsigned int)(a2 - 2);
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
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle((InteractionSourceManager *)(a1 + 208));
  }
  if ( *(_DWORD *)(a1 + 184) != a2 )
  {
    if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
    {
      v21[0] = *(_DWORD *)(a1 + 184);
      v20 = &v24;
      v24 = a2;
      v19 = v21;
      v18 = &v22;
      v22 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (__int64)&unk_1803CE072);
    }
    *(_DWORD *)(a1 + 184) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v12 = v25;
      v25[0] = *(_QWORD *)(a1 + 336);
      v13 = 0;
      v25[1] = *(_QWORD *)(a1 + 344);
      v25[2] = *(_QWORD *)(a1 + 328);
      do
      {
        v14 = *v12;
        v21[0] = a2;
        v15 = *(_DWORD *)(v14 + 408);
        v16 = v15 + 1;
        if ( v15 + 1 >= v15 )
        {
          if ( v16 > *(_DWORD *)(v14 + 404) )
          {
            v17 = DynArrayImpl<0>::AddMultipleAndSet(v14 + 384, 4, 1, v21);
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xC0u, 0LL);
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
      if ( !v11 )
      {
        v8 = *(float *)(a1 + 144);
        v7 = 1;
        *(_DWORD *)(a1 + 196) = 0;
        *(float *)(a1 + 528) = v8;
        goto LABEL_15;
      }
      if ( v11 != 2 || (*(_BYTE *)(a1 + 540) & 0x40) != 0 )
        goto LABEL_16;
      v7 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 540) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(CCachedVisualImage *), __int64, __int64, __int64 *, _DWORD *, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 5688LL) + 152LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5688LL),
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL,
               v18,
               v19,
               v20) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 540) |= 0x80u;
      }
      v7 = 0;
    }
    v8 = *(float *)(a1 + 144);
LABEL_15:
    v9 = *(_DWORD *)(a1 + 96);
    v22 = *(_QWORD *)(a1 + 88);
    v23 = v9;
    CInteractionTracker::AddPendingStateChange(a1, v7, &v22, v8);
LABEL_16:
    CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
  }
  v10 = *(_QWORD *)(a1 + 640);
  if ( v10 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v10, (CInteractionTracker *)a1, *(_DWORD *)(a1 + 184));
  }
}
