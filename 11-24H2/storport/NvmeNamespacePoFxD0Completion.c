/*
 * XREFs of NvmeNamespacePoFxD0Completion @ 0x140133980
 * Callers:
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCancelWaitWakeIrp @ 0x140132F94 (NvmeNamespaceCancelWaitWakeIrp.c)
 */

__int64 __fastcall NvmeNamespacePoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a4 + 128);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8) + 36LL), 0, 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 128LL);
    if ( NvmeNamespaceCheckAndAcquirePoFx(a4) )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a4 + 128) + 8LL), 0LL, 0LL);
      NvmeNamespaceReleasePoFx(a4);
    }
    v7 = *(_QWORD *)(v6 + 160);
    if ( *(_BYTE *)v7 == 1 )
      PoFxIdleComponent(**(_QWORD **)(v7 + 8), 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a4 + 128) + 88LL), &LockHandle);
  NvmeNamespaceCancelWaitWakeIrp(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return PoFxReportDevicePoweredOn(**(_QWORD **)(*(_QWORD *)(a4 + 128) + 8LL));
}
