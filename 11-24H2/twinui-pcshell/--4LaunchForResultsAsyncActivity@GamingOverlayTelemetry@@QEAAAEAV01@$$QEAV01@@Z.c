/*
 * XREFs of ??4LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180348AE8
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180346630 (--0-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAA@XZ @ 0x180348660 (--1LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803487B0 (--4-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 */

__int64 __fastcall GamingOverlayTelemetry::LaunchForResultsAsyncActivity::operator=(__int64 a1, __int64 a2)
{
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  memset_0(v5, 0, sizeof(v5));
  wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    a1,
    *(_DWORD *)(a1 + 312) != 0);
  v5[0] = &GamingOverlayTelemetry::LaunchForResultsAsyncActivity::`vftable';
  wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (_QWORD *)a1,
    a2);
  GamingOverlayTelemetry::LaunchForResultsAsyncActivity::~LaunchForResultsAsyncActivity((GamingOverlayTelemetry::LaunchForResultsAsyncActivity *)v5);
  return a1;
}
