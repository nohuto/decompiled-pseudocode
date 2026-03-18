/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140C11644
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopInvalidateBusRelationsWorker @ 0x1404BF9E0 (IopInvalidateBusRelationsWorker.c)
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F41A8 (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407212FC (PnpWaitForEmptyDeviceActionQueue.c)
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
