/*
 * XREFs of ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E8D88
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800E8460 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ @ 0x1800E8D5C (--1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BAD30 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x1802CC880 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1802CCC1C (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x1802CCF34 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180462824 (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180462850 (--1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E8930 (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ?ReportStopActivity@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800E8AD8 (-ReportStopActivity@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801D4750 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  volatile signed __int32 **v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (volatile signed __int32 **)(a1 + 35);
  v3 = 1;
  if ( !a1[35] )
    goto LABEL_2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v6);
  if ( !*v1 || **v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v6);
  if ( v3 )
  {
LABEL_2:
    v4 = (_DWORD *)a1[34];
    if ( *v4 == 1 )
    {
      LODWORD(v6) = v4[22];
      v5 = 2147942974LL;
      if ( (int)v6 < 0 )
        v5 = (unsigned int)v6;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v5,
        &v6);
      wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        a1,
        (int)v6);
    }
  }
}
