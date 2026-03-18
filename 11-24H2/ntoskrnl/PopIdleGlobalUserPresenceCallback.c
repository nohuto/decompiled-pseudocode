/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x140AC9210
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopSmartSuspendValidatePredictions @ 0x14075C560 (PopSmartSuspendValidatePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleGlobalUserPresenceCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1
    && *(_QWORD *)SettingGuid->Data4 == *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4
    && Value
    && ValueLength == 4 )
  {
    v4 = *Value;
    PopAcquirePolicyLock(SettingGuid, Value);
    if ( !v4 )
    {
      PopIdleCancelAoAcDozeS4Timer(2u);
      qword_140F0B168 = 0LL;
      qword_140F0B1D0 = 0LL;
      if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
        dword_140F0BDA0 = 0;
      PopSmartSuspendValidatePredictions();
    }
    PopReleasePolicyLock(v6, v5, v7, v8, v10);
  }
  return 0LL;
}
