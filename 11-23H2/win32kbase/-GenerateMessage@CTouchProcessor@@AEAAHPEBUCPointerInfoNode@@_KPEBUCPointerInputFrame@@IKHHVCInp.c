/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C48BC
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C4038 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C42C0 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01C5AC8 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01C5E24 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01C632C (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C65A8 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01C6854 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C000B5F0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00E38CC (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     IsPointerInputMessage @ 0x1C00E4C62 (IsPointerInputMessage.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C0138BE0 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C01394A0 (EtwTraceEndPointerMessageGeneration.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B57E4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C01C4E2C (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01CDCE0 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01CECF0 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C02065DC (ApiSetEditionHandleHungWindow.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C0207DEC (ApiSetInkProcessorOnPointerMessagePosted.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  __int64 v9; // rsi
  CTouchProcessor *v10; // rcx
  unsigned int v11; // ebx
  char v12; // di
  unsigned __int16 v13; // r15
  unsigned int v14; // r14d
  __int16 v15; // r13
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  HWND WindowHandle; // rax
  CInputDest *v20; // rcx
  int v21; // r9d
  HWND v22; // r10
  __int16 v23; // ax
  HWND v24; // rax
  __int64 v25; // r8
  CTouchProcessor *v26; // rcx
  __int64 v27; // r8
  int v28; // r15d
  int v29; // ecx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v31; // edx
  int v32; // r8d
  __int16 v34; // [rsp+30h] [rbp-78h]
  unsigned __int16 v35; // [rsp+50h] [rbp-58h]
  unsigned __int64 v36; // [rsp+58h] [rbp-50h]

  v9 = a2;
  v36 = a3;
  v10 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v11 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      278,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  v13 = *(_WORD *)(v9 + 160);
  v14 = a5;
  v15 = *(_WORD *)(v9 + 172);
  v35 = v13;
  if ( a5 )
  {
    if ( !IsPointerInputMessage(a5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10375);
  }
  else
  {
    v14 = CTouchProcessor::PointerFlagsToMessage(v10, *(_DWORD *)(v9 + 180));
    if ( !v14 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          4,
          279,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        v34 = 280;
LABEL_75:
        LOBYTE(v17) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          v18->AttachedDevice,
          v16,
          v17,
          v18->DeviceExtension,
          5,
          4,
          v34,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
        goto LABEL_92;
      }
      goto LABEL_92;
    }
  }
  if ( *(_DWORD *)a9 )
    goto LABEL_63;
  if ( !*(_DWORD *)(v9 + 444) )
    goto LABEL_16;
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v9 + 352));
  if ( WindowHandle == v22 )
  {
    if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v20) )
LABEL_16:
      CInputDest::operator=((__int64)a9, v9 + 352);
  }
  else
  {
    if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 )
      v21 = 1;
    if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a9, v9 + 352, v22, v21) )
      CInputDest::SetEmpty(a9);
  }
  if ( !*(_DWORD *)a9 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        4,
        281,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( (_BYTE)v16 || v12 )
    {
      v23 = 282;
LABEL_74:
      v34 = v23;
      goto LABEL_75;
    }
    goto LABEL_92;
  }
LABEL_63:
  if ( *((_DWORD *)a9 + 23) )
  {
    v24 = CInputDest::GetWindowHandle(a9);
    InputTraceLogging::Pointer::GenerateMessage(a4, v15, v36, v14, v24);
    EtwTraceBeginPointerMessageGeneration(v13, v15, v25);
    v28 = CTouchProcessor::PostPointerMessage(v26, a9, a4, (const struct CPointerInfoNode *)v9, v36, v14, a6, a7, a8);
    if ( v28 )
    {
      ApiSetInkProcessorOnPointerMessagePosted(v14, v36);
      v29 = *(_DWORD *)(v9 + 180);
      if ( (v29 & 0x2000) != 0 && (v29 & 0x10000) != 0 )
      {
        PoLatencySensitivityHint(2LL);
        ThreadInfo = CInputDest::GetThreadInfo(a9);
        if ( ThreadInfo )
        {
          CInputGlobals::SetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1), ThreadInfo, 0);
          ApiSetEditionHandleHungWindow(a9);
        }
      }
    }
    EtwTraceEndPointerMessageGeneration(v35, v15, v27);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( (_BYTE)v31 || v12 )
    {
      LOBYTE(v32) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v32,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        284,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v11 = v28;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10437);
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( (_BYTE)v16 || v12 )
    {
      v23 = 283;
      goto LABEL_74;
    }
  }
LABEL_92:
  CInputDest::SetEmpty(a9);
  return v11;
}
