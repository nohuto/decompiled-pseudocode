/*
 * XREFs of PopPowerSourceChangeCallback @ 0x1404D01C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1406F3398 (PopPowerAggregatorNotifyAcDcStateChange.c)
 *     TtmNotifySessionDisplayBurst @ 0x14099DFB0 (TtmNotifySessionDisplayBurst.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopGetSessionId @ 0x140A47388 (PopGetSessionId.c)
 *     PopBroadcastSessionInfo @ 0x140A90620 (PopBroadcastSessionInfo.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC5414 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerSourceChangeCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  bool v15; // si
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  unsigned int v19; // r15d
  unsigned int v20; // r12d
  GUID v21; // xmm0
  unsigned int SessionId; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  __int64 v26; // rdi
  GUID v28; // [rsp+28h] [rbp-50h] BYREF
  int v29; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
  v4 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
  v29 = 0;
  v5 = *a1;
  v28 = 0LL;
  v9 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v5;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v5 )
    v9 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  v10 = *(_QWORD *)GUID_BATTERY_COUNT.Data4;
  v11 = 0;
  v12 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1;
  if ( v9 )
  {
    v13 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - v5;
    if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == v5 )
      v13 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
    if ( v13 )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v14 = 1LL;
  v15 = 0;
  if ( !PopLidOpened )
    v15 = PopConsoleExternalDisplayConnected == 0;
  v16 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v5;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v5 )
    v16 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( !v16 )
  {
    if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
    {
      v17 = v15;
      if ( *a2 == 1 )
        v17 = 1;
      v15 = v17;
      if ( PopDisableDisplayBurstOnPowerSourceChange )
        v15 = 1;
    }
    v12 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1;
    v10 = *(_QWORD *)GUID_BATTERY_COUNT.Data4;
    v3 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    v4 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
  }
  v18 = v12 - *a1;
  if ( !v18 )
    v18 = v10 - a1[1];
  if ( v18 )
  {
    if ( v15 )
    {
      v21 = GUID_ACDC_DISPLAY_BURST_SUPPRESS;
      v19 = 43;
      v20 = 28;
    }
    else
    {
      v21 = GUID_ACDC_POWER_SOURCE;
      v19 = 5;
      v20 = 5;
    }
    v28 = v21;
LABEL_32:
    v29 = *a2;
    PopBroadcastSessionInfo(0LL, 20LL, &v28);
    v4 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    v3 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    goto LABEL_33;
  }
  if ( !v15 )
    v28 = GUID_BATTERY_COUNT;
  v19 = v15 ? 46 : 16;
  v20 = v15 ? 49 : 16;
  if ( !v15 )
    goto LABEL_32;
LABEL_33:
  SessionId = PopGetSessionId(v18, v16, v10, v14);
  v25 = SessionId;
  if ( v15 )
  {
    PopAcquirePolicyLock(v24, v23);
    PopPowerAggregatorForceSessionSwitch(v19);
    PopReleasePolicyLock();
LABEL_38:
    v4 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    v3 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    goto LABEL_39;
  }
  if ( SessionId != -1 )
  {
    if ( (unsigned __int8)TtmIsEnabled() )
      TtmNotifySessionDisplayBurst(v25, v20);
    goto LABEL_38;
  }
LABEL_39:
  v26 = v3 - *a1;
  if ( !v26 )
    v26 = v4 - a1[1];
  if ( !v26 )
    PopPowerAggregatorNotifyAcDcStateChange();
  return v11;
}
