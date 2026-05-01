/*
 * XREFs of ?TransferToMember@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x1804670A8
 * Callers:
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180227834 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801CFE4C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

struct wil::details::IFailureCallback *__fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToMember(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    0);
  *(_QWORD *)a2 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  return a2;
}
