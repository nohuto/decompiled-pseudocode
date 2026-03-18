/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1401D7D30
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F0D84 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 RIMGetLastInvertedPenTime()
{
  unsigned __int64 v0; // rdi
  CTouchProcessor *v1; // rcx
  char v2; // bl
  char v3; // si
  bool v4; // bp
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD **v11; // r14
  _QWORD *i; // rsi
  __int64 v13; // rax
  char v14; // si
  __int64 v15; // rax
  int v17; // [rsp+28h] [rbp-50h]

  v0 = 0LL;
  v1 = WPP_GLOBAL_Control;
  v2 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      149,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v8 = W32GetUserSessionState(v1);
  RIMLockExclusive(v8 + 56);
  v11 = (_QWORD **)(W32GetUserSessionState(v9) + 120);
  for ( i = *v11; i != v11; i = (_QWORD *)*i )
  {
    v10 = i - 2;
    if ( i == (_QWORD *)16 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4773);
    }
    else if ( (*((_DWORD *)v10 + 21) & 4) != 0 && v10[100] > v0 )
    {
      v0 = v10[100];
    }
  }
  v13 = W32GetUserSessionState(v10);
  RIMUnlockExclusive(v13 + 56);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v2 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_i(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v14,
      *(_QWORD *)(v15 + 19392),
      4u,
      v17,
      0x96u,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  return v0;
}
