/*
 * XREFs of StorPortUnitPowerRequiredStep2 @ 0x14002E8AC
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x14002E610 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerRequiredStep2(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
  v2 = *(_QWORD *)(Context + 1872);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4960LL)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3608), 1, 0) )
    {
      RaidAdapterPoFxActivateComponent(*(_QWORD *)(Context + 24), 0LL, 0LL);
    }
  }
  else if ( *(_DWORD *)(Context + 548) != 1 || (*(_BYTE *)(Context + 505) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           RaidUnitDeviceStackPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1888), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1872) + 36LL), 0, 1) )
    {
      v3 = *(_QWORD *)(Context + 24);
      if ( RaidUnitCheckAndAcquirePoFx(Context) )
      {
        PoFxIdleComponent(**(_QWORD **)(Context + 1872), 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
      }
      if ( *(_QWORD *)(v3 + 4960) )
        RaidAdapterPoFxIdleComponent(v3, 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1872));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140171462 & 0x10) != 0 )
      McTemplateK0pquuuq_EtwWriteTransfer(
        *(_QWORD *)(Context + 24),
        (unsigned int)&EventUnitPowerRequiredStop,
        v4,
        **(_QWORD **)(Context + 1872),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 104),
        *(_BYTE *)(Context + 105),
        *(_BYTE *)(Context + 106),
        0);
  }
}
