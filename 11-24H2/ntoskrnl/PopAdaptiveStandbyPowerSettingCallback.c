/*
 * XREFs of PopAdaptiveStandbyPowerSettingCallback @ 0x1407612D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopAdaptiveStandbyUpdateRegions @ 0x1407625A0 (PopAdaptiveStandbyUpdateRegions.c)
 */

__int64 __fastcall PopAdaptiveStandbyPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  size_t v4; // rsi
  struct _LIST_ENTRY *v8; // rax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-41h] BYREF
  GUID *v13; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp-29h] BYREF
  LPCGUID v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  unsigned int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  PVOID v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]

  v4 = ValueLength;
  v13 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v8 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v13 = (GUID *)v8;
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    LOWORD(v11) = v4;
    v22 = (unsigned __int16)v4;
    v18 = &v11;
    v15 = SettingGuid;
    v16 = 16;
    v19 = 2;
    v21 = Value;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&dword_14004ED94,
      &ActivityId,
      (const GUID *)v8,
      5u,
      v14);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
  if ( *(_QWORD *)&SettingGuid->Data1 == **(_QWORD **)Context
    && *(_QWORD *)SettingGuid->Data4 == *(_QWORD *)(*(_QWORD *)Context + 8LL)
    && (_DWORD)v4 == Context[3] )
  {
    memmove(&PopAdaptiveStandbyContext[Context[2]], Value, v4);
    v9 = 0;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      PopAdaptiveStandbyUpdateRegions(&xmmword_140F07144);
  }
  else
  {
    v9 = -1073741811;
  }
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v17 = 0;
    v15 = (LPCGUID)&v11;
    v11 = v9;
    v16 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004EE35,
      &ActivityId,
      v13,
      3u,
      v14);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v13);
  return v9;
}
