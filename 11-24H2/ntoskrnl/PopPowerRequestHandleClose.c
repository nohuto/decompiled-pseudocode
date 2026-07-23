/*
 * XREFs of PopPowerRequestHandleClose @ 0x140464CC4
 * Callers:
 *     PoDeletePowerRequest @ 0x140A31CC0 (PoDeletePowerRequest.c)
 *     PopPowerRequestClose @ 0x140A80480 (PopPowerRequestClose.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x140464F00 (PopPowerRequestCallbackWorker.c)
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
