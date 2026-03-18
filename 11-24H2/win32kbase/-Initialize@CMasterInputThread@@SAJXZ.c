/*
 * XREFs of ?Initialize@CMasterInputThread@@SAJXZ @ 0x14021FD80
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMasterInputThread::Initialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 18808) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 234);
  v1 = Win32AllocPoolZInitImpl(256LL, 0x30uLL, 0x7054494Du);
  v3 = v1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 20) = 0;
    *(_QWORD *)v1 = &CInputThreadBase::`vftable';
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2) + 18808) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v4) + 18808) == 0LL ? 0xC0000017 : 0;
}
