/*
 * XREFs of PopSessionWinlogonNotification @ 0x140A22590
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1409638B0 (PopNotifyConsoleUserPresent.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x14096526C (PopDiagTraceSessionStates.c)
 *     PopAcquireAdaptiveLock @ 0x140A22A64 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // bp
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  __int64 result; // rax
  bool v9; // si
  __int64 v10; // r8
  BOOL v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_SESSION_LOCKED;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5, a1, *(unsigned __int8 *)(a2 + 4));
  v6 = "Locked";
  if ( !v2 )
    v6 = "Unlocked";
  v7 = "Console";
  if ( !v3 )
    v7 = "Remote";
  result = PopPrintEx(3, (int)"PopAdaptive:>>>>> %s session %u is %s\n", v7, a1, v6);
  v9 = 0;
  if ( v3 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      byte_140F06D41 = 1;
    }
    else
    {
      byte_140F06D41 = 0;
      v9 = byte_140F06D42 == 0;
    }
    PopReleaseAdaptiveLock();
    v11 = v2 != 0;
    PopSetPowerSettingValue(&GUID_CONSOLE_LOCKED, 0xFFFFFFFF, 0, 4u, &v11);
    result = PopSetPowerSettingValue(&GUID_CONSOLE_LOCKED, 0xFFFFFFFF, 1, 4u, &v11);
    if ( v9 )
      return PopNotifyConsoleUserPresent(0LL, 0xAu, v10);
  }
  return result;
}
