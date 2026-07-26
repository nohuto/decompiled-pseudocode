/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x14014CC20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisVBusUpdateDependentBindings@@YAXXZ @ 0x14014CD8C (-ndisVBusUpdateDependentBindings@@YAXXZ.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  ndisVBusUpdateDependentBindings();
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  NmrClientDetachProviderComplete(*(HANDLE *)&WPP_MAIN_CB.DeviceQueue.Type);
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
}
