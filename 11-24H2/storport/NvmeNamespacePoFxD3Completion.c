/*
 * XREFs of NvmeNamespacePoFxD3Completion @ 0x140133A90
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCancelWaitWakeIrp @ 0x140132F94 (NvmeNamespaceCancelWaitWakeIrp.c)
 */

void __fastcall NvmeNamespacePoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // ebp
  __int64 v7; // rsi
  char *v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  v7 = *(_QWORD *)(Context[2] + 128LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    v8 = (char *)(Context + 16);
    if ( Status < 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)v8 + 88LL), &LockHandle);
      NvmeNamespaceCancelWaitWakeIrp((__int64)Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    NvmeNamespaceReleasePoFx((__int64)Context);
    if ( **(_BYTE **)(v7 + 160) == 1
      && _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)v8 + 96LL), 0, 1) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v7 + 160) + 8LL), 0LL, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)v8 + 80LL) &= ~4u;
  }
}
