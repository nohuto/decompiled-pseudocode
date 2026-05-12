/*
 * XREFs of StorCancelStorageNotificationIrp @ 0x1401B1F64
 * Callers:
 *     RaidAdapterStorageNotificationConfigureIoctl @ 0x140063BA8 (RaidAdapterStorageNotificationConfigureIoctl.c)
 *     NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019C4DC (NvmeAdapterStorageNotificationConfigureIoctl.c)
 * Callees:
 *     StorNotificationCompletePendingIrps @ 0x140055A8C (StorNotificationCompletePendingIrps.c)
 *     StorGetEventNotificationContext @ 0x14013820C (StorGetEventNotificationContext.c)
 *     StorNotificationFindCallerContextByGuid @ 0x140138794 (StorNotificationFindCallerContextByGuid.c)
 */

__int64 __fastcall StorCancelStorageNotificationIrp(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 EventNotificationContext; // rdi
  _QWORD *CallerContextByGuid; // rax

  v2 = 0;
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
  if ( CallerContextByGuid )
  {
    if ( (CallerContextByGuid[4] & 1) != 0 )
      StorNotificationCompletePendingIrps((__int64)CallerContextByGuid, -1073741536);
  }
  else
  {
    v2 = -1073741275;
  }
  ExReleaseResourceLite((PERESOURCE)(EventNotificationContext + 24));
  KeLeaveCriticalRegion();
  return v2;
}
