/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x140008588
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x14003D350 (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // r8d
  void *v7; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(a4) )
    goto LABEL_17;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1872) + 36LL), 0, 1) )
  {
    v5 = *(_QWORD *)(a4 + 24);
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a4) )
    {
      PoFxIdleComponent(**(_QWORD **)(a4 + 1872), 0LL, 0LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1864));
    }
    if ( *(_QWORD *)(v5 + 4960) )
      RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 48), &LockHandle);
  RaidUnitCancelWaitWakeIrp(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(a4 + 512) & 0x20) == 0 )
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1872));
  if ( StorEtwLoggingEnabled )
  {
    if ( (*(_BYTE *)(a4 + 507) & 2) != 0 )
    {
      if ( (byte_140171462 & 0x10) != 0 )
      {
        v7 = &EventUnitDirectedPowerUpStop;
LABEL_15:
        McTemplateK0pquuuq_EtwWriteTransfer(
          *(_QWORD *)(a4 + 24),
          (_DWORD)v7,
          v6,
          **(_QWORD **)(a4 + 1872),
          *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
          *(_BYTE *)(a4 + 104),
          *(_BYTE *)(a4 + 105),
          *(_BYTE *)(a4 + 106),
          1);
      }
    }
    else if ( (byte_140171462 & 0x10) != 0 )
    {
      v7 = &EventUnitPowerRequiredStop;
      goto LABEL_15;
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1864));
LABEL_17:
  if ( *(_DWORD *)(a4 + 3432) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 24) + 960LL) + 48LL)
                                                    + 996LL));
}
