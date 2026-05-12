/*
 * XREFs of StorPortUnitDirectedPowerUpCompletion @ 0x14007A6E0
 * Callers:
 *     <none>
 * Callees:
 *     RaFlushDFxQueue @ 0x14006C134 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortUnitDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _DEVICE_OBJECT **Context)
{
  *((_BYTE *)Context + 504) &= ~0x80u;
  if ( Context[436] == (struct _DEVICE_OBJECT *)(Context + 436) )
    *((_BYTE *)Context + 507) &= ~2u;
  else
    RaFlushDFxQueue(Context[1]);
}
