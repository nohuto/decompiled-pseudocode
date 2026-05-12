/*
 * XREFs of StorDeleteStorageNotification @ 0x1401B2020
 * Callers:
 *     RaidAdapterStorageNotificationConfigureIoctl @ 0x140063BA8 (RaidAdapterStorageNotificationConfigureIoctl.c)
 *     NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019C4DC (NvmeAdapterStorageNotificationConfigureIoctl.c)
 * Callees:
 *     StorNotificationCompletePendingIrps @ 0x140055A8C (StorNotificationCompletePendingIrps.c)
 *     StorGetEventNotificationContext @ 0x14013820C (StorGetEventNotificationContext.c)
 *     StorNotificationFindCallerContextByGuid @ 0x140138794 (StorNotificationFindCallerContextByGuid.c)
 */

__int64 __fastcall StorDeleteStorageNotification(__int64 a1, __int64 a2)
{
  __int64 EventNotificationContext; // rdi
  _QWORD *CallerContextByGuid; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  EventNotificationContext = StorGetEventNotificationContext(a1);
  if ( !EventNotificationContext )
    return 3221225485LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(EventNotificationContext + 24), 1u);
  CallerContextByGuid = StorNotificationFindCallerContextByGuid(EventNotificationContext, (_QWORD *)(a2 + 40));
  v5 = CallerContextByGuid;
  if ( CallerContextByGuid )
  {
    StorNotificationCompletePendingIrps((__int64)CallerContextByGuid, -1073741536);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --*(_BYTE *)(EventNotificationContext + 1);
    ExFreePoolWithTag(v5, 0x4E456152u);
  }
  ExReleaseResourceLite((PERESOURCE)(EventNotificationContext + 24));
  KeLeaveCriticalRegion();
  return 0LL;
}
