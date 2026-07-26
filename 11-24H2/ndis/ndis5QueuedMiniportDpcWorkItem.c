/*
 * XREFs of ndis5QueuedMiniportDpcWorkItem @ 0x1400D7370
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMDpc @ 0x1400D7410 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1400D75DC (ndisMDpcX.c)
 */

void __fastcall ndis5QueuedMiniportDpcWorkItem(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rsi
  KIRQL v3; // di
  __int64 Flags; // rcx

  Interrupt = a1->Interrupt;
  v3 = KfRaiseIrql(2u);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFDFFFFFF);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  Flags = a1->Flags;
  if ( (Flags & 0x40000) != 0 )
    ndisMDpcX(Flags, Interrupt);
  else
    ndisMDpc(Flags, Interrupt);
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceMiniport(a1, 0x4Eu);
}
