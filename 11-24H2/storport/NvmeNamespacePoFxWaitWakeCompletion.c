/*
 * XREFs of NvmeNamespacePoFxWaitWakeCompletion @ 0x140133C40
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 */

void __fastcall NvmeNamespacePoFxWaitWakeCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_QWORD *)(*(_QWORD *)(Context[16] + 8LL) + 72LL) = 0LL;
    if ( Status >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context[16] + 88LL), &LockHandle);
      *(_DWORD *)(Context[16] + 64LL) = 2;
      *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) |= 8u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    v7 = Context[16];
    if ( (*(_DWORD *)(v7 + 72) != 1 || (*(_DWORD *)(v7 + 80) & 4) != 0)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 36LL), 1, 0) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(Context[2] + 128LL) + 160LL);
      if ( *(_BYTE *)v8 == 1 )
        PoFxActivateComponent(**(_QWORD **)(v8 + 8), 0LL, 0LL);
      if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
      {
        PoFxActivateComponent(**(_QWORD **)(Context[16] + 8LL), 0LL, 0LL);
        NvmeNamespaceReleasePoFx((__int64)Context);
      }
    }
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
