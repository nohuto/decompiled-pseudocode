/*
 * XREFs of ??4?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803487B0
 * Callers:
 *     ??4LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180348AE8 (--4LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180025228 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180120588 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x1801E2304 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180361280 (-reset@-$shared_object@V-$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProvid.c)
 */

_QWORD *__fastcall wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // r15
  _QWORD *v7; // r14

  v4 = a2 + 8;
  v5 = (__int64)(a1 + 1);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)(a1 + 1),
    a2 + 8);
  v6 = (_QWORD *)(a2 + 280);
  v7 = a1 + 35;
  if ( a1 + 35 != (_QWORD *)(a2 + 280) )
  {
    wil::details::shared_object<wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 35);
    *v7 = *v6;
    *v6 = 0LL;
  }
  if ( *v7 )
    v5 = *v7 + 8LL;
  a1[34] = v5;
  a1[40] = v5 + 40;
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 36),
    *(_DWORD *)(a2 + 312) != 0);
  *(_QWORD *)(a2 + 272) = v4;
  if ( *(_DWORD *)(a2 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
