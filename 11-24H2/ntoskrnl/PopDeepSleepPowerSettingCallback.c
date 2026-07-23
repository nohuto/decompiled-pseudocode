/*
 * XREFs of PopDeepSleepPowerSettingCallback @ 0x1407584B0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopDeepSleepPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-8h]

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_DEEP_SLEEP_ENABLED.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock(a1, a2);
    PopDeepSleepIsEnabled = *a2 != 0;
    PopCheckResiliencyScenarios();
    PopReleasePolicyLock(v7, v6, v8, v9, v11);
    return 0;
  }
  return v4;
}
