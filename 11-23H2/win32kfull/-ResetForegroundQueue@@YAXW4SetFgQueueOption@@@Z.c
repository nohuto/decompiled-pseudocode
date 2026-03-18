/*
 * XREFs of ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1C013953C
 * Callers:
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x1C0139454 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ResetForegroundQueue(char a1)
{
  GroupedProcessForegroundBoost *v2; // rbx
  PDEVICE_OBJECT v3; // rcx
  bool v4; // dl

  if ( gpqForeground )
    v2 = *(GroupedProcessForegroundBoost **)(gpqForeground + 128LL);
  else
    v2 = 0LL;
  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      86,
      4,
      2,
      86,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  if ( (a1 & 1) != 0 )
    gpqForegroundPrev = gpqForeground;
  gpqForeground = 0LL;
  *(_DWORD *)(SGDGetUserSessionState(v3) + 15956) = 0;
  if ( v2 )
    anonymous_namespace_::OnForegroundWindowChanged(v2, 0LL);
}
