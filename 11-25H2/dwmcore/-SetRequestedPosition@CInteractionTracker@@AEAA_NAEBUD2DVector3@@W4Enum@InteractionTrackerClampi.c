/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC
 * Callers:
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1800F5E40 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1802A78A0 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18003BDB0 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18003D694 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18003DCF4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800F75E4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1800F7810 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1800F8A1C (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(__int64 a1, __int64 a2, int a3, int a4)
{
  char v5; // di
  int v6; // ecx
  int v9; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  CInteractionTrackerBindingManager *v16; // rcx
  char v17; // cl
  struct CResource *TargetResource; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 184);
  if ( v6 )
  {
    v9 = v6 - 2;
    if ( !v9 )
      goto LABEL_6;
    if ( v9 != 1 )
      return v5;
    v11 = *(_QWORD *)(a1 + 352);
    v12 = *(_QWORD *)(a1 + 360);
    *(_BYTE *)(a1 + 541) &= ~2u;
    if ( a4 && v12 )
    {
      if ( a4 == 1 )
      {
        if ( v11 )
        {
          TargetResource = (struct CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v11);
          if ( TargetResource )
          {
            *((_BYTE *)TargetResource + 224) &= ~1u;
            CResource::UnRegisterNotifierInternal((CResource *)a1, TargetResource);
          }
          CInteractionTracker::ClearCustomAnimation((CInteractionTracker *)a1, 0);
        }
        *(_BYTE *)(a1 + 541) |= 2u;
      }
    }
    else
    {
LABEL_6:
      CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
    }
  }
  v5 = 1;
  v13 = *(_DWORD *)(a2 + 8);
  v19 = *(_QWORD *)a2;
  v20 = v13;
  if ( a3 )
  {
    if ( a3 == 1 )
      *(_BYTE *)(a1 + 541) |= 8u;
  }
  else
  {
    v14 = fmaxf(*(float *)a2, *(float *)(a1 + 100));
    v15 = fmaxf(*(float *)(a2 + 4), *(float *)(a1 + 104));
    v20 = 0;
    v19 = __PAIR64__(
            COERCE_UNSIGNED_INT(fminf(v15, *(float *)(a1 + 116))),
            COERCE_UNSIGNED_INT(fminf(v14, *(float *)(a1 + 112))));
  }
  CInteractionTracker::SetPosition(a1, (__int64)&v19, 0);
  v16 = *(CInteractionTrackerBindingManager **)(a1 + 640);
  if ( v16 )
  {
    *(_BYTE *)(a1 + 541) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
      v16,
      (struct CInteractionTracker *)a1,
      (const struct D2DVector3 *)&v19,
      1);
    CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)a1, 0);
  }
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 208));
  v17 = *(_BYTE *)(a1 + 541);
  if ( (v17 & 2) != 0 )
    *(_BYTE *)(a1 + 541) = v17 | 1;
  return v5;
}
