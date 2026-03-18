/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401076A4
 * Callers:
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  bool v2; // di
  _UNKNOWN **v3; // rax
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  LONG v8; // r8d

  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = &WPP_RECORDER_INITIALIZED;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v2;
    LODWORD(v3) = WPP_RECORDER_AND_TRACE_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v7,
                    v6,
                    *(_QWORD *)(UserSessionState + 19392),
                    4,
                    1,
                    45,
                    (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                    a1);
  }
  v8 = *(_DWORD *)(a1 + 1072);
  if ( v8 )
  {
    LODWORD(v3) = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1064), 0, v8, 0);
    *(_DWORD *)(a1 + 1072) = 0;
  }
  return (int)v3;
}
