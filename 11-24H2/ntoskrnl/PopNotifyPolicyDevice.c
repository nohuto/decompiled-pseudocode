/*
 * XREFs of PopNotifyPolicyDevice @ 0x140758DA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(char *NotificationStructure, PVOID Context)
{
  int v2; // edi
  __int64 v3; // rax
  bool v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-8h]

  v2 = (int)Context;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopPolicyDeviceHandleWakeAlarmNotification();
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4LL);
    PopAcquirePolicyLock(v7, v6);
    v8 = PopHiberEnabled;
    PopEnableHiberFile(0LL);
    if ( v8 )
    {
      LOBYTE(v10) = 1;
      PopEnableHiberFile(v10);
    }
    PopReleasePolicyLock(v10, v9, v11, v12, v14);
    PopReleaseTransitionLock(4LL);
  }
  else
  {
    Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
    if ( !v5 )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPolicyDeviceLock);
      PopConnectToPolicyDevice(v2, *((const UNICODE_STRING **)NotificationStructure + 5));
      PopReleaseRwLock(&PopPolicyDeviceLock);
    }
  }
  return 0LL;
}
