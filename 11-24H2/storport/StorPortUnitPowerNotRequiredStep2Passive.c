/*
 * XREFs of StorPortUnitPowerNotRequiredStep2Passive @ 0x14007AA20
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitPowerNotRequiredStep2 @ 0x14002EA68 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 508, 0);
  StorPortUnitPowerNotRequiredStep2((char *)Context);
}
