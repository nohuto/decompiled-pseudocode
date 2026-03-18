/*
 * XREFs of PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A18A88 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A4D1E4 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140A56D68 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestTableLookupEntry @ 0x140A5F1B4 (PopPowerRequestTableLookupEntry.c)
 */

__int64 __fastcall PopPowerRequestHandleRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquirePowerRequestPushLock(a1);
  v4 = (_DWORD *)PopPowerRequestTableLookupEntry(*v1);
  if ( v4 )
  {
    v6 = v1[2];
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v4[6] = v6;
    PopPowerRequestEvaluatePendingRequestStatus(v4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedIncrement(&dword_140F0D9C0) == 1 )
      ExQueueWorkItem(&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
  }
  return PopReleasePowerRequestPushLock(v3, v2, v5);
}
