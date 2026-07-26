/*
 * XREFs of ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14014CE48
 * Callers:
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AEEFC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x14006CFF0 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x14015FDA0 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisDisarmWatchdog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v1 = WatchdogFromHandle(a1);
    NdisWatchdogState::Disarm((NdisWatchdogState *)v1);
  }
}
