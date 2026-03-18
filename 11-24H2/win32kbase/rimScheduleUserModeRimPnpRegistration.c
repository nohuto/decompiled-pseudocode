/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x14017EB74
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018A3B0 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void rimScheduleUserModeRimPnpRegistration()
{
  CTouchProcessor *v0; // rcx
  char v1; // bl
  bool v2; // di
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 **v9; // rdi
  __int64 *i; // rbx
  __int64 v11; // rax
  char v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v1 = 0;
  }
  v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v4) = v2;
    LOBYTE(v5) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v4,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      53,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  v6 = W32GetUserSessionState(v0);
  RIMLockExclusive(v6 + 56);
  v9 = (__int64 **)(W32GetUserSessionState(v7) + 120);
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) && *((_BYTE *)i + 376) )
    {
      if ( *((_DWORD *)i + 260) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1779LL);
      if ( (*((_DWORD *)i + 17) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1780LL);
      ZwSetEvent((HANDLE)i[41], 0LL);
    }
  }
  v11 = W32GetUserSessionState(v8);
  RIMUnlockExclusive(v11 + 56);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 19392),
      4,
      1,
      54,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
}
