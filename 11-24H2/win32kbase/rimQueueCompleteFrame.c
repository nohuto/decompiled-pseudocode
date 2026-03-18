/*
 * XREFs of rimQueueCompleteFrame @ 0x140180264
 * Callers:
 *     rimProcessCompleteFrame @ 0x140180150 (rimProcessCompleteFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052DEC (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1401204E0 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x14012EDA4 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v7; // rcx
  char v8; // bl
  char v9; // bp
  __int64 UserSessionState; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+38h] [rbp-40h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)((isChildPartition(v7) ? 0x48 : 0) + a3 + 56) = PerformanceCounter;
  if ( (int)RawInputManagerDeviceObjectReference(*(void **)(a2 + 32)) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
    GreDeleteFastMutex((char *)a3);
  }
  else
  {
    ++*(_QWORD *)(a2 + 176);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v8 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qi(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *(_QWORD *)(UserSessionState + 19392),
        v13,
        v14,
        0x10u,
        v15);
    }
    v11 = *(_QWORD **)(a1 + 752);
    v12 = (_QWORD *)(a3 + 8);
    if ( *v11 != a1 + 744 )
      __fastfail(3u);
    *(_QWORD *)(a3 + 16) = v11;
    *v12 = a1 + 744;
    *v11 = v12;
    *(_QWORD *)(a1 + 752) = v12;
    InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
    InputTraceLogging::TelemetryDebug::RIM::QueueFrame((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a3 + 48));
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 32);
  }
}
