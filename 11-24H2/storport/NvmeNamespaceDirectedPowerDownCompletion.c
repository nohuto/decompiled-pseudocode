/*
 * XREFs of NvmeNamespaceDirectedPowerDownCompletion @ 0x1401331F0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCancelWaitWakeIrp @ 0x140132F94 (NvmeNamespaceCancelWaitWakeIrp.c)
 */

void __fastcall NvmeNamespaceDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  char *v9; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    v9 = Context + 128;
    if ( Status < 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)v9 + 88LL), &LockHandle);
      NvmeNamespaceCancelWaitWakeIrp((__int64)Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    *(_DWORD *)(*(_QWORD *)v9 + 80LL) &= ~4u;
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*(_QWORD *)v9 + 8LL), v7, v8);
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 41LL) = 1;
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
