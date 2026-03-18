/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1401D957C
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1401D99A4 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1401DA570 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1402083B0 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ApiSetGetUserHandedness @ 0x140125320 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EA4D8 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // r11d
  int v11; // r11d
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int UserHandedness; // eax
  __int64 v20; // rax

  v8 = 0;
  v10 = *(_DWORD *)(W32GetUserSessionState(a1) + 244);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( (unsigned int)(v11 - 1) <= 1 )
      {
        UserSessionState = W32GetUserSessionState(v9);
        RIMLockExclusive(UserSessionState + 40);
        if ( *(_QWORD *)(W32GetUserSessionState(v13) + 256) )
        {
          v15 = *(_QWORD *)(W32GetUserSessionState(v14) + 256);
          if ( *(_DWORD *)(v15 + 8) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 39);
          v16 = *(_QWORD *)(W32GetUserSessionState(v15) + 256);
          UserHandedness = ApiSetGetUserHandedness(v18, v17);
          v8 = RIMDeadzone::IsInDeadzone(v16, a1, a2, a3, a4, UserHandedness);
        }
        v20 = W32GetUserSessionState(v14);
        RIMUnlockExclusive(v20 + 40);
      }
    }
    else
    {
      return 1;
    }
  }
  return v8;
}
