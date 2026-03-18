/*
 * XREFs of PopAdaptiveStandbyActionWorker @ 0x1407602D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140759F40 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

struct _KTHREAD *PopAdaptiveStandbyActionWorker()
{
  struct _LIST_ENTRY *v0; // rax
  int v1; // ebx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-19h]
  int v11; // [rsp+30h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-1h] BYREF
  GUID *v13; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp+17h] BYREF
  int *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  v13 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v13 = (GUID *)v0;
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004E235,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v14);
  while ( 1 )
  {
    PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
    v1 = dword_140F07054;
    if ( (unsigned int)dword_140E08258 > 5 )
    {
      v17 = 0;
      v15 = &v11;
      v11 = dword_140F07054;
      v16 = 4;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08258,
        (unsigned __int8 *)byte_14004E1F9,
        (const GUID *)ActivityIdThread,
        0LL,
        3u,
        v14);
    }
    if ( !v1 )
      break;
    dword_140F07054 = 0;
    PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
    PopAcquirePolicyLock(v4, v3);
    PopPowerAggregatorTriggerAdaptiveAction(v1);
    PopReleasePolicyLock(v6, v5, v7, v8, v10);
  }
  byte_140F07050 = 0;
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&byte_14004DF3F,
      &ActivityId,
      v13,
      2u,
      v14);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v13);
}
