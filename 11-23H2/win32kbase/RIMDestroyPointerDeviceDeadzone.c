/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C017DBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C019BCE4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  RIMDeadzone *v5; // rcx
  char *v6; // rdx
  char v7; // dl

  v2 = a2;
  v3 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      42,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v3 = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        3,
        1,
        43,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  }
  else if ( v2 < 5 && (v5 = *(RIMDeadzone **)(a1 + 8LL * v2 + 408)) != 0LL )
  {
    _mm_lfence();
    RIMDeadzone::Release(v5);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v2 + 408) + 4LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1258);
    v6 = *(char **)(a1 + 8LL * v2 + 408);
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    *(_QWORD *)(a1 + 8LL * v2 + 408) = 0LL;
    --*(_DWORD *)(a1 + 448);
  }
  else
  {
    v3 = -1073741811;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x2Cu,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v3);
  return v3;
}
