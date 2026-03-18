/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x140058A68
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x140057884 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140059314 (rimEndPointerDeviceStaleContacts.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindAndReclaimHoldingFrame @ 0x1400563A0 (rimFindAndReclaimHoldingFrame.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1400565EC (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400D0CB0 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     rimIsWakeablePointerFrame @ 0x14011470C (rimIsWakeablePointerFrame.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140116FA8 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimCountContactsToDeliverWithFrame @ 0x14017ED68 (rimCountContactsToDeliverWithFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x14017EEEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x14017F21C (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x140180150 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1401807E4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  void *v6; // r9
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned int v10; // r13d
  int v11; // r14d
  __int64 v12; // rdi
  char v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  char v18; // di
  bool v19; // si
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // edx
  char v24; // bl
  _UNKNOWN **v25; // r8
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int16 v31; // [rsp+30h] [rbp-78h]
  _DWORD v32[18]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+10h] BYREF
  int v34; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  v6 = &WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      52,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  v7 = *(_QWORD *)(v4 + 456);
  v8 = 0;
  LODWORD(v33) = 0;
  v32[0] = 0;
  v9 = *(_QWORD *)(v7 + 768);
  if ( v9 && *(_DWORD *)(v9 + 36) )
  {
    v34 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 922LL);
  }
  rimCountContactsToDeliverWithFrame(v7, v32, &v33, v6);
  v10 = v32[0];
  if ( !v32[0] )
  {
    if ( (unsigned __int8)rimIsWakeablePointerFrame(v7) )
      rimQueueUpdateInputGlolbalsAsyncWorkItem(a1);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 19392),
        4,
        1,
        55,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
    }
    LOBYTE(v11) = v33;
    goto LABEL_45;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(a1, v7);
  v11 = v33;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(a1, v4, v10, (unsigned int)v33) )
  {
    LODWORD(v33) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 956LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v31 = 54;
    goto LABEL_27;
  }
  v33 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v33) )
  {
    LODWORD(v33) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 949LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v31 = 53;
LABEL_27:
    LOBYTE(v17) = v14;
    LOBYTE(v16) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v17,
      *(_QWORD *)(v15 + 19392),
      4,
      1,
      v31,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
LABEL_45:
    rimFindAndReclaimHoldingFrame((__int64)a1, v4);
    goto LABEL_46;
  }
  v12 = v33;
  *(_DWORD *)(v33 + 196) = v11;
  if ( (*(_DWORD *)(v4 + 168) & 0x2000) != 0 )
  {
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(v4 + 24);
    *(_DWORD *)(v12 + 192) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame(v4, v12, v3);
  rimProcessCompleteFrame(a1, v4, v12);
  v8 = 1;
LABEL_46:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = &WPP_RECORDER_INITIALIZED;
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v24;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 19392),
      4,
      1,
      56,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v8,
      v11,
      v10);
    v25 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v23) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v23) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v25) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v25) = 0;
  }
  if ( (_BYTE)v23 || (_BYTE)v25 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      (_DWORD)v25,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      57,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  return v8;
}
