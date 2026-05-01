/*
 * XREFs of ?zInternalStart@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800E5880
 * Callers:
 *     ?StartActivity@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1800E55E4 (-StartActivity@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG@Z @ 0x1800E62C8 (-StartActivity@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG.c)
 *     ?StartActivity@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1800E635C (-StartActivity@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x1801223CC (-StartActivity@EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 *     ?StartActivity@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18021D8FC (-StartActivity@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAX_K00@Z @ 0x18022CDE4 (-StartActivity@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemet.c)
 *     ?StartActivity@EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAX_N_K11@Z @ 0x18029FD84 (-StartActivity@EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenter.c)
 *     ?StartActivity@EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x1802A4408 (-StartActivity@EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUI.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802ACF24 (-StartActivity@EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXX.c)
 *     ?StartActivity@EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802AE754 (-StartActivity@EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXX.c)
 *     ?StartActivity@EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802AE7E0 (-StartActivity@EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18037695C (-StartActivity@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA.c)
 *     ?StartActivity@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1803769E8 (-StartActivity@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x180376A74 (-StartActivity@EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E5C38 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)ControlCenterLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
