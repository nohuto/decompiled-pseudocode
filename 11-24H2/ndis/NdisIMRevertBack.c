/*
 * XREFs of NdisIMRevertBack @ 0x14009F840
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall NdisIMRevertBack(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned __int64 *p_Lock; // rcx

  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  ndisMProcessDeferred(a1);
  p_Lock = &a1->Lock;
  a1->MiniportThread = 0LL;
  if ( a2 == -1 )
  {
    KeReleaseSpinLockFromDpcLevel(p_Lock);
  }
  else
  {
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, a2);
  }
}
