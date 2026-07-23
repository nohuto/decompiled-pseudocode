/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140A1B91C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopSpoilBatteryEstimate @ 0x140A1BA70 (PopSpoilBatteryEstimate.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140A1BFF8 (PopDiagTraceConsoleDisplayState.c)
 *     PopRecordDisplayState @ 0x140A1C088 (PopRecordDisplayState.c)
 *     PopUpdateLastUserInputTime @ 0x140A1C4A4 (PopUpdateLastUserInputTime.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopConsoleDisplayState != (_DWORD)a1 )
  {
    PopConsoleDisplayState = a1;
    if ( qword_140E676F8 )
      guard_dispatch_icall_no_overrides(a1, a2);
    PopDiagTraceConsoleDisplayState(v2);
    PopCheckResiliencyScenarios();
    Buffer = PopConsoleDisplayState;
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFF, 0, 4u, &Buffer);
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFF, 1, 4u, &Buffer);
    PopRecordDisplayState(v2);
    Buffer = PopConsoleDisplayState != 0;
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFF, 0, 4u, &Buffer);
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFF, 1, 4u, &Buffer);
    ZwUpdateWnfStateData(&WNF_UBPM_CONSOLE_MONITOR, &Buffer, 4u, 0LL, 0LL, 0, 0);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
    PopUpdateLastUserInputTime();
    dword_140E0B6F4 = v2;
    return PopReleaseRwLock(&PopSystemIdleLock);
  }
  return result;
}
