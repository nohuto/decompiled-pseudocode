/*
 * XREFs of ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800E8724
 * Callers:
 *     ?StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ @ 0x1800E85E4 (-StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ @ 0x1801BB284 (-StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ @ 0x180204AA8 (-StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x18022E320 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x180462998 (-StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x180462A24 (-StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E8790 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v3; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)LauncherTelemetryLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
