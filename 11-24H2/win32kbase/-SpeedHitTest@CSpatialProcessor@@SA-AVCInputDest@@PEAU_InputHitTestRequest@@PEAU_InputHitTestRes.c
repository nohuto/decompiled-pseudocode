/*
 * XREFs of ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x14005FAA0
 * Callers:
 *     DCompHitTest @ 0x14005FA00 (DCompHitTest.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x140048EA8 (ApiSetAddMagnificationOutputTransform.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x14009418C (-HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400D0CB0 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1400F5238 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z @ 0x1400F549C (-Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x14011FEC8 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ApiSetClientCallDitThread @ 0x140191210 (ApiSetClientCallDitThread.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x140193E94 (ApiSetRemoveMagnificationOutputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_BYTE *__fastcall CSpatialProcessor::SpeedHitTest(_BYTE *a1, unsigned int *a2, __int64 a3)
{
  char v6; // r13
  char v7; // r12
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // esi
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  _QWORD *v21; // rax
  void *v22; // rcx
  bool v24; // [rsp+60h] [rbp-D8h]
  _BYTE v25[128]; // [rsp+70h] [rbp-C8h] BYREF

  memset(a1, 0, 0x70uLL);
  a1[112] = 0;
  if ( !*a2 || (v6 = 0, *a2 == 6) )
    v6 = 1;
  ApiSetAddMagnificationOutputTransform((__int64)(a2 + 5));
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2[6];
    v9 = a2[5];
    v10 = *a2;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v12) = v24;
    LOBYTE(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      2,
      10,
      (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
      v10,
      v9,
      v8);
  }
  InputTraceLogging::DWM::HitTestRequest(*((_QWORD *)a2 + 6), (const struct _InputHitTestRequest *)a2);
  v15 = W32GetUserSessionState(v14);
  if ( (unsigned int)ApiSetClientCallDitThread(*(_QWORD *)(v15 + 3288), a2, a3) )
  {
    ApiSetRemoveMagnificationOutputTransform(a3 + 16);
    if ( v6 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69400),
          4,
          2,
          11,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( *(_DWORD *)a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 78LL);
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest((const struct _InputHitTestResult *)a3);
    }
    else
    {
      v21 = (_QWORD *)CSpatialProcessor::ResolveDcompHitTestResultToInputDest(v25, a3, *a2, *((_QWORD *)a2 + 6));
      CInputDest::operator=(a1, v21);
      CInputDest::~CInputDest((CInputDest *)v25);
      if ( *(_DWORD *)a1 && !CInputDest::GetThreadInfo((CInputDest *)a1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
    }
    if ( *(_QWORD *)(a3 + 8) && !*(_DWORD *)a1 )
      *(_DWORD *)(a3 + 80) = 0;
  }
  InputTraceLogging::DWM::HitTestResult(
    *((_QWORD *)a2 + 6),
    a2[3],
    (const struct _InputHitTestResult *)a3,
    (const struct CInputDest *)a1);
  v22 = *(void **)(a3 + 8);
  if ( v22 )
  {
    InputTraceLogging::InputSink::Close(v22, 1);
    NtClose(*(HANDLE *)(a3 + 8));
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  return a1;
}
