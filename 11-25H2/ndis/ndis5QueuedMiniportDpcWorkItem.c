/*
 * XREFs of ndis5QueuedMiniportDpcWorkItem @ 0x1400DE6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMDpc @ 0x1400DE74C (ndisMDpc.c)
 *     ndisMDpcX @ 0x1400DE918 (ndisMDpcX.c)
 */

void __fastcall ndis5QueuedMiniportDpcWorkItem(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rsi
  KIRQL v3; // di
  __int64 v4; // rcx

  Interrupt = a1->Interrupt;
  v3 = KfRaiseIrql(2u);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  a1->Flags &= ~0x2000000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  if ( (a1->Flags & 0x40000) != 0 )
    ndisMDpcX(v4, Interrupt);
  else
    ndisMDpc(v4, Interrupt);
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceMiniport(a1, 0x4Eu);
}
