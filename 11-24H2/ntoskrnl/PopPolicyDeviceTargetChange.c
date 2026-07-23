/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x140759250
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1407591D4 (PopPolicyDeviceRemove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, UNICODE_STRING *Context)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPolicyDeviceLock);
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
  {
    PopPolicyDeviceRemove((__int64)Context, v5);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v7 )
  {
    PopPolicyDeviceRemove((__int64)Context, v5);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v8 )
  {
    PopConnectToPolicyDevice(*(_DWORD *)&Context[1].Length, Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock(&PopPolicyDeviceLock);
  if ( v4 )
  {
    PnpUnregisterPlugPlayNotification(Context[1].Buffer, 1);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140E01AC4 + 8 * *(int *)&Context[1].Length));
  }
  return 0LL;
}
