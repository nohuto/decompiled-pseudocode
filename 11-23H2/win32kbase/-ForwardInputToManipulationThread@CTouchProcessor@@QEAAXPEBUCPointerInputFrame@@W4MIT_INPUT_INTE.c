/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2DE0
 * Callers:
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C2D80 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4EF8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage @ 0x1C00D4660 (Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C00E3D8E (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E3E18 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BAC80 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01BB060 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01BFD1C (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C01D2D30 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D30D4 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(CTouchProcessor *a1, __int64 a2, int a3)
{
  unsigned int v5; // r13d
  int v6; // r8d
  bool v7; // bl
  int v8; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  size_t v12; // r15
  CTouchProcessor *v13; // rcx
  char *v14; // r12
  char *v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  bool v18; // bl
  int v19; // edx
  LARGE_INTEGER PerformanceCounter; // rbx
  CTouchProcessor *v21; // rcx
  char *v22; // rdi
  __int64 v23; // r9
  char v24; // r14
  char v25; // r13
  __int128 v26; // xmm1
  unsigned int v27; // r12d
  struct CInputPointerNode *NodeById; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rbx
  char v33; // cf
  unsigned int v34; // [rsp+58h] [rbp-69h]
  unsigned int v35[2]; // [rsp+58h] [rbp-69h]
  size_t Size; // [rsp+60h] [rbp-61h]
  char *Buffer; // [rsp+68h] [rbp-59h]
  __int64 v38; // [rsp+70h] [rbp-51h] BYREF
  int v39; // [rsp+78h] [rbp-49h]
  int v40; // [rsp+7Ch] [rbp-45h]
  int v41; // [rsp+80h] [rbp-41h]
  int v42; // [rsp+84h] [rbp-3Dh]
  __int128 v43; // [rsp+88h] [rbp-39h]
  __int128 v44; // [rsp+98h] [rbp-29h]

  v5 = CTouchProcessor::CountMTNodesReadyForRouting(a1, (const struct CPointerInputFrame *)a2);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3034);
  if ( (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() && !v5 )
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 77;
      LOBYTE(v8) = v7;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        77,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    return;
  }
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked((struct _KTHREAD **)a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3043);
  v9 = 240LL * (v5 - 1);
  if ( v9 > 0xFFFFFFFF || (v10 = v9 + 408, (unsigned int)v9 >= 0xFFFFFE68) )
  {
    v10 = 0;
    v11 = 0;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3055);
  }
  else
  {
    v11 = v9 + 408;
  }
  v12 = v11;
  Size = v11;
  if ( !(unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() )
  {
    Buffer = (char *)Win32AllocPoolZInit(v11, 0x6D696955u);
    v14 = Buffer;
    if ( !Buffer )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3083);
      Size = v11;
    }
    goto LABEL_38;
  }
  Size = v11;
  if ( (unsigned __int64)v11 <= *((_QWORD *)a1 + 18) )
  {
LABEL_37:
    v14 = (char *)*((_QWORD *)a1 + 17);
    Buffer = v14;
LABEL_38:
    *(_DWORD *)v14 = a3;
    v34 = CTouchProcessor::CalcManipulationInputInfoSize(v13, v5);
    if ( v10 <= v34 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3089);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((isChildPartition() ? 0x48 : 0) + a2 + 104) = PerformanceCounter;
    CTouchProcessor::BuildManipulationInputInfo(
      v21,
      (struct tagMANIPULATION_INPUT_INFO *)(v14 + 8),
      v34,
      (const struct CPointerInputFrame *)a2);
    InputTraceLogging::TelemetryDebug::Pointer::SendFrameToUserMode((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a2 + 72));
    v22 = v14 + 8;
    InputTraceLogging::Pointer::SendFrameToUserMode(
      (const struct CPointerInputFrame *)a2,
      v5,
      (const struct tagMANIPULATION_INPUT_INFO *)(v14 + 8));
    SendMessageTo(7LL, (__int64)v14, v10, v23);
    v24 = 0;
    v25 = 0;
    v26 = *(_OWORD *)(v14 + 184);
    v43 = *(_OWORD *)(v14 + 168);
    v44 = v26;
    if ( !*((_DWORD *)v14 + 39) )
      goto LABEL_52;
    v27 = 0;
    do
    {
      *(_QWORD *)v35 = 240LL * v27;
      NodeById = CTouchProcessor::FindNodeById((struct _KTHREAD **)a1, *(_WORD *)&v22[*(_QWORD *)v35 + 164], 0, 0);
      if ( NodeById )
      {
        _InterlockedAdd((volatile signed __int32 *)NodeById + 9, 1u);
        if ( *((int *)NodeById + 9) <= 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3117);
      }
      v29 = *(_DWORD *)&v22[*(_QWORD *)v35 + 172];
      if ( (v29 & 2) != 0 )
        v25 = 1;
      if ( (v29 & 4) != 0 )
        v24 = 1;
      ++v27;
    }
    while ( v27 < *((_DWORD *)v22 + 37) );
    v12 = Size;
    v14 = Buffer;
    if ( !v24 )
    {
LABEL_52:
      if ( (_DWORD)v43 != 3 || !v25 )
      {
        v30 = HMValidateHandleNoSecure(v44, 19);
        if ( v30 && (v32 = *(_QWORD *)(v30 + 472)) != 0 )
        {
          v41 = *(_DWORD *)(v32 + 956);
          v33 = *((_DWORD *)v22 + 38) & 1;
          v42 = 0;
          v38 = v44;
          v40 = -v33;
          v39 = v43;
          SendMessageTo(19LL, (__int64)&v38, 24LL, v31);
          *(_DWORD *)(v32 + 960) = 0;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3159);
        }
      }
    }
    if ( (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() )
      memset(v14, 0, v12);
    else
      Win32FreePool(v14);
    return;
  }
  v15 = (char *)*((_QWORD *)a1 + 17);
  if ( v15 )
  {
    Win32FreePool(v15);
    *((_QWORD *)a1 + 17) = 0LL;
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v16 = Win32AllocPoolZInit(v11, 0x6D696955u);
  *((_QWORD *)a1 + 17) = v16;
  if ( !v16 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3070);
  if ( *((_QWORD *)a1 + 17) )
  {
    *((_QWORD *)a1 + 18) = v11;
    goto LABEL_37;
  }
  v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 78;
    LOBYTE(v19) = v18;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      4,
      78,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
      v10);
  }
}
