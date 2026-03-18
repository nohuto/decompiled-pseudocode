/*
 * XREFs of ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E3350
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180014980 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x180014AC0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1800E36A8 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1800E37B8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800E42F8 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x180212234 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1802122EC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x180214BA8 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180214BEC (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SetProperty(__int64 a1, int a2, int a3, const struct D2DVector3 *a4)
{
  char v4; // bp
  char v5; // si
  float v6; // xmm6_4
  char v7; // di
  BOOL v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // r9
  int v19; // edx
  int v20; // edx
  int v21; // edx
  __int64 v22; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v6 = *(float *)(a1 + 144);
  v7 = 0;
  v22 = *(_QWORD *)(a1 + 88);
  if ( a3 == 52 )
  {
    v13 = a2 - 1;
    if ( !v13 )
    {
      CInteractionTracker::SetPosition(a1, (__int64)a4, 0);
      goto LABEL_4;
    }
    v14 = v13 - 22;
    if ( v14 )
    {
      v15 = v14 - 3;
      if ( v15 )
      {
        if ( v15 == 35 )
        {
          CInteractionTracker::SetPositionInertiaDecayRate((CInteractionTracker *)a1, a4);
          goto LABEL_4;
        }
        goto LABEL_3;
      }
      CInteractionTracker::SetMaxPosition((CInteractionTracker *)a1, a4);
    }
    else
    {
      CInteractionTracker::SetMinPosition((CInteractionTracker *)a1, a4);
    }
    if ( *(float *)&v22 != *(float *)(a1 + 88) )
      v5 = 1;
    if ( *((float *)&v22 + 1) != *(float *)(a1 + 92) )
      v7 = 1;
    goto LABEL_4;
  }
  if ( a3 != 18 )
  {
LABEL_3:
    v4 = 1;
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  v19 = a2 - 2;
  if ( !v19 )
  {
    CInteractionTracker::SetScale(a1, *(float *)a4, 0);
    goto LABEL_4;
  }
  v20 = v19 - 27;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 34 )
      {
        CInteractionTracker::SetScaleInertiaDecayRate((CInteractionTracker *)a1, *(float *)a4);
        goto LABEL_4;
      }
      goto LABEL_3;
    }
    CInteractionTracker::SetMaxScale((CInteractionTracker *)a1, *(float *)a4);
  }
  else
  {
    CInteractionTracker::SetMinScale((CInteractionTracker *)a1, *(float *)a4);
  }
  v9 = v6 != *(float *)(a1 + 144);
  if ( *(float *)&v22 != *(float *)(a1 + 88) )
    v5 = 1;
  if ( *((float *)&v22 + 1) != *(float *)(a1 + 92) )
    v7 = 1;
LABEL_5:
  v10 = *(_QWORD *)(a1 + 640);
  if ( v10 )
  {
    v16 = 4 * v9;
    v17 = v16 | 1;
    if ( !v5 )
      v17 = v16;
    v18 = v17 | 2;
    if ( !v7 )
      v18 = v17;
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(v10, a1, a1, v18);
  }
  if ( v4 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x58Cu, 0LL);
  }
  else
  {
    return 0;
  }
  return v11;
}
