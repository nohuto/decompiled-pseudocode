/*
 * XREFs of xxxRemoteShadowStop @ 0x1C0203AA0
 * Callers:
 *     NtUserRemoteShadowStop @ 0x1C01D94D0 (NtUserRemoteShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00A0E18 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowStop(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  v3 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      23,
      4,
      3,
      23,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(v3, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  xxxRemoteStopScreenUpdates(gpepCSRSS, v4, v5);
  return 0LL;
}
