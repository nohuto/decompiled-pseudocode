/*
 * XREFs of NtUserRegisterServicesProcess @ 0x14029B5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 19688);
  if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19928) + 2280LL) || !(unsigned __int8)HasTcbPrivilege() )
  {
    UserSetLastError(5);
  }
  else
  {
    v2 = 1LL;
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928);
    *(_DWORD *)(v7 + 2280) = a1;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
