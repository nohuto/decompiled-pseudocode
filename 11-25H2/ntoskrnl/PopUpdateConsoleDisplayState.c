/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140A1DEFC
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopSpoilBatteryEstimate @ 0x140A1E050 (PopSpoilBatteryEstimate.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140A1E5D8 (PopDiagTraceConsoleDisplayState.c)
 *     PopRecordDisplayState @ 0x140A1E668 (PopRecordDisplayState.c)
 *     PopUpdateLastUserInputTime @ 0x140A1EA84 (PopUpdateLastUserInputTime.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  if ( PopConsoleDisplayState != (_DWORD)a1 )
  {
    PopConsoleDisplayState = a1;
    if ( qword_140E672A8 )
      guard_dispatch_icall_no_overrides(a1);
    PopDiagTraceConsoleDisplayState(v1);
    PopCheckResiliencyScenarios();
    v6 = PopConsoleDisplayState;
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFF, 0, 4u, &v6);
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFF, 1, 4u, &v6);
    PopRecordDisplayState(v1);
    v6 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFF, 0, 4u, &v6);
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFF, 1, 4u, &v6);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v6);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
    PopUpdateLastUserInputTime(v3, v2, v4);
    dword_140E0B514 = v1;
    return PopReleaseRwLock(&PopSystemIdleLock);
  }
  return result;
}
