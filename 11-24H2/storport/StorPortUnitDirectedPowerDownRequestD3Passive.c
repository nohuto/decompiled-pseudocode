/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3Passive @ 0x14007A520
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x14007A2E0 (StorPortUnitDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 508, 0);
  StorPortUnitDirectedPowerDownRequestD3((char *)Context);
}
