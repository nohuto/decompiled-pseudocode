/*
 * XREFs of PopPowerRequestHandleClose @ 0x14046C044
 * Callers:
 *     PoDeletePowerRequest @ 0x140A3C4E0 (PoDeletePowerRequest.c)
 *     PopPowerRequestClose @ 0x140A85940 (PopPowerRequestClose.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14046C0C4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14046C280 (PopPowerRequestCallbackWorker.c)
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
