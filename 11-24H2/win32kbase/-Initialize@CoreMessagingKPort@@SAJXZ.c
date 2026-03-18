/*
 * XREFs of ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401A7EC0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CoreMessagingKPort::Initialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  char v4; // di
  bool v5; // si
  char CurrentWin32kSessionId; // bl
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 72440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  v1 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x6B637375u);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)v1 = 0LL;
    *(_OWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v2) + 72440) = v1;
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v4 = 0;
    }
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      UserSessionState = W32GetUserSessionState(v7);
      LOBYTE(v9) = v5;
      LOBYTE(v10) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        3,
        13,
        (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
        CurrentWin32kSessionId);
    }
    return 3221225495LL;
  }
}
