/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140C24750
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopInvalidateBusRelationsWorker @ 0x1404B94E0 (IopInvalidateBusRelationsWorker.c)
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F42AC (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14072B290 (PnpWaitForEmptyDeviceActionQueue.c)
 */

__int64 PnpWaitForDevicesToStart()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned int)Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline() )
    IopInvalidateBusRelationsWorker();
  LOBYTE(v0) = PnpWaitForEmptyDeviceActionQueue() >= 0;
  return v0;
}
