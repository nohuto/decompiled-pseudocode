/*
 * XREFs of StorPortUnitDirectedPowerUpRequestD0 @ 0x14007A718
 * Callers:
 *     StorPortUnitDirectedPowerUp @ 0x14007A540 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortUnitDirectedPowerUpRequestD0(char *Context)
{
  _QWORD **v2; // r14
  struct _DEVICE_OBJECT **v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) != 1 || (Context[505] & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerUpCompletion,
           Context,
           0LL) == 259 )
    {
      Context[504] |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 472, 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
    v2 = (_QWORD **)(Context + 1872);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 234) + 36LL), 0, 1) )
    {
      v4 = *((_QWORD *)Context + 3);
      if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
      {
        PoFxIdleComponent(**((_QWORD **)Context + 234), 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
      }
      if ( *(_QWORD *)(v4 + 4960) )
        RaidAdapterPoFxIdleComponent(v4, 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1872);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
  }
  PoFxReportDevicePoweredOn(**v2);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
  {
    LOBYTE(Irp) = Context[104];
    LODWORD(Contexta) = *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v5,
      &EventUnitDirectedPowerUpStop,
      v6,
      **v2,
      Contexta,
      Irp,
      Context[105],
      Context[106],
      0);
  }
  if ( *((char **)Context + 436) == Context + 3488 )
    Context[507] &= ~2u;
  else
    RaFlushDFxQueue(*v3);
}
