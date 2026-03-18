/*
 * XREFs of PopSessionWinlogonNotification @ 0x140ACB1FC
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline @ 0x1405DADAC (Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceSessionStates @ 0x1409BA66C (PopDiagTraceSessionStates.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1409BB660 (PopNotifyConsoleUserPresent.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x140A30168 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  __int64 result; // rax
  bool v9; // bl
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
    PopAcquireAdaptiveLock(0);
    if ( v2 )
    {
      byte_140F07341 = 1;
    }
    else
    {
      byte_140F07341 = 0;
      if ( !(unsigned int)Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline() )
        v9 = byte_140F07342 == 0;
    }
    PopReleaseAdaptiveLock();
    v11 = v2 != 0;
    PopSetPowerSettingValueAcDc((__int64)&GUID_CONSOLE_LOCKED, 4u, (__int64)&v11);
    result = Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline();
    if ( !(_DWORD)result && v9 )
      return PopNotifyConsoleUserPresent(0LL, 0xAu, v10);
  }
  return result;
}
