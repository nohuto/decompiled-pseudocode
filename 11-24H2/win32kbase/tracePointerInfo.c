/*
 * XREFs of tracePointerInfo @ 0x1400AA220
 * Callers:
 *     traceFrame @ 0x1401EBA4C (traceFrame.c)
 * Callees:
 *     tracePointerFlags @ 0x1400AA30C (tracePointerFlags.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 */

__int64 __fastcall tracePointerInfo(unsigned int *a1)
{
  bool v2; // si
  bool v3; // r14
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = a1[9];
    v5 = a1[8];
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v7) = v3;
    LOBYTE(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      43,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v5,
      v4);
  }
  return tracePointerFlags(a1[3]);
}
