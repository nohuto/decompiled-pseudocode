/*
 * XREFs of ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800375FC
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180033410 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x1800358C8 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180035F94 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180038538 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1803037D0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1803063AC (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_SdL @ 0x180037738 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x180038498 (WPP_SF_Sdq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
        CImmersiveApp::CImmersiveWindowCollection *this,
        int a2,
        int a3)
{
  char v4; // di
  char v6; // al
  int v7; // r8d

  v4 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_SdL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      a2,
      a3,
      *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
      *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
      *((_DWORD *)this + 51));
    if ( *((_QWORD *)this + 21) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 240LL))(**((_QWORD **)this + 20))
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 32LL))(**((_QWORD **)this + 20));
        WPP_SF_Sdq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          29,
          v7,
          *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
          *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
          v6);
      }
    }
  }
  if ( *((_DWORD *)this + 51)
    || !*((_QWORD *)this + 21)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 240LL))(**((_QWORD **)this + 20))
    || *(_DWORD *)(*((_QWORD *)this + 30) + 152LL) == 1 )
  {
    return 0;
  }
  return v4;
}
