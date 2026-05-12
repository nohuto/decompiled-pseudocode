/*
 * XREFs of NvmeNamespacePowerNotRequiredStep2 @ 0x140133FFC
 * Callers:
 *     NvmeNamespacePowerNotRequiredStep1 @ 0x140133F80 (NvmeNamespacePowerNotRequiredStep1.c)
 *     NvmeNamespacePowerNotRequiredStep2Passive @ 0x140134230 (NvmeNamespacePowerNotRequiredStep2Passive.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespacePowerNotRequiredStep2(PVOID Context)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // r8d
  KIRQL CurrentIrql; // al
  __int64 v7; // rcx
  NTSTATUS v8; // ebp
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(*((_QWORD *)Context + 2) + 128LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 16) + 88LL), &LockHandle);
  v3 = *((_QWORD *)Context + 16);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 2) != 0 )
  {
    if ( **(_BYTE **)(v2 + 160) == 1 && _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 96), 0, 1) == 1 )
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v2 + 160) + 8LL), 0LL, 0LL);
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v3 + 72) != 1 )
  {
LABEL_17:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDevicePowerNotRequired(**(_QWORD **)(*((_QWORD *)Context + 16) + 8LL));
    return;
  }
  if ( (v5 & 1) == 0 )
  {
LABEL_14:
    v9 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)NvmeNamespacePoFxD3Completion,
           Context,
           0LL);
    v10 = *((_QWORD *)Context + 16);
    if ( v9 == 259 )
    {
      *(_DWORD *)(v10 + 80) |= 4u;
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 16) + 184LL), 0);
    }
    else
    {
      ++*(_DWORD *)(v10 + 172);
    }
    goto LABEL_17;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v7 = *((_QWORD *)Context + 16);
  if ( !CurrentIrql )
  {
    v8 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)NvmeNamespacePoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*(_QWORD *)(v7 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 16) + 88LL), &LockHandle);
    if ( v8 != 259 )
      ++*(_DWORD *)(*((_QWORD *)Context + 16) + 176LL);
    if ( v8 < 0 )
      goto LABEL_17;
    goto LABEL_14;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 160), 1, 0) )
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(*((_QWORD *)Context + 16) + 144LL),
      NvmeNamespacePowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
