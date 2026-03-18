/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x140472AF4
 * Callers:
 *     AlpcpDeletePort @ 0x14098B9F0 (AlpcpDeletePort.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A07884 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140472B58 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 */

void __fastcall AlpcpFreeCompletionPacketLookaside(KSPIN_LOCK *P)
{
  int v2; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(P, &LockHandle);
  if ( *((_DWORD *)P + 3) )
  {
    v2 = 0;
    *((_DWORD *)P + 6) = 1;
  }
  else
  {
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
    AlpcpDeferredFreeCompletionPacketLookaside(P);
}
