/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x140079BE0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1400799C0 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3Passive(
        PDEVICE_OBJECT DeviceObject,
        volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1424, 0);
  StorPortAdapterDirectedPowerDownRequestD3((char *)Context);
}
