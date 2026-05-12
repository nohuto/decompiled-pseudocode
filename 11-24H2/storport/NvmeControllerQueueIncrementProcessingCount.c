/*
 * XREFs of NvmeControllerQueueIncrementProcessingCount @ 0x1400F3918
 * Callers:
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400E40C0 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400E5630 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400F794C (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400F7DF8 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400F8248 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400F847C (NvmeFabricControllerQueueSendAuthNegogiate.c)
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400F86D8 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeFabricControllerQueueSendAuthSuccess @ 0x1400F8960 (NvmeFabricControllerQueueSendAuthSuccess.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerQueueIncrementProcessingCount(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 88) + 720LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  ++*(_WORD *)(a1 + 146);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
