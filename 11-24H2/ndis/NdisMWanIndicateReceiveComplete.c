/*
 * XREFs of NdisMWanIndicateReceiveComplete @ 0x1400A0330
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall NdisMWanIndicateReceiveComplete(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  _NDIS_OPEN_BLOCK *i; // rdi
  unsigned __int64 *p_Lock; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( i = a1->OpenQueue; ; i = i->MiniportNextOpen )
  {
    a1->MiniportThread = 0LL;
    p_Lock = &a1->Lock;
    if ( !i )
      break;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    i->ReceiveCompleteHandler(a2);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  }
  KeReleaseSpinLock(p_Lock, NewIrql);
}
