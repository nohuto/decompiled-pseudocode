/*
 * XREFs of ExpPrmTargetDeviceChangeCallback @ 0x1407BF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x140657910 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x1407BF2A8 (ExpAcquirePrmInterface.c)
 *     IoUnregisterPlugPlayNotification @ 0x140A8E890 (IoUnregisterPlugPlayNotification.c)
 */

__int64 __fastcall ExpPrmTargetDeviceChangeCallback(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // rdi
  __int64 v12; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
  {
    _InterlockedExchange(&ExPrmContext, 0);
    ExpPrmWaitForForZeroActiveCount();
    guard_dispatch_icall_no_overrides(qword_140EFA5A0, v4, v5, v6);
    memset_0(&unk_140EFA598, 0, 0x40uLL);
    return (unsigned int)v3;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange(&ExPrmContext, 0, 2) == 2 )
    {
      ExpPrmWaitForForZeroActiveCount();
      guard_dispatch_icall_no_overrides(qword_140EFA5A0, v8, v9, v10);
      memset_0(&unk_140EFA598, 0, 0x40uLL);
    }
    v11 = NotificationEntry;
    NotificationEntry = 0LL;
    goto LABEL_17;
  }
  v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v12 )
  {
    v11 = NotificationEntry;
    v3 = ExpAcquirePrmInterface(&UnicodeString, 0, &unk_140EFA598);
    if ( v3 >= 0 )
      _InterlockedExchange(&ExPrmContext, 2);
    else
      _InterlockedExchange(&ExPrmContext, 0);
LABEL_17:
    if ( v11 )
      IoUnregisterPlugPlayNotification(v11);
  }
  return (unsigned int)v3;
}
