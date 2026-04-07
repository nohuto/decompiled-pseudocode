/*
 * XREFs of ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180095908
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180076840 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ??$Start@II@StopWindowCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800958B0 (--$Start@II@StopWindowCapture@WindowFrameLoggingTelemetry@@SA-AV01@$$QEAI0@Z.c)
 *     ??$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHMONITOR__@@$$QEAI1@Z @ 0x1800AB6CC (--$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUH.c)
 *     ??$Start@AEAPEAUHWND__@@II@StartWindowCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHWND__@@$$QEAI1@Z @ 0x1800AB738 (--$Start@AEAPEAUHWND__@@II@StartWindowCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUHWND__.c)
 *     ??$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800AB7A4 (--$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@$$QEAI0@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDC90 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180078BC8 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  char *v2; // rbx
  _QWORD *v4; // rcx

  v2 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v4 = (_QWORD *)((char *)a1 + 88);
  *(_DWORD *)v2 = 0;
  v2[4] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 6) = a2;
  v2[64] = 0;
  *((_DWORD *)v2 + 18) = 0;
  v4[19] = 0LL;
  v4[20] = 0LL;
  memset_0(v4, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v2;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
