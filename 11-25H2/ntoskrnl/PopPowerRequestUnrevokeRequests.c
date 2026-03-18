/*
 * XREFs of PopPowerRequestUnrevokeRequests @ 0x1404B5204
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140AB3E78 (PopPowerRequestNotifyTtmSessionInitialized.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerRequestUnrevokeRequests(int a1)
{
  int v2; // ebx
  int v3; // eax
  PVOID *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v2 = PopPowerRequestGlobalOverrideMask & a1;
  if ( v2 )
  {
    v3 = ~v2 & PopPowerRequestGlobalOverrideMask;
    v4 = (PVOID *)PopPowerRequestObjectList;
    PopPowerRequestGlobalOverrideMask = v3;
    while ( v4 != &PopPowerRequestObjectList )
    {
      PopPowerRequestEvaluatePendingRequestStatus(v4, 0LL);
      v4 = (PVOID *)*v4;
    }
    PopQueueWorkItem((__int64)&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
