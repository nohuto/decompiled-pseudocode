/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C019AB58
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0199BB8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  char v4; // dl
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  char v9; // dl
  int v10; // [rsp+20h] [rbp-58h]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 803);
  if ( (*(_DWORD *)(v2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 804);
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
      34,
      (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~4u;
  if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v10,
        1u,
        0x23u,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
    return 0LL;
  }
  else
  {
    v6 = *(void **)(v2 + 248);
    if ( v6 )
    {
      v7 = IoUnregisterPlugPlayNotification(v6);
      v8 = *(void **)(v2 + 32);
      v3 = v7;
      *(_QWORD *)(v2 + 248) = 0LL;
      ObfDereferenceObject(v8);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        v10,
        1u,
        0x24u,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
    return v3;
  }
}
