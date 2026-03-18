/*
 * XREFs of PopPowerRequestHandleClose @ 0x14046D6B4
 * Callers:
 *     PoDeletePowerRequest @ 0x140A35B50 (PoDeletePowerRequest.c)
 *     PopPowerRequestClose @ 0x140A81140 (PopPowerRequestClose.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046D734 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14046D8F0 (PopPowerRequestCallbackWorker.c)
 */

void __fastcall PopPowerRequestHandleClose(_BYTE *Object)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2[1] = v2;
  v2[0] = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  Object[32] = 1;
  PopPowerRequestEvaluatePendingRequestStatus(Object);
  LOBYTE(Object) = v2[0] != (_QWORD)v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_BYTE)Object )
    PopPowerRequestCallbackWorker(v2);
}
