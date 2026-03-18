/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x140241620
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int DpiCacheIndex; // esi

  EnterSharedCrit(0LL, 1LL);
  v0 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36424);
  while ( v4 )
  {
    DpiCacheIndex = GetDpiCacheIndex(*(unsigned __int16 *)(v4 + 272));
    if ( DpiCacheIndex == -1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28123LL);
    v4 = *(_QWORD *)(v4 + 368);
    v3 = DpiCacheIndex;
    v0 |= 1 << DpiCacheIndex;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v0;
}
