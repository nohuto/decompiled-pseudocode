/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x14075AB60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14075AAE4 (PopPolicyDeviceRemove.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, UNICODE_STRING *Context)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = 0;
  PopAcquireRwLockExclusive(&PopPolicyDeviceLock);
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v8 )
  {
    PopPolicyDeviceRemove((__int64)Context, v5, v6, v7);
    goto LABEL_14;
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
  {
    PopPolicyDeviceRemove((__int64)Context, v5, v6, v7);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v10 )
  {
    PopConnectToPolicyDevice(*(_DWORD *)&Context[1].Length, Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  if ( v4 )
  {
    PnpUnregisterPlugPlayNotification(Context[1].Buffer, 1);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140E01AC4 + 8 * *(int *)&Context[1].Length));
  }
  return 0LL;
}
