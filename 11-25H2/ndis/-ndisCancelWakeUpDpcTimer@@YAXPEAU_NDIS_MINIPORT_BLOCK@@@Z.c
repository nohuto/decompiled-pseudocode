/*
 * XREFs of ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057240
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     NdisMIdleNotificationConfirm @ 0x140084C90 (NdisMIdleNotificationConfirm.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisCancelWakeUpDpcTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v4; // bp

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  a1->PnPFlags |= 0x20000000u;
  a1->MiniportThread = CurrentThread;
  if ( KeCancelTimer(&a1->WakeUpDpcTimer.Timer) )
    KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
  ndisWaitForKernelObject(&a1->CFHCompletedEvent);
}
