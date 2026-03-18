/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1401D9434
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x14017C0BC (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ApiSetGetUserHandedness @ 0x140125320 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EA4D8 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int UserHandedness; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax

  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 77);
  if ( *(_DWORD *)(a1 + 492) )
  {
    UserSessionState = W32GetUserSessionState(v7);
    RIMLockExclusive(UserSessionState + 40);
    if ( *(_DWORD *)(W32GetUserSessionState(v9) + 244) == 1 )
    {
      v6 = 1;
    }
    else if ( *(_QWORD *)(W32GetUserSessionState(v10) + 256) )
    {
      v11 = *(_QWORD *)(W32GetUserSessionState(v10) + 256);
      if ( *(_DWORD *)(v11 + 8) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 90);
      UserHandedness = ApiSetGetUserHandedness(v12, v11);
      v15 = W32GetUserSessionState(v14);
      v6 = RIMDeadzone::IsInDeadzone(*(_QWORD *)(v15 + 256), a2, a3, a1 + 496, a1 + 608, UserHandedness);
    }
    v16 = W32GetUserSessionState(v10);
    RIMUnlockExclusive(v16 + 40);
  }
  return v6;
}
