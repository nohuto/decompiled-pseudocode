/*
 * XREFs of rimQueueCompleteFrame @ 0x1C01A4E48
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C00E2880 (rimProcessCompleteFrame.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0078960 (RawInputManagerDeviceObjectReference.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01A3FFC (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01A40E0 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A4360 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 */

void __fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v7; // r9
  char v8; // dl
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-30h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)((isChildPartition() ? 0x48 : 0) + a3 + 56) = PerformanceCounter;
  if ( (int)RawInputManagerDeviceObjectReference(*(void **)(a2 + 32)) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 487);
    if ( a3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a3);
  }
  else
  {
    InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
    InputTraceLogging::TelemetryDebug::RIM::QueueFrame((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a3 + 48));
    v7 = *(_QWORD *)(a2 + 192) + 1LL;
    *(_QWORD *)(a2 + 192) = v7;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v8 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qi(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v7,
        v11,
        v12,
        0x10u,
        v13);
    v9 = *(_QWORD **)(a1 + 752);
    v10 = (_QWORD *)(a3 + 8);
    if ( *v9 != a1 + 744 )
      __fastfail(3u);
    *v10 = a1 + 744;
    *(_QWORD *)(a3 + 16) = v9;
    *v9 = v10;
    *(_QWORD *)(a1 + 752) = v10;
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 32);
  }
}
