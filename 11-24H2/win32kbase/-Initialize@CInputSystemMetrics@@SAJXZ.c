/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x14022012C
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 19);
  v1 = Win32AllocPoolZInitImpl(256LL, 0xCuLL, 0x53794D65u);
  v3 = v1;
  if ( v1 )
  {
    *(_QWORD *)v1 = 0LL;
    *(_DWORD *)(v1 + 8) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2) + 19008) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v4) + 19008) == 0LL ? 0xC0000017 : 0;
}
