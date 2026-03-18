/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x1404B659C
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AAEAF0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB9BA4 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046C0C4 (PopPowerRequestEvaluatePendingRequestStatus.c)
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
  if ( _InterlockedIncrement(&dword_140F0DFA0) == 1 )
    ExQueueWorkItem(&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
