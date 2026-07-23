/*
 * XREFs of PopAdaptiveStandbyActionWorker @ 0x14075F2D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140758390 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004F028,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v14);
  while ( 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
    v1 = dword_140F07364;
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      v17 = 0;
      v15 = &v11;
      v11 = dword_140F07364;
      v16 = 4;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)byte_14004E4CD,
        (const GUID *)ActivityIdThread,
        0LL,
        3u,
        v14);
    }
    if ( !v1 )
      break;
    dword_140F07364 = 0;
    PopReleaseRwLock(&PopAdaptiveStandbyLock);
    PopAcquirePolicyLock(v4, v3);
    PopPowerAggregatorTriggerAdaptiveAction(v1);
    PopReleasePolicyLock(v6, v5, v7, v8, v10);
  }
  byte_140F07360 = 0;
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004E4A1,
      &ActivityId,
      v13,
      2u,
      v14);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v13);
}
