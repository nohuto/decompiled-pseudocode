/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020B3FC
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400D082C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 16408) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 454);
  v2 = Win32AllocPoolZInitImpl(256LL, 0x3B0uLL, 0x70444E43u);
  v4 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    memset((void *)(v2 + 24), 0, 0x398uLL);
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v3) + 16408) = v4;
  if ( !*(_QWORD *)(W32GetUserSessionState(v5) + 16408) )
  {
    v1 = -1073741801;
    InputExtensibilityCallout::UnInitialize(v6);
  }
  return v1;
}
