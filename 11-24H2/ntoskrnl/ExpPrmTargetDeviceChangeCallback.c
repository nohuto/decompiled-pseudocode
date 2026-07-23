/*
 * XREFs of ExpPrmTargetDeviceChangeCallback @ 0x1407BF920
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x140656010 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x1407BF6F8 (ExpAcquirePrmInterface.c)
 *     IoUnregisterPlugPlayNotification @ 0x140A8AF00 (IoUnregisterPlugPlayNotification.c)
 */

__int64 __fastcall ExpPrmTargetDeviceChangeCallback(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  PVOID v7; // rdi
  __int64 v8; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
  {
    _InterlockedExchange(&ExPrmContext, 0);
    ExpPrmWaitForForZeroActiveCount();
    guard_dispatch_icall_no_overrides(qword_140EFA8C0, v4);
    memset_0(&unk_140EFA8B8, 0, 0x40uLL);
    return (unsigned int)v3;
  }
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v5 )
  {
    if ( _InterlockedCompareExchange(&ExPrmContext, 0, 2) == 2 )
    {
      ExpPrmWaitForForZeroActiveCount();
      guard_dispatch_icall_no_overrides(qword_140EFA8C0, v6);
      memset_0(&unk_140EFA8B8, 0, 0x40uLL);
    }
    v7 = NotificationEntry;
    NotificationEntry = 0LL;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v8 )
  {
    v7 = NotificationEntry;
    v3 = ExpAcquirePrmInterface(&UnicodeString, 0, &unk_140EFA8B8);
    if ( v3 >= 0 )
      _InterlockedExchange(&ExPrmContext, 2);
    else
      _InterlockedExchange(&ExPrmContext, 0);
LABEL_17:
    if ( v7 )
      IoUnregisterPlugPlayNotification(v7);
  }
  return (unsigned int)v3;
}
