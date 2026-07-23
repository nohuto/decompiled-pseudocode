/*
 * XREFs of Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F42AC
 * Callers:
 *     IopInvalidateBusRelationsWorker @ 0x1404B94E0 (IopInvalidateBusRelationsWorker.c)
 *     PnpWaitForDevicesToStart @ 0x140C24750 (PnpWaitForDevicesToStart.c)
 *     IoInvalidateInit @ 0x140C24998 (IoInvalidateInit.c)
 * Callees:
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledFallback @ 0x1404F42E4 (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_featureState & 1;
  else
    return Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_featureState,
             3LL);
}
