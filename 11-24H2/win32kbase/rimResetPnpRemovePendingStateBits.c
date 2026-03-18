/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x140140950
 * Callers:
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1401D24A8 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  bool v2; // di
  _UNKNOWN **result; // rax
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v2;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v7,
                            v6,
                            *(_QWORD *)(UserSessionState + 19392),
                            4,
                            1,
                            39,
                            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                            a1);
  }
  *(_DWORD *)(a1 + 184) &= ~1u;
  *(_DWORD *)(a1 + 172) &= 0xFFFFFFE7;
  return result;
}
