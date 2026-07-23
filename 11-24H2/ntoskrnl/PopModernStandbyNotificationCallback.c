/*
 * XREFs of PopModernStandbyNotificationCallback @ 0x14075D970
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceModernStandbyStateNotification @ 0x140754D64 (PopDiagTraceModernStandbyStateNotification.c)
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
  int Buffer; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Buffer = 0;
  v6 = 0;
  updated = 0;
  LOBYTE(v10) = -1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify);
  v11 = dword_140F07850;
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
    dword_140F07854 = *Value;
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
    dword_140F07858 = *Value;
  }
  if ( !dword_140F07854 && dword_140F07858 == 2 )
    v6 = 1;
  v12 = 1;
LABEL_25:
  if ( v6 )
    v13 = v12 > dword_140F07850;
  else
    v13 = --v12 < dword_140F07850;
  if ( v13 )
  {
    Buffer = 0;
    dword_140F07850 = v12;
    BYTE1(Buffer) = v12;
    updated = ZwUpdateWnfStateData(&WNF_PO_MODERN_STANDBY_STATE_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
  }
  v4 = v13;
LABEL_32:
  PopDiagTraceModernStandbyStateNotification(v11, dword_140F07850, v4, v6, (__int64)SettingGuid, v10);
  PopReleaseRwLock(&PopModernStandbyStateNotify);
  return updated;
}
