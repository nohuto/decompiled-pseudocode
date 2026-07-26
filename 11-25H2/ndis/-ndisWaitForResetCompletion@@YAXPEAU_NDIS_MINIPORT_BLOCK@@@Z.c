/*
 * XREFs of ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057AE0
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForResetCompletion(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // dl
  bool v3; // zf
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v2);
    KeStallExecutionProcessor(1u);
    v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  v3 = (a1->Flags & 0x200000) == 0;
  a1->LockAcquired = 1;
  if ( !v3 )
    a1->ResetCompletedEvent = &Event;
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( a1->ResetCompletedEvent )
    ndisWaitForKernelObject(&Event);
  a1->ResetCompletedEvent = 0LL;
}
