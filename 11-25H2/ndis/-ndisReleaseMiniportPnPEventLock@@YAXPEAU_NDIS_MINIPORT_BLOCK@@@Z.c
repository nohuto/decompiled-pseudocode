/*
 * XREFs of ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140072DD0
 * Callers:
 *     ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401612B0 (-ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseMiniportPnPEventLock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v4; // si
  struct _KEVENT *PnPEventLockEvent; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  a1->SyncFlags &= ~8u;
  a1->MiniportThread = CurrentThread;
  PnPEventLockEvent = a1->PnPEventLockEvent;
  if ( PnPEventLockEvent )
  {
    KeSetEvent(PnPEventLockEvent, 0, 0);
    a1->PnPEventLockEvent = 0LL;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
}
