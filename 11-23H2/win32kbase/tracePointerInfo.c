/*
 * XREFs of tracePointerInfo @ 0x1C00E1786
 * Callers:
 *     traceFrame @ 0x1C019EE84 (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     tracePointerFlags @ 0x1C019EFCC (tracePointerFlags.c)
 */

__int64 __fastcall tracePointerInfo(unsigned int *a1, __int64 a2, __int64 a3)
{
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (__int64)gRimLog,
      4u,
      1u,
      0x2Bu,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
      a1[8],
      a1[9]);
  return tracePointerFlags(a1[3], a2, a3);
}
