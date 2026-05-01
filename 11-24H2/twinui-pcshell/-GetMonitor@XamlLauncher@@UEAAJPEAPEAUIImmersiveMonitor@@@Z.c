/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800E8460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ @ 0x1800E85E4 (-StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E8930 (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E8988 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E8D28 (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ??1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ @ 0x1800E8D5C (--1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E8D88 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rdi
  int v6[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+28h] [rbp-D8h] BYREF
  char v8; // [rsp+2Ch] [rbp-D4h]
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  const char *v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+60h] [rbp-A0h]
  char v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+70h] [rbp-90h]
  _BYTE v14[152]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v15; // [rsp+110h] [rbp+10h]
  int v16; // [rsp+120h] [rbp+20h]
  __int64 v17; // [rsp+128h] [rbp+28h]
  int *v18; // [rsp+130h] [rbp+30h]
  __int64 v19; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v20[3]; // [rsp+140h] [rbp+40h] BYREF
  int v21; // [rsp+158h] [rbp+58h]
  int *v22; // [rsp+160h] [rbp+60h]
  char v23; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 44) )
    return 2147943568LL;
  v7 = 0;
  v8 = 0;
  v12 = 0;
  v9 = 0;
  v10 = "GetImmersiveMonitor";
  v11 = 0LL;
  v13 = 0;
  v15 = 0LL;
  memset_0(v14, 0, sizeof(v14));
  v16 = 1;
  v17 = 0LL;
  v18 = &v7;
  v19 = 0LL;
  v20[0] = 0LL;
  v20[1] = v6;
  v20[2] = 0LL;
  v21 = 0;
  v22 = &v9;
  v23 = 0;
  *(_QWORD *)v6 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  StartWindowTelemetry::GetImmersiveMonitor::StartActivity((StartWindowTelemetry::GetImmersiveMonitor *)v6);
  v4 = *((_QWORD *)this + 22);
  *a2 = 0LL;
  if ( !*(_QWORD *)(v4 + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x80070490LL);
    StartWindowTelemetry::GetImmersiveMonitor::~GetImmersiveMonitor((StartWindowTelemetry::GetImmersiveMonitor *)v6);
    return 2147943568LL;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 64));
  *a2 = *(struct IImmersiveMonitor **)(v4 + 64);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
  *(_QWORD *)v6 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v20);
  wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v19);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(&v7);
  return 0LL;
}
