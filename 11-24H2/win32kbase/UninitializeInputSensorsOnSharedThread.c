/*
 * XREFs of UninitializeInputSensorsOnSharedThread @ 0x1402136DC
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1402151A0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140092850 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IOCPDispatcher_Destroy @ 0x14020DAF0 (IOCPDispatcher_Destroy.c)
 *     CleanupSensorExplicitly @ 0x140212570 (CleanupSensorExplicitly.c)
 */

__int64 __fastcall UninitializeInputSensorsOnSharedThread(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 v5; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19272) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    IOCPDispatcher::Close(*(HANDLE **)(UserSessionState + 19272), 1);
  }
  v3 = 3LL;
  v4 = (_DWORD *)(W32GetUserSessionState(v1) + 3136);
  do
  {
    v5 = (unsigned int)(*v4 - 1);
    if ( (unsigned int)v5 > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1247);
    if ( *v4 == 2 )
      CleanupSensorExplicitly((unsigned int)v4[4]);
    v4 += 12;
    --v3;
  }
  while ( v3 );
  return IOCPDispatcher_Destroy(v5);
}
