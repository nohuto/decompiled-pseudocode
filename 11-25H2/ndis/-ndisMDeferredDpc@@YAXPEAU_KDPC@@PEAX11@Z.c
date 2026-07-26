/*
 * XREFs of ?ndisMDeferredDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400CBCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMDeferredDpc(
        struct _KDPC *Dpc,
        struct _NDIS_MINIPORT_BLOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rcx

  for ( i = DeferredContext; ; i = DeferredContext )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(i);
    if ( !DeferredContext->LockAcquired )
      break;
    DeferredContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&DeferredContext->Lock);
    KeStallExecutionProcessor(1u);
  }
  DeferredContext->LockAcquired = 1;
  DeferredContext->LockThread = KeGetCurrentThread();
  ndisMProcessDeferred(DeferredContext);
  DeferredContext->LockThread = 0LL;
  DeferredContext->MiniportThread = 0LL;
  DeferredContext->LockAcquired = 0;
  KeReleaseSpinLockFromDpcLevel(&DeferredContext->Lock);
}
