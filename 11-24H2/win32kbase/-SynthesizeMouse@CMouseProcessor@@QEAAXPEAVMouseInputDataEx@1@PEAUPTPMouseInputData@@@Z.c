/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005025C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     SynthesizePTPMouseInput @ 0x1401899D0 (SynthesizePTPMouseInput.c)
 *     SynthesizeMouseInput @ 0x140213510 (SynthesizeMouseInput.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021B980 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x14021BB04 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021BBC4 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14021CA78 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x140050724 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x140050D10 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x140051F28 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x14019D65C (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct PTPMouseInputData *a3)
{
  char v5; // di
  __int64 v7; // rcx
  const struct _MOUSE_INPUT_DATA *v8; // r15
  struct tagPOINT *v9; // r12
  const struct tagUIPI_INFO_INT *v10; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v12; // rcx
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  _QWORD v17[10]; // [rsp+40h] [rbp-79h] BYREF
  struct tagPOINT v18; // [rsp+90h] [rbp-29h] BYREF
  __int64 v19; // [rsp+98h] [rbp-21h]
  _OWORD v20[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+17h]

  v5 = 1;
  InputTraceLogging::Mouse::ProcessInput(0LL, a2, 1);
  v19 = 0LL;
  v8 = 0LL;
  v9 = &v18;
  v10 = 0LL;
  v18 = *(struct tagPOINT *)(W32GetUserSessionState(v7) + 19240);
  if ( a3 )
  {
    v8 = (const struct _MOUSE_INPUT_DATA *)*((_QWORD *)a3 + 3);
    v9 = (struct tagPOINT *)a3;
    v10 = (const struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 5);
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 512LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 4LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL)
    && *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(this, a2) == 1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        6,
        16,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 4064));
    memset(v17, 0, sizeof(v17));
    LODWORD(v17[9]) = 3;
    v21 = 3LL;
    HIDWORD(v21) = *((unsigned __int16 *)a2 + 2);
    memset(v20, 0, sizeof(v20));
    if ( a3 )
    {
      if ( *((_QWORD *)a3 + 2) )
      {
        LODWORD(v17[9]) = 1;
        LODWORD(v21) = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v12 = (_QWORD *)*((_QWORD *)a3 + 2);
        v17[7] = PerformanceCounter.QuadPart;
        v17[0] = *v12;
        v17[1] = v12[1];
        v17[2] = v12[2];
        v17[3] = v12[3];
        v17[4] = v12[4];
        v17[5] = v12[5];
        v17[6] = v12[6];
      }
    }
    CMouseProcessor::ProcessMouseInputData(this, a2, v9, (struct _MousePacketPerf *)v20, v8, v10);
    v17[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 3648, 0LL);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 3024),
      (const struct _MousePerf *)v17);
    ExReleasePushLockExclusiveEx((char *)this + 3648, 0LL);
    KeLeaveCriticalRegion();
  }
}
