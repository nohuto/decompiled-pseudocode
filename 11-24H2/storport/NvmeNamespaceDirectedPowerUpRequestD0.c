/*
 * XREFs of NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140133554
 * Callers:
 *     NvmeNamespaceDirectedPowerUp @ 0x1401334C0 (NvmeNamespaceDirectedPowerUp.c)
 * Callees:
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 */

void __fastcall NvmeNamespaceDirectedPowerUpRequestD0(char *Context)
{
  char *v1; // rdi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = Context + 128;
  v3 = *((_QWORD *)Context + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 88), &LockHandle);
  v4 = (_DWORD *)(*(_QWORD *)v1 + 80LL);
  if ( *(_DWORD *)(*(_QWORD *)v1 + 72LL) != 1 || (*v4 & 4) != 0 )
  {
    *v4 |= 2u;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)NvmeNamespaceDirectedPowerUpCompletion,
           Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v1 + 180LL), 0);
      return;
    }
    *(_DWORD *)(*(_QWORD *)v1 + 80LL) &= ~2u;
    ++*(_DWORD *)(*(_QWORD *)v1 + 168LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)v1 + 8LL) + 36LL), 0, 1) )
    {
      v5 = *(_QWORD *)(*((_QWORD *)Context + 2) + 128LL);
      if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)v1 + 8LL), 0LL, 0LL);
        NvmeNamespaceReleasePoFx((__int64)Context);
        v1 = Context + 128;
      }
      v6 = *(_QWORD *)(v5 + 160);
      if ( *(_BYTE *)v6 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v6 + 8), 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(*(_QWORD *)v1 + 8LL));
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 + 8LL) + 41LL) = 0;
  if ( *(_QWORD *)(*(_QWORD *)v1 + 104LL) != *(_QWORD *)v1 + 104LL )
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
