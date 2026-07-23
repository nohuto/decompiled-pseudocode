/*
 * XREFs of PopAdaptiveStandbyPolicyTimerWorker @ 0x1407611B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 */

struct _KTHREAD *PopAdaptiveStandbyPolicyTimerWorker()
{
  struct _LIST_ENTRY *v0; // rax
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF
  GUID *v3; // [rsp+40h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v4[2]; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v3 = (GUID *)v0;
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004E9F9,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v4);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
  PopOkayToQueueNextWorkItem((__int64)&unk_140F07318);
  if ( byte_140F07284 )
  {
    byte_140F07284 = 0;
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)&PopAdaptiveStandbyContext, 0LL);
  }
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&qword_14004EA40,
      &ActivityId,
      v3,
      2u,
      v4);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v3);
}
