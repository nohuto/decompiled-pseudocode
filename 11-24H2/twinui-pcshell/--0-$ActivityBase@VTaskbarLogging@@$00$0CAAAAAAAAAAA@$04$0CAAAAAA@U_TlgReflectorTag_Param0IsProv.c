/*
 * XREFs of ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068A964
 * Callers:
 *     ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x18068A3B0 (--$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA-AV01@XZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  v1 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *((_DWORD *)a1 + 2) = 0;
  v3 = (_QWORD *)((char *)a1 + 88);
  v1[4] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 6) = "PinningActivity";
  v1[64] = 0;
  *((_DWORD *)v1 + 18) = 0;
  v3[19] = 0LL;
  v3[20] = 0LL;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v1 + 62) = 1;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v1;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
