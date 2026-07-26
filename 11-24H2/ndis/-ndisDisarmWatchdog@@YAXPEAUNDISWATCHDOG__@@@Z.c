/*
 * XREFs of ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140142178
 * Callers:
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6D4C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x140051440 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x140153530 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
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
