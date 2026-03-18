/*
 * XREFs of PnpFreeSystemPdoList @ 0x140A7FE30
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpFreePdoDeviceList @ 0x140A7FE48 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpFreeSystemPdoList(void *a1)
{
  return PiPnpFreePdoDeviceList(a1);
}
