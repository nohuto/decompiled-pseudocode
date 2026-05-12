/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x14002EA68
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x14002E520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x14007AA20 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  char v4; // r14
  PDEVICE_OBJECT *v5; // r15
  NTSTATUS v6; // edi
  __int64 v7; // r8
  int v8; // edx
  int v9; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  v2 = *((_QWORD *)Context + 234);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 1056));
    _interlockedbittestandset((volatile signed __int32 *)Context + 126, 0xDu);
    v4 = 0;
    if ( *(_QWORD *)(*((_QWORD *)Context + 3) + 4960LL)
      && _InterlockedCompareExchange((volatile signed __int32 *)Context + 902, 0, 1) == 1 )
    {
      RaidAdapterPoFxIdleComponent(*((_QWORD *)Context + 3), 0LL, 0LL);
    }
    goto LABEL_16;
  }
  v4 = 0;
  if ( *((_DWORD *)Context + 137) != 1 )
    goto LABEL_16;
  if ( (v3 & 1) == 0 )
  {
    v5 = (PDEVICE_OBJECT *)(Context + 8);
    goto LABEL_14;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v5 = (PDEVICE_OBJECT *)(Context + 8);
    v6 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 234) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
    if ( v6 >= 0 )
    {
LABEL_14:
      v4 = 0;
      if ( PoRequestPowerIrp(*v5, 2u, (POWER_STATE)4, StorPortUnitPoFxD3Completion, Context, 0LL) == 259 )
      {
        Context[505] |= 1u;
        _InterlockedExchange((volatile __int32 *)Context + 473, 0);
        v4 = 1;
      }
    }
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = *((_QWORD *)Context + 234);
    *((_QWORD *)Context + 269) = MEMORY[0xFFFFF78000000008];
    v8 = *(_DWORD *)(v7 + 32);
    if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
    {
      *(_DWORD *)(v7 + 32) = v8 | 0x20;
      if ( !*((_QWORD *)Context + 266) )
        *((_QWORD *)Context + 266) = *((_QWORD *)Context + 269);
    }
    else
    {
      *(_DWORD *)(v7 + 32) = v8 & 0xFFFFFFDF;
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 234));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140171462 & 0x10) != 0 )
        McTemplateK0pquuuq_EtwWriteTransfer(
          *((_QWORD *)Context + 3),
          (unsigned int)&EventUnitPowerNotRequiredStop,
          v9,
          **((_QWORD **)Context + 234),
          *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
          Context[104],
          Context[105],
          Context[106],
          v4);
    }
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 508, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 252),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
