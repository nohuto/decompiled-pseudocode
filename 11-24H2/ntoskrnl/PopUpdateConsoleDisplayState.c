/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140A26E9C
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopSpoilBatteryEstimate @ 0x140A26FF0 (PopSpoilBatteryEstimate.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140A27578 (PopDiagTraceConsoleDisplayState.c)
 *     PopRecordDisplayState @ 0x140A27608 (PopRecordDisplayState.c)
 *     PopUpdateLastUserInputTime @ 0x140A27A24 (PopUpdateLastUserInputTime.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1;
  if ( PopConsoleDisplayState != (_DWORD)a1 )
  {
    PopConsoleDisplayState = a1;
    if ( qword_140E67588 )
      guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    PopDiagTraceConsoleDisplayState(v4);
    PopCheckResiliencyScenarios();
    v9 = PopConsoleDisplayState;
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFF, 0, 4u, &v9);
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFF, 1, 4u, &v9);
    PopRecordDisplayState(v4);
    v9 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFF, 0, 4u, &v9);
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFF, 1, 4u, &v9);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v9);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive(&PopSystemIdleLock);
    PopUpdateLastUserInputTime(v6, v5, v7);
    dword_140E0B674 = v4;
    return PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
  }
  return result;
}
