/*
 * XREFs of ExpPrmTargetDeviceChangeCallback @ 0x1407AFD00
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x14064B9B0 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x1407AFAD8 (ExpAcquirePrmInterface.c)
 *     IoUnregisterPlugPlayNotification @ 0x140A89870 (IoUnregisterPlugPlayNotification.c)
 */

__int64 __fastcall ExpPrmTargetDeviceChangeCallback(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rax
  PVOID v5; // rdi
  __int64 v6; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
  {
    _InterlockedExchange(&ExPrmContext, 0);
    ExpPrmWaitForForZeroActiveCount();
    guard_dispatch_icall_no_overrides(qword_140EFA260);
    memset_0(&unk_140EFA258, 0, 0x40uLL);
    return (unsigned int)v3;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
    if ( _InterlockedCompareExchange(&ExPrmContext, 0, 2) == 2 )
    {
      ExpPrmWaitForForZeroActiveCount();
      guard_dispatch_icall_no_overrides(qword_140EFA260);
      memset_0(&unk_140EFA258, 0, 0x40uLL);
    }
    v5 = NotificationEntry;
    NotificationEntry = 0LL;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v6 )
  {
    v5 = NotificationEntry;
    v3 = ExpAcquirePrmInterface(&UnicodeString, 0, &unk_140EFA258);
    if ( v3 >= 0 )
      _InterlockedExchange(&ExPrmContext, 2);
    else
      _InterlockedExchange(&ExPrmContext, 0);
LABEL_17:
    if ( v5 )
      IoUnregisterPlugPlayNotification(v5);
  }
  return (unsigned int)v3;
}
