/*
 * XREFs of ??0?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180346700
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  v1 = (char *)a1 + 8;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_DWORD *)a1 + 20) = 0;
  *(_QWORD *)a1 = &wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v3 = (_QWORD *)((char *)a1 + 88);
  *((_QWORD *)v1 + 6) = "LaunchForResultsAsyncActivity";
  v3[19] = 0LL;
  v3[20] = 0LL;
  v1[4] = 0;
  v1[64] = 0;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v1 + 62) = 1;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 34) = v1;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
