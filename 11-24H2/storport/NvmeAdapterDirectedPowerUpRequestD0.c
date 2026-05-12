/*
 * XREFs of NvmeAdapterDirectedPowerUpRequestD0 @ 0x14012E4D8
 * Callers:
 *     NvmeAdapterDirectedPowerUp @ 0x14012E3C0 (NvmeAdapterDirectedPowerUp.c)
 * Callees:
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 */

void __fastcall NvmeAdapterDirectedPowerUpRequestD0(PVOID Context)
{
  KSPIN_LOCK *v2; // rcx
  _DWORD *v3; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 20) + 120LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = (_DWORD *)*((_QWORD *)Context + 20);
  if ( v3[17] != 1 || (v3[19] & 4) != 0 )
  {
    v3[19] |= 2u;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)NvmeAdapterDirectedPowerUpCompletion,
           Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ++*(_DWORD *)(*((_QWORD *)Context + 20) + 264LL);
      return;
    }
    *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) &= ~2u;
    ++*(_DWORD *)(*((_QWORD *)Context + 20) + 240LL);
  }
  else
  {
    ++v3[63];
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**(_QWORD **)(*((_QWORD *)Context + 20) + 8LL));
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)Context + 20) + 8LL) + 65LL) = 0;
  if ( *(_QWORD *)(*((_QWORD *)Context + 20) + 144LL) != *((_QWORD *)Context + 20) + 144LL )
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
