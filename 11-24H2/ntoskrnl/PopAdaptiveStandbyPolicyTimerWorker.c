/*
 * XREFs of PopAdaptiveStandbyPolicyTimerWorker @ 0x140761DE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
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
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&byte_14004DE2F,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v4);
  PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
  PopOkayToQueueNextWorkItem((__int64)&unk_140F07008);
  if ( byte_140F06F74 )
  {
    byte_140F06F74 = 0;
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)&PopAdaptiveStandbyContext, 0LL);
  }
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004DE0D,
      &ActivityId,
      v3,
      2u,
      v4);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v3);
}
