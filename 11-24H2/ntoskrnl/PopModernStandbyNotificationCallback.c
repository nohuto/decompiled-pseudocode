/*
 * XREFs of PopModernStandbyNotificationCallback @ 0x14075E9D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceModernStandbyStateNotification @ 0x1407568E4 (PopDiagTraceModernStandbyStateNotification.c)
 */

__int64 __fastcall PopModernStandbyNotificationCallback(
        _OWORD *SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  bool v4; // bl
  bool v6; // r14
  unsigned int updated; // r13d
  int v10; // esi
  int v11; // r12d
  int v12; // eax
  bool v13; // di
  int v15; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  v15 = 0;
  v6 = 0;
  updated = 0;
  LOBYTE(v10) = -1;
  PopAcquireRwLockExclusive(&PopModernStandbyStateNotify);
  v11 = dword_140F07550;
  if ( *(_OWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED == *SettingGuid && ValueLength == 4 && Value )
  {
    v12 = 3;
LABEL_10:
    v10 = *Value;
    v6 = *Value != 0;
    goto LABEL_25;
  }
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)SettingGuid
    && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)SettingGuid + 1)
    && ValueLength == 4
    && Value )
  {
    v12 = 2;
    goto LABEL_10;
  }
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)SettingGuid
    && *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 == *((_QWORD *)SettingGuid + 1)
    && ValueLength == 4
    && Value )
  {
    v10 = *Value;
    dword_140F07554 = *Value;
  }
  else
  {
    if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 != *(_QWORD *)SettingGuid
      || *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 != *((_QWORD *)SettingGuid + 1)
      || ValueLength != 4
      || !Value )
    {
      updated = -1073741637;
      goto LABEL_32;
    }
    v10 = *Value;
    dword_140F07558 = *Value;
  }
  if ( !dword_140F07554 && dword_140F07558 == 2 )
    v6 = 1;
  v12 = 1;
LABEL_25:
  if ( v6 )
    v13 = v12 > dword_140F07550;
  else
    v13 = --v12 < dword_140F07550;
  if ( v13 )
  {
    v15 = 0;
    dword_140F07550 = v12;
    BYTE1(v15) = v12;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_STATE_NOTIFICATION, (__int64)&v15);
  }
  v4 = v13;
LABEL_32:
  PopDiagTraceModernStandbyStateNotification(v11, dword_140F07550, v4, v6, (__int64)SettingGuid, v10);
  PopReleaseRwLock((signed __int64 *)&PopModernStandbyStateNotify);
  return updated;
}
