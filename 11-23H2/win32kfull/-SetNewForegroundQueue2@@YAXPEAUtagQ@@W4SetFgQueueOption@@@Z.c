/*
 * XREFs of ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1C013962C
 * Callers:
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0039F44 (UpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x1C0139454 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall SetNewForegroundQueue2(__int64 a1, char a2)
{
  GroupedProcessForegroundBoost *v2; // rbx
  char v5; // dl
  const struct tagWND *v6; // rdx

  v2 = 0LL;
  if ( a1 == gpqForeground )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2604LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      85,
      4,
      2,
      85,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  if ( (a2 & 1) != 0 )
    gpqForegroundPrev = gpqForeground;
  gpqForeground = a1;
  UpdateRawMouseMode(a1);
  if ( (a2 & 2) != 0 )
    *(_DWORD *)(gpqForeground + 396LL) |= 1u;
  if ( gpqForeground )
    v2 = *(GroupedProcessForegroundBoost **)(gpqForeground + 128LL);
  v6 = *(const struct tagWND **)(a1 + 128);
  if ( v2 != v6 )
    anonymous_namespace_::OnForegroundWindowChanged(v2, v6);
}
