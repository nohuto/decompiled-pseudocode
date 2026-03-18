/*
 * XREFs of _anonymous_namespace_::WindowSizingUpdate @ 0x1C021D6BC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C021CC28 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

__int64 __fastcall anonymous_namespace_::WindowSizingUpdate(const struct tagWND *a1)
{
  __int64 result; // rax
  char v3; // dl

  result = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL) + 324LL);
  if ( (result & 1) != 0 )
  {
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, 0, 1, 6);
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_AND_TRACE_SF_q(
               (__int64)WPP_GLOBAL_Control->AttachedDevice,
               v3,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               10LL,
               4u,
               1u,
               0xAu,
               (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
               a1);
  }
  return result;
}
