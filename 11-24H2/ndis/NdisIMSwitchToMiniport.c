/*
 * XREFs of NdisIMSwitchToMiniport @ 0x14009F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall NdisIMSwitchToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, KIRQL *a2)
{
  char v4; // di

  *a2 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    *(_QWORD *)a2 = -1LL;
    return 1;
  }
  else
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    v4 = 0;
    if ( !a1->LockAcquired )
    {
      v4 = 1;
      a1->LockAcquired = 1;
      a1->LockThread = KeGetCurrentThread();
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  return v4;
}
