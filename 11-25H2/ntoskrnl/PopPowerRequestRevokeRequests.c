/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x1404B6AAC
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AA959C (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB57B8 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 */

void __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  PVOID *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  if ( !a2 )
  {
    a1 &= ~PopPowerRequestGlobalOverrideMask;
    if ( !a1 )
      goto LABEL_3;
    PopPowerRequestGlobalOverrideMask |= a1;
  }
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    if ( a2 )
    {
      if ( (a1 & *((_DWORD *)i + 7)) == a1 )
        continue;
      *((_DWORD *)i + 7) |= a1;
    }
    PopPowerRequestEvaluatePendingRequestStatus(i, 0LL);
  }
  if ( _InterlockedIncrement(&dword_140F0D9C0) == 1 )
    ExQueueWorkItem(&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
