/*
 * XREFs of ??$Start@$$V@PerformDelayedInitialization@StartWindowTelemetry@@SA?AV01@XZ @ 0x1802C85D8
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E886C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x18022E320 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 */

StartWindowTelemetry::PerformDelayedInitialization *__fastcall StartWindowTelemetry::PerformDelayedInitialization::Start<>(
        StartWindowTelemetry::PerformDelayedInitialization *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"PerformDelayedInitialization");
  *(_QWORD *)this = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  StartWindowTelemetry::PerformDelayedInitialization::StartActivity(this);
  return this;
}
