/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140C22720
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopInvalidateBusRelationsWorker @ 0x1404BE320 (IopInvalidateBusRelationsWorker.c)
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F69C8 (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14072D27C (PnpWaitForEmptyDeviceActionQueue.c)
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
