/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x1404B0D7C
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AA99CC (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB4C64 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44 (PopPowerRequestEvaluatePendingRequestStatus.c)
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
  if ( _InterlockedIncrement(&dword_140F0E3E0) == 1 )
    ExQueueWorkItem(&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
