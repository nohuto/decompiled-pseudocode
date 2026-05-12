/*
 * XREFs of StorGetStorageNotificationInfo @ 0x1401B23B8
 * Callers:
 *     RaidAdapterStorageNotificationGetInfoIoctl @ 0x140063FE8 (RaidAdapterStorageNotificationGetInfoIoctl.c)
 *     NvmeAdapterStorageNotificationGetInfoIoctl @ 0x14019C910 (NvmeAdapterStorageNotificationGetInfoIoctl.c)
 * Callees:
 *     StorGetEventNotificationContext @ 0x14013820C (StorGetEventNotificationContext.c)
 *     StorNotificationFindCallerContextByGuid @ 0x140138794 (StorNotificationFindCallerContextByGuid.c)
 */

__int64 __fastcall StorGetStorageNotificationInfo(__int64 a1, IRP *a2, _QWORD *a3)
{
  __int64 EventNotificationContext; // rbx
  struct _ERESOURCE *v6; // rbp
  _QWORD *CallerContextByGuid; // rax
  unsigned int v8; // ebx

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  EventNotificationContext = StorGetEventNotificationContext(a1);
  if ( !EventNotificationContext )
    return 3221225485LL;
  KeEnterCriticalRegion();
  v6 = (struct _ERESOURCE *)(EventNotificationContext + 24);
  ExAcquireResourceSharedLite((PERESOURCE)(EventNotificationContext + 24), 1u);
  CallerContextByGuid = StorNotificationFindCallerContextByGuid(EventNotificationContext, a3);
  if ( CallerContextByGuid )
  {
    if ( (CallerContextByGuid[4] & 1) != 0 )
    {
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)CallerContextByGuid + 18, 0, 0) < (int)*((unsigned __int16 *)CallerContextByGuid + 17) )
      {
        IoCsqInsertIrp((PIO_CSQ)(CallerContextByGuid + 10), a2, 0LL);
        v8 = 259;
      }
      else
      {
        v8 = -1073741756;
      }
    }
    else
    {
      v8 = -1073741808;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegion();
  return v8;
}
