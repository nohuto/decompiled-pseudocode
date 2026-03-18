/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0055268 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     SynthesizePTPMouseInput @ 0x1C00E5A9E (SynthesizePTPMouseInput.c)
 *     SynthesizeMouseInput @ 0x1C01E9030 (SynthesizeMouseInput.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F4DE4 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01F4F58 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F5018 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01F6B28 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMouseIVEnabled @ 0x1C0052D74 (IsMouseIVEnabled.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0054478 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0054BE8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0054E40 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0054E74 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01F8018 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01FB42C (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct PTPMouseInputData *a3)
{
  char v5; // di
  struct _MousePacketPerf *v7; // rbx
  const struct tagUIPI_INFO_INT *v8; // r12
  struct tagUIPI_INFO_INT *v9; // r13
  struct tagPOINT v10; // rdi
  int v11; // r8d
  int v12; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v14; // rcx
  struct tagPOINT v15; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v16[10]; // [rsp+50h] [rbp-69h] BYREF
  _MOUSE_INPUT_DATA v17[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+17h]

  v5 = 1;
  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2, 1);
  v7 = (struct _MousePacketPerf *)gptCursorAsync;
  v8 = 0LL;
  v9 = 0LL;
  if ( a3 )
  {
    v8 = (const struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 2);
    v7 = *(struct _MousePacketPerf **)a3;
    v9 = (struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 4);
  }
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a2,
                          512LL)
    && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a2,
                           4LL)
    && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a2,
                           0x8000LL)
    && *((_DWORD *)this + 12) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 16;
      LOBYTE(v12) = v5;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        16,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
  }
  else
  {
    if ( IsMouseIVEnabled() && isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3872));
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[9]) = 3;
    v18 = 3LL;
    HIDWORD(v18) = *(unsigned __int16 *)(*(_QWORD *)&a2 + 4LL);
    memset(v17, 0, sizeof(v17));
    if ( a3 && *((_QWORD *)a3 + 1) )
    {
      LODWORD(v16[9]) = 1;
      LODWORD(v18) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14 = (_QWORD *)*((_QWORD *)a3 + 1);
      v16[7] = PerformanceCounter.QuadPart;
      v16[0] = *v14;
      v16[1] = v14[1];
      v16[2] = v14[2];
      v16[3] = v14[3];
      v16[4] = v14[4];
      v16[5] = v14[5];
      v16[6] = v14[6];
    }
    v10 = **(struct tagPOINT **)&CMouseProcessor::ProcessMouseInputData(this, &v15, a2, v7, v17, v8, v9);
    v16[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((char *)this + 3416);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2792),
      (const struct _MousePerf *)v16);
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
    if ( a3 )
      *(struct tagPOINT *)a3 = v10;
  }
}
