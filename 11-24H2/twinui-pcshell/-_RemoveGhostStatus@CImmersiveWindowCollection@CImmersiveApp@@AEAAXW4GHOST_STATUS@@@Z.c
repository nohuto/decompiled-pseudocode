/*
 * XREFs of ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18006979C
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180035F94 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180069280 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18009D610 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18030328C (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z @ 0x180304940 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180304C40 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     WPP_SF_LSdL @ 0x180069824 (WPP_SF_LSdL.c)
 */

int __fastcall CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // r8d

  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_LSdL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      23,
      *(_QWORD *)(a1 + 152),
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 152) + 576LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 152) + 584LL),
      *(_DWORD *)(a1 + 204));
  }
  v4 = *(_DWORD *)(a1 + 204);
  v5 = v4 & ~a2;
  *(_DWORD *)(a1 + 204) = v5;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v4, v5);
}
