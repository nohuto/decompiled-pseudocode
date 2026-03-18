/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C018B358
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimDestroyDeadzone @ 0x1C0185C6C (rimDestroyDeadzone.c)
 *     RIMAssignPreparsedData @ 0x1C01865BC (RIMAssignPreparsedData.c)
 *     RIMFreePointerDevice @ 0x1C0188818 (RIMFreePointerDevice.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  _UNKNOWN **v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // dl
  char *v10; // rdx

  v2 = *(_QWORD *)(a2 + 472);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2854);
  v5 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 456), a2, v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v9 = 0;
    }
    v6 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        (__int64)gRimLog,
        3u,
        1u,
        0x26u,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
        v5);
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v10 = *(char **)(a1 + 1048);
    if ( v10 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    rimDestroyDeadzone((__int64)v6, (__int64)v10, v7, v8);
  }
  RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 472) = 0LL;
}
