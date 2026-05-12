/*
 * XREFs of StorPortUnitDirectedPowerDownCompletion @ 0x14007A190
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitDisablePendingTimer @ 0x140032D3C (RaidUnitDisablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x14003D350 (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
  }
  *(_BYTE *)(Context + 505) &= ~1u;
  v8 = *(_QWORD *)(Context + 1872);
  *(_QWORD *)(Context + 2216) = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(*(_QWORD *)(Context + 24) + 108LL) & 1) != 0 )
  {
    *(_DWORD *)(v8 + 32) |= 0x80u;
    if ( !*(_QWORD *)(Context + 2208) )
      *(_QWORD *)(Context + 2208) = *(_QWORD *)(Context + 2216);
  }
  else
  {
    *(_DWORD *)(v8 + 32) &= ~0x80u;
  }
  PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1872), v8, v7);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(Context + 24),
      &EventUnitDirectedPowerDownStop,
      v9,
      **(_QWORD **)(Context + 1872),
      *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
      *(_BYTE *)(Context + 104),
      *(_BYTE *)(Context + 105),
      *(_BYTE *)(Context + 106),
      1);
  *(_BYTE *)(Context + 507) |= 2u;
}
