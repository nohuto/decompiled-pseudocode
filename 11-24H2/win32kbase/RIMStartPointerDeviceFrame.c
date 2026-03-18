/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1400574B8
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x140057884 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140059314 (rimEndPointerDeviceStaleContacts.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimFindHoldingFrame @ 0x1400563E0 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1400F4B34 (-StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z.c)
 *     ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1400FFE00 (-StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // esi
  char v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD *HoldingFrame; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  char v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx

  v4 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      48,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame )
    goto LABEL_43;
  v13 = Win32AllocPoolZInitImpl(256LL, 0x58uLL, 0x66687352u);
  HoldingFrame = (_QWORD *)v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(a2 + 16);
    v14 = (_QWORD *)(a1 + 728);
    v15 = *(_QWORD *)(a1 + 728);
    if ( *(_QWORD *)(v15 + 8) != a1 + 728 )
      __fastfail(3u);
    *HoldingFrame = v15;
    HoldingFrame[1] = v14;
    *(_QWORD *)(v15 + 8) = HoldingFrame;
    *v14 = HoldingFrame;
  }
  if ( HoldingFrame )
  {
LABEL_43:
    if ( *((_DWORD *)HoldingFrame + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 794LL);
    if ( *((_DWORD *)HoldingFrame + 11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 795LL);
    if ( *((_DWORD *)HoldingFrame + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 796LL);
    if ( *((_DWORD *)HoldingFrame + 10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 797LL);
    if ( HoldingFrame[9] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 798LL);
    if ( HoldingFrame[10] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 799LL);
    if ( HoldingFrame[4] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 800LL);
    if ( HoldingFrame[7] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 801LL);
    if ( HoldingFrame[8] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 802LL);
    *((_DWORD *)HoldingFrame + 4) = 1;
    v4 = 1;
    HoldingFrame[4] = a3;
  }
  InputTraceLogging::RIM::StartFrame((const struct RIMDEV *)a2, (const struct RIMHOLDINGFRAME *)HoldingFrame);
  InputTraceLogging::TelemetryDebug::RIM::StartFrame(a3);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
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
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 19392),
      4,
      1,
      49,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v4);
  }
  return v4;
}
