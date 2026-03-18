/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0078518
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070630 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B93BC (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BB8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  int v5; // edx
  void *v6; // rcx
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  void *v9; // rcx
  unsigned int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 184) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 714LL);
  if ( (*(_DWORD *)(v2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 715LL);
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
      28,
      (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~8u;
  if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        v12,
        1,
        29,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
        a1,
        v2,
        0);
    return 0LL;
  }
  else
  {
    v4 = RIMCloseDev(v2);
    v6 = *(void **)(v2 + 248);
    v7 = v4;
    if ( v6 )
    {
      v8 = IoUnregisterPlugPlayNotification(v6);
      *(_DWORD *)(v2 + 200) &= ~0x20u;
      v7 = v8;
      v9 = *(void **)(v2 + 32);
      v10 = *(_DWORD *)(v2 + 184) & 0xFFFFFB7F | 0x400;
      *(_QWORD *)(v2 + 248) = 0LL;
      *(_DWORD *)(v2 + 184) = v10;
      ObfDereferenceObject(v9);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        v12,
        1,
        30,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
        a1,
        v2,
        v7);
    return v7;
  }
}
